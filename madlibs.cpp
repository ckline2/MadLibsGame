#include <string>
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
    string name;
    cout<<"enter a town name"<<endl;
    cin>>name;
    string name2;
    cout<<"enter a man name"<<endl;
    cin>>name2;
    string adjective;
    cout<<"enter a adjective"<<endl;
    cin>>adjective;
    string noun;
    cout<<"enter a noun"<<endl;
    cin>>noun;
    cout<<number<<" years ago in town called ";
    cout<<name<<" there was a man named ";
    cout<<name2<<endl;
    cout<<name2<<" was a very ";
    cout<<adjective<<" man who lived ";
    cout<<noun<<endl;
    return 0;        
}

