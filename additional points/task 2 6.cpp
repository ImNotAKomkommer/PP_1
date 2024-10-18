#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if(a>b, a>c){
        cout << a;
    }
    else if(a<b, a<c, b<c){
        cout << c;
    }
    else if(a<b,c<b){
        cout << b;
    }
    return 0;
}