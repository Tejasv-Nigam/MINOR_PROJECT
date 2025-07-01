#include<iostream>
#include<ctime>
using namespace std ;
int main (){
cout << "***************************** Number Guessing Game *****************************"<< endl ;
    int Guess , tries = 0 ;
        srand(time(NULL));
    int value = rand() % 100 +1 ;
        do {
    cout << "-------------------------------------------------------"<< endl ;
            cout << "What is your Guess : " ;
            cin >> Guess ;
            tries += 1 ;
                if (value > Guess){
                    cout << "Too low " << endl ;
                }else if(value < Guess) {
                cout << "Too High" << endl ;
            }else {
                cout << "Your Guess is correct " << endl ;
            }
        cout << "No. of attempt :" << tries << endl ;
    cout << "-------------------------------------------------------"<< endl ;
        }while (Guess != value);
        {
            cout << "\033[1mNo. attempts taken to guess is :\033[0m:"<< tries << endl ;
        }  
cout << "********************************************************************************";
    return 0 ;
}