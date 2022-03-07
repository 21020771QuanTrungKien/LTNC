#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[100];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int n_clone=n;
    if (n_clone==1) cout<<arr[0]; else
    {
        for (int i=1; i<n_clone; i++){
            if (arr[i]==arr[i-1]){
                for (int j=i-1; j<n_clone-1; j++){
                    arr[j]=arr[j+1];
                }
                n_clone-=1;
                i--;
            }
        }
        for (int i=0; i<n_clone; i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}