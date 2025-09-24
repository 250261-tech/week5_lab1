#include <iostream>
using namespace std;
#include <algorithm>
int main() {
    string n;
    cin>>n;
    std::reverse(n.begin(),n.end());
    cout<<n<<endl;
    return 0;
}