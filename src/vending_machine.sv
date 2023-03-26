module  vending_machine(
	//  input
	input  logic  clk_i    ,
	input  logic  nickel_i ,
	input  logic  dime_i   ,
	input  logic  quarter_i,
	//  input  logic  rst_ni   ,

	//  output
    output  logic [2:0] change_o,
	output  logic       soda_o
);

   typedef  enum  logic  [3:0]  {
       S0, 
       S1,
       S2, 
       S3,
       S4,
       S5,
       S6,
       S7,
       S8     
   }  state_e;
   state_e  current_state, next_state;
 logic  [2:0]  out;
 logic  soda;
     always_comb  begin : proc_next_state
        change_o  =  out;
        soda_o  =  soda;
       case  (current_state)
         S0:
           next_state = nickel_i ? S1 : (dime_i ? S2 : (quarter_i ? S5 : S0));
		 S1:
		   next_state = nickel_i ? S2 : (dime_i ? S3 : (quarter_i ? S6 : S1));
		 S2:
		   next_state = nickel_i ? S3 : (dime_i ? S4 : (quarter_i ? S7 : S2));
		 S3:
		   next_state = nickel_i ? S4 : (dime_i ? S5 : (quarter_i ? S8 : S3));
         S4:
           next_state = nickel_i ? S1 : (dime_i ? S2 : (quarter_i ? S5 : S0));
         S5:
           next_state = nickel_i ? S1 : (dime_i ? S2 : (quarter_i ? S5 : S0));
         S6:
           next_state = nickel_i ? S1 : (dime_i ? S2 : (quarter_i ? S5 : S0));
         S7:
           next_state = nickel_i ? S1 : (dime_i ? S2 : (quarter_i ? S5 : S0));
         S8:
           next_state = nickel_i ? S1 : (dime_i ? S2 : (quarter_i ? S5 : S0));
         default   next_state = current_state;
       endcase
     end 
    assign  out  = (current_state  ==  S5)  ?  3'b001  : ((current_state  ==  S6)  ?  3'b010  :  ((current_state  ==  S7)  ?  3'b011  :  ((current_state  ==  S8)  ?  3'b100  :  3'b000))); 
    assign  soda  =  (current_state  ==  S0) ?  1'b0  :  ((current_state  ==  S1) ?  1'b0  :  ((current_state  ==  S2) ?  1'b0   :  ((current_state  ==  S3) ?  1'b0  :  1'b1))); 
     always_ff @(posedge clk_i) begin
       // if(!rst_ni)
        //current_state <= S0;
       // else
        current_state <= next_state;
     end

endmodule:  vending_machine
