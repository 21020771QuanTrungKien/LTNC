#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
const int MAX=1000;
int main()
{
    int n;
    cin>>n;
    double a[MAX],b[MAX];
    for (int i =0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++)
        cin>>b[i];
        double product = 0;
        for(int i=0;i<n;i++){
            product += a[i] * b[i];}
        cout <<fixed<<setprecision(2)<<product;
    return 0;
}