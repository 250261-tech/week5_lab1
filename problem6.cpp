#include <iostream>
using namespace std;

int main() {
    int n;
    int credit;
    int sumcredit=0;
    float total;
    int sum=0;
    cin>>n;
    for (int i=0;i<=n;i++) {
        cin>>credit>>total;
        sumcredit+=credit;
        sum+=credit*total;
    }
    cout<< sum/sumcredit << endl;
    return 0;
}