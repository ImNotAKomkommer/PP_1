#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;
    if(a - c == b - d || 
        a - c == d - b){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}