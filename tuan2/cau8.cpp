#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int dem=0;
    do {
        if (n!=0){
            n/=10;
            dem++;
        }
    } while (n!=0);
    if (dem==0) cout<<1; else cout<<dem;
    return 0;
}