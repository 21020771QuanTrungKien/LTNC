#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double a[100];
    cin>>n;
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i= 0; i<n-1;i++){
        for (int j=i+1; j<n;j++){
            if (a[j]>a[i]){
            double c=a[j];
            a[j]=a[i];
            a[i]=c;
        }
    }
    }
    for (int i=0;i<n;i++){
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
    }
    return 0;
}