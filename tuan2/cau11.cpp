#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i=0; i<n; i++) {
        float temp;
        cin>>temp;
        v.push_back(temp);
    }
    double average=0.0;
    double sum1=0.0;
    for (int i=0; i<n; i++) {
        sum1=(double)sum1+(double)v[i];
    }
    average=(double)sum1/n;
    double sum2=0.0;
    for (int i=0; i<n; i++) {
        sum2=(double)sum2+(double)((v[i]-average)*(v[i]-average));
    }
    cout<<fixed<<setprecision(2)<<(sum2/n);
    return 0;
}
