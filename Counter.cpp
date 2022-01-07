#include "Counter.h"

Counter::Counter()
{
    value_min = 0;
    value_max = 99999;
    step = 1;
    cur_count = 0;
}

Counter::Counter(unsigned int value_min, unsigned int value_max, unsigned int step, unsigned int cur_count)
{
    this->value_min = value_min;
    this->value_max = value_max;
    this->step = step;
    this->cur_count = cur_count;
}


void Counter::Set_min(unsigned int value_min)
{
    this->value_min = value_min;
}

void Counter::Set_max(unsigned int value_max)
{
    this->value_max = value_max;
}

void Counter::Set_cur_count(unsigned int cur_count)
{
    this->cur_count = cur_count;
}

void Counter::Set_step(unsigned int step)
{
    this->step = step;
}

void Counter::step_count()
{
    cur_count += step;
    if (cur_count > value_max) cur_count = 0;
}

void Counter::step_1()
{
    cur_count += 1;
    if (cur_count > value_max) cur_count = 0;
}

void Counter::zeroung()
{
    cur_count = 0;
}

void Counter::Print()
{
    cout << "value_min = " << value_min << "\nvalue_max = " << value_max <<
        "\nstep = " << step << "\ncur_count = " << cur_count << "\n\n";
}




