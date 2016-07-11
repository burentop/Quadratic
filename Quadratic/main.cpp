//
//  main.cpp
//  Quadratic
//
//  Created by Brent Perry on 7/10/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    double a, b, c;
    double x1, x2;
    
    cout << "You are going to input the values for a quadratic equation.\n";
    cout << "\n";
    cout << "Please enter the value for 'a': ";
    cin >> a;
    cout << "\n";
    cout << "Please enter the value for 'b': ";
    cin >> b;
    cout << "\n";
    cout << "Please enter the value for 'c' (should be < 1): ";
    cin >> c;
    cout << "\n";
    
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    
    cout << "The two possible solutions for " << a << "x(sq) + " << b << "x + " << c << " = 0, are: \n";
    cout << x1 << " and " << x2 << "\n";
    
    
}
