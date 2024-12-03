#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl ;
    cout << "?????: ";
    getline (cin,name) ;

    int year ;
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl ;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl ;
    cout << name << ": " ;
    cin >> year ;
    cin.ignore () ;
    
    string moviename ;
    cout << "Fahsai: I think you may be GEAR " << (year / 10000000 ) - 12 << "." << " I have a free movie ticket for you." << endl ;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl ;
    cout << "Fahsai: What movie do you want to watch?" << endl ;
    cout << name << ": " ;
    getline (cin,moviename) ;

    string day ;
    cout << "Fahsai: So....which day are you free to go with me?" << endl ;
    cout << name << ": " ;
    getline (cin,day) ;

    string text ;
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << moviename << " with you." << endl ;
    cout << name << ": " ;
    getline (cin,text) ;
    
    cout << "Fahsai: 555+ see you " << day << "." << " Bye Bye \\(^ ^)/" ;
}