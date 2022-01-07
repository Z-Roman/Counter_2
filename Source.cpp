#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
	setlocale(0, "");

	Counter w;
	w.Print();
	Counter a(0, 999, 5, 100);
	a.Print();
	a.step_count();
	a.Print();

}
