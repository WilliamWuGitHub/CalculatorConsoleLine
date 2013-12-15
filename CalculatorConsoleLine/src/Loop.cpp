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

void Loop::outputArray() {
	string menuArrayTwo[] = {"add - Add", "sub - Subtract", "mul - Multiply", "div - Divide"};
    cout << endl;
    for (int i = 0; i < 4; i++) {
        cout << menuArrayTwo[i] << endl;
    }
}

void Loop::loopMenuAgain() {
    cout << "Enter your choice (Type word to the left of hyphen) or q to quit: ";
    string menuChoice;
    cin >> menuChoice;
    
	Loop loop;
    if (menuChoice == "Add" || menuChoice == "add") {
        loop.add();
    }
	
	if (menuChoice == "Sub" || menuChoice == "sub") {
		loop.subtract();
	}
	
	if (menuChoice == "Mul" || menuChoice == "mul") {
		loop.multiply();
	}
	
	if (menuChoice == "Div" || menuChoice == "div") {
		loop.divide();
	}
	
	if (menuChoice == "Q" || menuChoice == "q") {
		cout << "Program quit" << endl;
	}
	
	if (
		menuChoice != "Add" && menuChoice != "add" &&
		menuChoice != "Sub" && menuChoice != "sub" &&
		menuChoice != "Mul" && menuChoice != "mul" &&
		menuChoice != "Div" && menuChoice != "div" &&
		menuChoice != "Q" && menuChoice != "q"
		) {
		cout << "Invalid input!" << endl;
		loopMenuAgain();
	}
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
	cout << endl;
	
	string choice;
	
	while (choice != "Retry" && choice != "retry" &&
		   choice != "Menu" && choice != "menu" &&
		   choice != "Q" && choice != "q"
		   ) {
		cout << "Type 'retry' to do again, 'menu' to go to main menu or press 'q' to quit" << endl;
		cout << "Your choice: ";
		cin >> choice;
		
		if (choice == "Retry" || choice == "retry") {
			add();
		}
		
		else if (choice == "Menu" || choice == "menu") {
			outputArray();
			loopMenuAgain();
		}
		
		else if (choice == "Q" || choice == "q") {
			cout << "Program quit" << endl;
		}
		
		else {
			cout << "Invalid input!" << endl;
		}
	}
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
	
	string choice;
	
	while (choice != "Retry" && choice != "retry" &&
		   choice != "Menu" && choice != "menu" &&
		   choice != "Q" && choice != "q"
		   ) {
		cout << "Type 'retry' to do again, 'menu' to go to main menu or press 'q' to quit" << endl;
		cout << "Your choice: ";
		cin >> choice;
		
		if (choice == "Retry" || choice == "retry") {
			subtract();
		}
		
		else if (choice == "Menu" || choice == "menu") {
			outputArray();
			loopMenuAgain();
		}
		
		else if (choice == "Q" || choice == "q") {
			cout << "Program quit" << endl;
		}
		
		else {
			cout << "Invalid input!" << endl;
		}
	}
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
	cout << endl;
	
	string choice;
	
	while (choice != "Retry" && choice != "retry" &&
		   choice != "Menu" && choice != "menu" &&
		   choice != "Q" && choice != "q"
		   ) {
		cout << "Type 'retry' to do again, 'menu' to go to main menu or press 'q' to quit" << endl;
		cout << "Your choice: ";
		cin >> choice;
		
		if (choice == "Retry" || choice == "retry") {
			multiply();
		}
		
		else if (choice == "Menu" || choice == "menu") {
			outputArray();
			loopMenuAgain();
		}
		
		else if (choice == "Q" || choice == "q") {
			cout << "Program quit" << endl;
		}
		
		else {
			cout << "Invalid input!" << endl;
		}
	}
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
	
	string choice;
	
	while (choice != "Retry" && choice != "retry" &&
		   choice != "Menu" && choice != "menu" &&
		   choice != "Q" && choice != "q"
		   ) {
		cout << "Type 'retry' to do again, 'menu' to go to main menu or press 'q' to quit" << endl;
		cout << "Your choice: ";
		cin >> choice;
		
		if (choice == "Retry" || choice == "retry") {
			divide();
		}
		
		else if (choice == "Menu" || choice == "menu") {
			outputArray();
			loopMenuAgain();
		}
		
		else if (choice == "Q" || choice == "q") {
			cout << "Program quit" << endl;
		}
		
		else {
			cout << "Invalid input!" << endl;
		}
	}
}
