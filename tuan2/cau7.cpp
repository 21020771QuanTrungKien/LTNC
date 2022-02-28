#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
    int x; cin>>x;
    int i=1; double sum=1, oldsum=0;
    double pre_i=1;
    double pre_x=x;
    while (sum-oldsum>0.001){
        oldsum=sum;
        sum+=pre_x/pre_i;        
        i++;
        pre_i=pre_i*i;
        pre_x=pre_x*x;
    }
    cout<<fixed<<setprecision(4)<<sum; 
    return 0;
}