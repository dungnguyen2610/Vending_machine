#define MAX_SIM 20

void set_random(Vtop *dut, vluint64_t sim_unit) {
	dut -> nickel_i = (rand ()%2 >= 1);
	dut -> quarter_i = (rand ()%2 >= 1);
	dut -> dime_i = (rand ()%2 >= 1);
}
