#include <iostream>
using namespace std;
int main() {
    int count = 0;
    for (int i=65; i<=90; i++) {
        count++;
        cout << char(i)<<" ";
        if (count==5) {
            cout << endl;
            count=0;
        }

    }
    return 0;
}