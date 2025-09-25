#include <iostream>

Void simpleCalculator() 
   {
     clrscr();
    double num1, num2;
    char op;

    cout << "Simple Calculator"<< endl;
    cout << "Operations: +  -  *  /"<< endl;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+,-,*,/):";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    double result;
    switch(op) 
     {
        case '+': result = num1 + num2;
            cout << "Result: " << result << endl;
            break;

        case '-': result = num1 - num2;
            cout << "Result: " << result << endl;
            break;

        case '*': result = num1 * num2;
            cout << "Result: " << result << endl;
            break;

        case '/':
            if (num2 != 0) 
             {
                result = num1 / num2;
                cout << "Result: " << result << endl;
             }
             else
             {
                cout << "Division by zero not allowed:" << endl;
             }
            break;

            default:
            cout << "Invalid operator! Please use +, -, * or /" << endl;
          }

    getch();
}