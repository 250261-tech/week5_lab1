#include <iostream>
using namespace std;

int main() {
    int n;
    int credit;
    float sumcredit=0;
    float total=0;
    float sum=0;
    cin>>n;
    for (int i=1;i<=n;i++) {
        cin>>credit>>total;
        sumcredit+=credit;
        sum+=credit*total;
    }
    float answer=sum/sumcredit ;
    cout<<"Your total GPA is "<<answer<<endl;
    return 0;
}