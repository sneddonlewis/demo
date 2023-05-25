
#include <iostream>
#include "Rectangle.hpp"

using std::cout;
using std::endl;

void PrintInfo(const Rectangle& rect) {
    cout << "Rectangle width = " << rect.Width()
         << ", height = " << rect.Height()
         << endl
         << "Area = " << rect.Area()
         << ", Perimeter = " << rect.Perimeter()
         << endl << endl;
}

int main() {
	cout << "Default Rectangle" << endl;
	Rectangle r1{};
	PrintInfo(r1);

	cout << "Rectangle r{10, 20}" << endl;
	Rectangle r2{10, 20};
	PrintInfo(r2);

	cout << "After 2x Scaling" << endl;
	r2.Scale(2.0);
	PrintInfo(r2);
}
