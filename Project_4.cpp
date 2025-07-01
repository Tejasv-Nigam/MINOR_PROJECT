//Should be able to deposit 
//should be able to widraw
//should be able to check balance
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std ;
// fn decleration
double depo (double Balance);
double widr ( double Balance);
// Main Decleration
int main(){
    cout<<"********************BANKING PROGRAM*******************************"<< endl ;
    double Balance = 0;
    cout<<"Your Bank Balance -> " ;
    cin >> Balance ;
    cout<<"*****************************" << endl;
    int choice = 0 ;
      do{
        cout << "Press '1' for deposit" << endl ;
        cout<<  "Press '2' for Widraw" << endl ;
        cout<<  "Press '3' for Exit" << endl ;
        cout << "What is your choise(1/2/3) -> " ;
        cin >> choice ;
    switch (choice)
    {
        case 1:
            Balance = depo(Balance);
            break;
        case 2 :
            if(Balance<=0){
                cout<< "Insufficient Balnace" << endl  ;
            }else{
                Balance = widr(Balance);
            }
            
            break;
        case 3:
            cout<<"Thanks for Visiting"<<endl;
            break;
        default:
            cout<<"Invalid Input"<< endl;
            break;
        }
        cout<<"*******************"<<endl ;
        cout << "Final Balance: " << setprecision(2) << fixed << Balance << endl ;
        cout<<"*******************"<< endl ;
    } 
    while (choice != 3);   
    cout<<"****************************THANK YOU FOR BANKING WITH US*************************************";
return 0;
}
double depo (double Balance) {
    double deposit;
    cout << "Enter amount to deposit -> ";
    cin >> deposit;
    Balance = deposit +Balance ;
    return Balance ;
}
double widr (double Balance) {
    double widraw;
    cout << "Enter amount to Widraw: ";
    cin >> widraw; 
    if(widraw>Balance){
        cout<<"*******************"<<endl ;
        cout<<"Uanble to Procced due to Insufficient Balance" <<endl;
        cout<<"*******************"<<endl ;
    }else{
        Balance = Balance - widraw ;
    }
    return Balance ;
}