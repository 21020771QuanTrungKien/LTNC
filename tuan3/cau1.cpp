#include <iostream>
using namespace std;
int main()
{
    int n, a[100], b[100];
    cin>>n;
    bool cdung =1 ; 
    for (int i=0; i<n;i++)
        cin>>a[i];
    for (int i=0; i<n;i++){
        cin>>b[i];
        if (a[i]!= b[i]) cdung =0;
    }
    if (cdung ==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}