#include <iostream>
using namespace std;

int main() {
    int max=INT_MIN;
    while (true) {
        int n;
        cin>>n;

        if (max<n) {
            max=n;
        }
        if (n==0) {
            cout<<"Max is "<<max<<endl;
            break;
        }
    }
}