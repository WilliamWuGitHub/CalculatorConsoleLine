//
//  Loop.cpp
//  CalculatorConsoleLine
//  First loop file
//
//  Created by Muhd Mirza on 4/12/13.
//  Copyright (c) 2013 Muhd Mirza. All rights reserved.
//

#include <iostream>
#include "Loop.h"

using namespace std;

Loop::Loop() {
}

double Loop::add() {
	cout << endl;
	cout << "Add" << endl;
	
	cout << "Enter first number: ";
	double addDoubleOne;
	cin >> addDoubleOne;
	
	cout << "Enter second number: ";
	double addDoubleTwo;
	cin >> addDoubleTwo;
	
	double sum = addDoubleOne + addDoubleTwo;
	return sum;
}

double Loop::subtract() {
	cout << endl;
	cout << "Subtract" << endl;
	
	cout << "Enter first number: ";
	double subDoubleOne;
	cin >> subDoubleOne;
	
	cout << "Enter second number: ";
	double subDoubleTwo;
	cin >> subDoubleTwo;
	
	double difference = subDoubleOne - subDoubleTwo;
	return difference;
}

double Loop::multiply() {
	cout << endl;
	cout << "Multiply" << endl;
	
	cout << "Enter first number: ";
	double mulDoubleOne;
	cin >> mulDoubleOne;
	
	cout << "Enter second number: ";
	double mulDoubleTwo;
	cin >> mulDoubleTwo;
	
	double product = mulDoubleOne * mulDoubleTwo;
	return product;
}

double Loop::divide() {
	cout << endl;
	cout << "Divide" << endl;
	
	cout << "Enter first number: ";
	double divDoubleOne;
	cin >> divDoubleOne;
	
	cout << "Enter second number: ";
	double divDoubleTwo;
	cin >> divDoubleTwo;
	
	double division = divDoubleOne / divDoubleTwo;
	return division;
}
