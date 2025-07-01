#include <iostream>
using namespace std ;
int main (){
    char op ;
    double num1,num2,result;
                cout << "******************************* CALCULATOR **************************" << endl;
cout << "Enter first number: ";
    cin >> num1;
cout << "Choose an operation (+, -, *, /) => ";
    cin >> op ;
    cout << "Enter second number: ";
    cin >> num2 ;
    switch (op) {
        case ('+'):
            result = num1 + num2 ;
            cout << "\033[1mResult:\033[0m " << result << endl;
            break;
        case ('-'):
            result = num1 - num2 ;
            cout << "\033[1mResult:\033[0m " << result << endl;
            break;
        case ('*'):
            result = num1 * num2 ;
            cout << "\033[1mResult:\033[0m " << result << endl;
            break;
        case ('/'):
            if (num2||num1 !=0) {
                result = num1 / num2 ;
                cout << "\033[1mResult:\033[0m " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << " Error: Invalid operation. Please choose + ,- ,* ,/" << endl;
    }
                cout << "******************************  END  ********************************" << endl;
return 0 ;
}