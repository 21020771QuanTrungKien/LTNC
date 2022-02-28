#include <iostream>
using namespace std;
int main()
{
    int ga,cho,con,chan,dem;
    cin>>con>>chan;
    for (cho=1;cho<con;cho++){
    for (ga=1;ga<con;ga++)
            if((ga+cho==con )&&(ga*2+cho*4==chan)){
                 dem=dem+1;
            }}
        if (dem==0 ) cout<<"invalid";
        else if (dem==1)   cout<<"chicken = "<<ga<<", dog = "<<cho;
        return 0;
    
}