#include <iostream>
using namespace std;

int main(){
    int n=10;
    int sumOdd=0;

    for (int i=1; i<=n; i++){
        if (i%2 != 0 ){
            // cout<< i<< " ";
            sumOdd += i;
        }
    }
    cout<< "Sum is " << sumOdd << endl;
    return 0;
}