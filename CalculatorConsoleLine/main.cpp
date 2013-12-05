//
//  main.cpp
//  CalculatorConsoleLine
//  Main file
//
//  Created by Muhd Mirza on 2/12/13.
//  Copyright (c) 2013 Muhd Mirza. All rights reserved.
//

#include <iostream>
#include <Loop.h>

using namespace std;

void loopAgain() {
    cout << "Enter your choice (Type word to the left): ";
    string choiceTwo;
    cin >> choiceTwo;
    
	Loop loop;
    if (choiceTwo == "Add" || choiceTwo == "add") {
        cout << loop.add();
    }
	
	if (choiceTwo == "Sub" || choiceTwo == "sub") {
		cout << loop.subtract();
	}
	
	if (choiceTwo == "Mul" || choiceTwo == "mul") {
		cout << loop.multiply();
	}
	
	if (choiceTwo == "Div" || choiceTwo == "div") {
		cout << loop.divide();
	}
	
	if (
		choiceTwo != "Add" && choiceTwo != "add" &&
		choiceTwo != "Sub" && choiceTwo != "sub" &&
		choiceTwo != "Mul" && choiceTwo != "mul" &&
		choiceTwo != "Div" && choiceTwo != "div"
		) {
		loopAgain();
	}
}

int main(int argc, const char * argv[])
{
    cout << "Calculator" << endl;
    
    string menuArray[] = {"Add - Add", "Sub - Subtract", "Mul - Multiply", "Div - Divide"};
    cout << endl;
    for (int i = 0; i < 4; i++) {
        cout << menuArray[i] << endl;
    }
    
    cout << "Enter your choice (Type word to the left): ";
    string choice;
    cin >> choice;
    
	Loop loop;
    if (choice == "Add" || choice == "add") {
        cout << loop.add();
    }
	
	if (choice == "Sub" || choice == "sub") {
		cout << loop.subtract();
	}
	
	if (choice == "Mul" || choice == "mul") {
		cout << loop.multiply();
	}
	
	if (choice == "Div" || choice == "div") {
		cout << loop.divide();
	}
	
	if (
		choice != "Add" && choice != "add" &&
		choice != "Sub" && choice != "sub" &&
		choice != "Mul" && choice != "mul" &&
		choice != "Div" && choice != "div"
	) {
		loopAgain();
	}
    return 0;
}

