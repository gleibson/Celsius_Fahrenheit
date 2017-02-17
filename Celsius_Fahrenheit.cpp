//Exercise form book C++ 6th Edition page 63
//Celsius to Fahrenheit
#include <iostream>

int Celsius_to_Fahrenheit(int);


int main()
{
	int celsius;
	std::cout << "Please enter a Celsius is value: ";
	std::cin >> celsius;
	int fahrenheit = Celsius_to_Fahrenheit(celsius);
    std::cout << celsius << " degrees Celsius is " << fahrenheit << " Fahrenheit." << "\n\n";
}


int Celsius_to_Fahrenheit(int sts)
{
	return 1.8 * sts + 32.0;
}