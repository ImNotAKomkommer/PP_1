#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    int d = a * b;
    int c = (d % 109 + 109) % 109;
    cout << c;
    return 0;
}