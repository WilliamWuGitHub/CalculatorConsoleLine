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

int main(int argc, const char * argv[])
{
    cout << "Calculator" << endl;
    
    string menuArray[] = {"A - Add", "S - Subtract", "M - Multiply", "D - Divide"};
    cout << endl;
    for (int i = 0; i < 4; i++) {
        cout << menuArray[i] << endl;
    }
    
    cout << "Enter your choice (Type letter): ";
    char choice;
    cin >> choice;
    
	Loop loop;
    if (choice == 'A' || choice == 'a') {
        cout << loop.add();
    }
	
	if (choice == 'S' || choice == 's') {
		cout << loop.subtract();
	}
	
	if (choice == 'M' || choice == 'm') {
		cout << loop.multiply();
	}
	
	if (choice == 'D' || choice == 'd') {
		cout << loop.divide();
	}
    return 0;
}

