#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int page = (b - 1) / a + 1; 
    int line_on_page = (b - 1) % a + 1; 

    cout << page << " " << line_on_page << endl;
    return 0;
}