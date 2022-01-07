#include <iostream>
using namespace std;




int main()
{
	setlocale(0, "");

	Counter water;
	water.Print();
	Counter(0, 999, 5, 100);
	water.Print();

}
