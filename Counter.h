#pragma once
#include<iostream>
using namespace std;

class Counter
{
	unsigned int value_min;
	unsigned int value_max;
	unsigned int step;
	unsigned int cur_count;

public:

	Counter();

	Counter(unsigned int value_min, unsigned int value_max, unsigned int step, unsigned int cur_count);

	void Set_min(unsigned int value_min);

	void Set_max(unsigned int value_max);

	void Set_cur_count(unsigned int cur_count);

	void Set_step(unsigned int step);

	void step_count();

	void Print();

};

