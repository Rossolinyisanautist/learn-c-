//
// Created by Isa on 3/17/21.
//

#include "test_utils.h"

#define tag "[operator=] [assign operator] [operator] [operators]"

TEST_CASE("assignment operator")
{
	initializer_list<int> input = rand_ints;
	gcc_list<int> act_inp = input;
	std_list<int> exp_inp = input;

	gcc_list<int> act = init_list_1;
	std_list<int> exp = init_list_1;

	act = act_inp;
	exp = exp_inp;

	LISTS_REQUIRE_EQUAL(act, exp);
	LISTS_REQUIRE_EQUAL(act_inp, exp_inp);
}


TEST_CASE("move assignment")
{
	initializer_list<int> input = rand_ints;
	gcc_list<int> act_inp = input;
	std_list<int> exp_inp = input;

	gcc_list<int> act = init_list_1;
	std_list<int> exp = init_list_1;

	act = std::move(act_inp);
	exp = std::move(exp_inp);

	LISTS_REQUIRE_EQUAL(act, exp);
	LISTS_REQUIRE_EQUAL(act_inp, exp_inp);
}

TEST_CASE("initializer_list assignment")
{
	gcc_list<int> act = init_list_1;
	std_list<int> exp = init_list_1;

	act = init_list_2;
	exp = init_list_2;

	LISTS_REQUIRE_EQUAL(act, exp);
}