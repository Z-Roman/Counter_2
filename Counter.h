#pragma once
#include<iostream>
#include<Windows.h>
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

	void SetMin(unsigned int value_min);

	void SetMax(unsigned int value_max);

	void SetCurrent(unsigned int cur_count);

	void SetStep(unsigned int step);

	void StepCount();

	void StepOne();

	void Zeroung();

	void Print();

	void Play();

};

