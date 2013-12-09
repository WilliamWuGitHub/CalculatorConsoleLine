//
//  Loop.h
//  CalculatorConsoleLine
//  First loop file header
//
//  Created by Muhd Mirza on 4/12/13.
//  Copyright (c) 2013 Muhd Mirza. All rights reserved.
//

#ifndef __CalculatorConsoleLine__Loop__
#define __CalculatorConsoleLine__Loop__

#include <iostream>

using namespace std;

class Loop {
    public:
		Loop();
		
		void errorMessage(const string errorStage);
	
        void add();
        void subtract();
		void multiply();
		void divide();
	
    private:
    
};

#endif /* defined(__CalculatorConsoleLine__Loop__) */
