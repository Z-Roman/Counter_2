#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
	setlocale(0, "");

	Counter w;
	w.SetStep(50);
	w.SetMax(10000);
	w.Play();

}
