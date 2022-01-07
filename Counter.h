#pragma once
#include<iostream>

class Counter
{
	unsigned int value_min;
	unsigned int value_max;
	unsigned int step;
	unsigned int cur_count;

public:

	Counter();

	Counter(unsigned int value_min, unsigned int value_max, unsigned int step, unsigned int cur_count);

	int Set_min(unsigned int value_min);

	int Set_max(unsigned int value_max);

	int Set_cur_count(unsigned int cur_count);

	int Set_step(unsigned int step);

};

