# include <iostream>
using namespace std ; 
int main (){
cout << "*************************** TEMPERATURE-CONVERTER ***************************" << endl ;
        double  temp ;
        char unit ; 
    cout << "What is the temp you want to be converted ('F/C')=>"  ;
    cin >> unit ;
    if (unit == 'F' || unit == 'f'){
        cout <<"What is the temp => " ;
    cin >> temp ;
        cout << "Temp to be converted from 'F' to 'C' is =>" << temp << "'F'" << endl  ;
    temp = (temp*1.8)+32.0 ;
        cout << "Temp in F is =>"<< temp << " F" << endl ;
    
}
else if (unit == 'C' || unit == 'c'){
        cout <<"What is the temp => " ;
    cin >> temp ;
        cout << "Temp to be converted from 'C' to 'c' is =>" << temp << "'C'" << endl  ;
    temp = (temp -32)/1.8 ;
        cout << "Temp in C is =>"<< temp <<" C"<< endl ;
}
else {
    cout << "The Response is Invalid"<< endl ;
}    
cout <<"******************************************************************************";
return 0 ;
}