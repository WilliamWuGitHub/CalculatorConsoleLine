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

void Loop::errorMessage(const string errorStage) {
	cout << "Invalid input in " << errorStage << "!" << endl;
}

void Loop::add() {
	cout << endl;
	cout << "Add" << endl;
	
	cout << "Enter first number: ";
	double addDoubleOne;
	cin >> addDoubleOne;
	while (cin.fail()) {
		errorMessage("adding first number");
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Enter first number again: ";
		cin >> addDoubleOne;
	}
	
	cout << "Enter second number: ";
	double addDoubleTwo;
	cin >> addDoubleTwo;
	while (cin.fail()) {
		errorMessage("adding second number");
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Enter second number again: ";
		cin >> addDoubleTwo;
	}
	
	double sum = addDoubleOne + addDoubleTwo;
	cout << "Sum: " << sum << endl;
}

void Loop::subtract() {
	cout << endl;
	cout << "Subtract" << endl;
	
	cout << "Enter first number: ";
	double subDoubleOne;
	cin >> subDoubleOne;
	while (cin.fail()) {
		errorMessage("subtracting first number");
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Enter first number again: ";
		cin >> subDoubleOne;
	}
	
	cout << "Enter second number: ";
	double subDoubleTwo;
	cin >> subDoubleTwo;
	while (cin.fail()) {
		errorMessage("subtracting second number");
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Enter second number again: ";
		cin >> subDoubleTwo;
	}
	
	double difference = subDoubleOne - subDoubleTwo;
	cout << "Difference: " << difference << endl;
}

void Loop::multiply() {
	cout << endl;
	cout << "Multiply" << endl;
	
	cout << "Enter first number: ";
	double mulDoubleOne;
	cin >> mulDoubleOne;
	while (cin.fail()) {
		errorMessage("multiplying first number");
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Enter first number again: ";
		cin >> mulDoubleOne;
	}
	
	cout << "Enter second number: ";
	double mulDoubleTwo;
	cin >> mulDoubleTwo;
	while (cin.fail()) {
		errorMessage("multiplying second number");
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Enter second number again: ";
		cin >> mulDoubleTwo;
	}
	
	double product = mulDoubleOne * mulDoubleTwo;
	cout << "Product: " << product << endl;
}

void Loop::divide() {
	cout << endl;
	cout << "Divide" << endl;
	
	cout << "Enter first number: ";
	double divDoubleOne;
	cin >> divDoubleOne;
	while (cin.fail()) {
		errorMessage("dividing first number");
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Enter first number again: ";
		cin >> divDoubleOne;
	}
	
	cout << "Enter second number: ";
	double divDoubleTwo;
	cin >> divDoubleTwo;
	while (cin.fail()) {
		errorMessage("dividing second number");
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Enter second number again: ";
		cin >> divDoubleTwo;
	}
	
	double division = divDoubleOne / divDoubleTwo;
	cout << "Division: " << division << endl;
}
