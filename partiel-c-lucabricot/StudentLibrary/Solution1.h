#pragma once

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

enum class TemperatureUnits
{
	CELSIUS,
	FAHRENHEIT,
	KELVIN
};

class Solution1 // Temperature converter
{
public:
	static float ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to);
};


int main() {
	float c;
	float d;
	float temp;
	cout << "Quelle unitée voulez vous convertir ?\n";
	cout << "1. Celcius\n";
	cout << "2. farhrenheit\n";
	cout << "3. Kelvin\n";
	cin >> c;
	
	cout << "En quelle unitée voulez vous le convertir ?\n";
	cout << "1. Celcius\n";
	cout << "2. farhrenheit\n";
	cout << "3. Kelvin\n";
	cin >> d;

	cout << "Quelle température voulez vous convertir ? ?\n";
	cin >> temp;

	if (c == '1' && d == '1') //cel to cel
	{
		cout << "Votre valeur est inchangée.\n";
		cout << "Temperature en Celcius: " << temp;
	}
	
	else if (c == '1' && d == '2') //cel to far
	{
		float f = (9 * c) / 5;
		f += 32;
		cout << "Temperature en Fahrenheit: " << f;
	}

	else if (c == '1' && d == '3') //cel to kel
	{
		float k = temp + 273.15;
		cout << "Temperature en Kelvin: " << k;
	}

	else if (c == '2' && d == '2') //far to far
	{
		cout << "Votre valeur est inchangée.\n";
		cout << "Temperature in Kelvin: " << temp;
	}

	else if (c == '2' && d == '1') //far to cel
	{
		float ce = (temp - 32) * 5 / 9;
		cout << "Temperature en Celcius: " << ce;
	}

	else if (c == '2' && d == '3') //far to kel
	{
		float k = (5.0 / 9) * (temp - 32) + 273.15;
		cout << "Temperature en Kelvin: " << k;
	}

	else if (c == '3' && d == '3') //kel to kel
	{
		cout << "Votre valeur est inchangée.\n";
		cout << "Temperature in Fahrenheit: " << temp;
	}
	
	else if(c == '3' && d == '1') //kel to cel
	{
		float ce = temp - 273.15;
		cout << "Temperature en Fahrenheit: " << ce;
	}

	else if (c == '3' && d == '2') //kel to far
	{
		float f = (9.0 / 5) * (temp - 273.15) + 32;
		cout << "Temperature en Kelvin: " << f;
	}	
	
	
	float f = (9 * c) / 5; // calculating the first part of the formula
	f += 32; // calculating the remaining part
	cout << "Temperature in Fahrenheit: " << f; // printing the calculated temperature
	return 0;
}

#endif
