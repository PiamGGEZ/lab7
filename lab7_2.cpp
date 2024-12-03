#include <iostream>
#include <string>
using namespace std;

int main() {
    string n, m, d; 
    int id; 
    
 
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin, n); 
    
    cout << "Fahsai: Wow!!! " << n << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << n << ": ";
    cin >> id; 
    
    cout << "Fahsai: I think you may be GEAR " << (id / 10000000) - 12 << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cin.ignore(); 
    cout << n << ": ";
    getline(cin, m); 
    
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << n << ": ";
    getline(cin, d); 
    
    cout << "Fahsai: " << d << "....that is OK!!! I'm looking forward to watching " << m << " with you." << endl;
    cout << "Luke Skywalker: May the Force be with you krub" << endl;
    cout << "Fahsai: 555+ see you " << d << ". Bye Bye \\(^ ^)/" << endl;
}