#include <iostream>
using namespace std;
int main()
{
    int n;
    int a[100];
    int dem=0;
    cin>>n;
    for (int i=0; i<n;i++) cin>>a[i];
    for (int i = 0; i < n/2; i++) {
    if ( a[i] == a[n-1-i] ){
        dem++;
    } 
    if (dem==1) cout<<"Symmetric array.";
    else cout<<"Asymmetric array.";
    return 0;
}}