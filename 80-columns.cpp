#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    if(text.length() > 80){
        text = text.substr(0 , 80);
    }

    cout << left << setw(80) << text << endl;

    return 0;
}