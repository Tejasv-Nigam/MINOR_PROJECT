//Building a Rock Paper Scissor Game
//  srand(time(NULL));
// int value = rand() % 100 +1 ;

#include<iostream>
#include<ctime>
using namespace std ;
// Fn Decleration
int userChoice(int choice);
int ScoreCard(int choice , int SysValue );
int SysPlay(int choice);
int main (){
    cout << "*******************LET'S PLAY ROCK PAPER SCISSOR******************"<<endl;
    int choice =0 ;
    int Score = 0 ;
    int Player = 0 ;
    int System = 0 ;
    do{
        cout << "*****************************"<<endl;
        cout<< "Choose amoung the following (1,2,3)"<<endl;
        cout<< "1 -> ROCK"<< endl;
        cout<< "2 -> PAPER" << endl;
        cout<< "3 -> SCISSOR" << endl;
        cout<<"Your Choice is ->";
        cin>> choice ;
        cout << "*****************************"<<endl;
    int choise = userChoice(choice);
    int SysValue = SysPlay(choice);
    int result = ScoreCard(choice , SysValue );
    } 
    while (choice != 4);
    cout << "*****************************************************************"<<endl;
    return 0;
}

int SysPlay(int choice){
    if (choice == 4){
        return -1 ;
    }
    else{
    srand(time(0));
    int value = rand() % 3;
    int SysValue = value + 1;
    string SysChoice[3] = {"Rock","Paper","Scissor"};
    cout << "Random pick: " << SysChoice[value] << endl;
    return SysValue ;
    }
}


int userChoice(int choice){
    cout<<"Player Choice is = ";
    switch (choice)
    {
    case 1 :
        cout<<"Rock"<<endl; 
        break;
    case 2:
        cout<<"Paper"<<endl;
        break;
    case 3 :
        cout<<"Scissor"<<endl;
        break;
    case 4 : 
        cout<<"EXIT"<<endl;
    default:
        break;
    }
return choice ;
}


int ScoreCard(int choice , int SysValue ){
       if ( SysValue == choice )
    {
        cout << "It's a Draw"<<endl;
        return 0 ;
    }
    else if ((SysValue == 1 && choice == 3) ||
             (SysValue == 2 && choice == 1) ||
             (SysValue == 3 && choice == 2))
    {
        cout << "System Won "<<endl;
        return -1 ;
    }
    else if ((choice == 1 && SysValue == 3) ||
             (choice == 2 && SysValue == 1) ||
             (choice == 3 && SysValue == 2))
    {
        cout << "Player Won"<<endl;
        return 1 ;
    }
    else{
        cout << "Match is ENDED"<< endl;
    }

}