#include <iostream>
using namespace std;

int main (){
    char ch;
    cout << "Enter a letter:";
    cin >> ch;
    if (ch>'a' && ch<'z'){
        cout << "The letter is in lowercase";
    }
    else {
        cout << "The letter is uppercase";
    }
    return 0;
}