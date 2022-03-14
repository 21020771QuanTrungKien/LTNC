#include <bits/stdc++.h>

using namespace std;

void printArrow(int n, bool left) {
    int temp=n;
    int count=0;
    if (left==false) {
        for (int i=0; i<n; i++) {
            cout<<"*";
            if (i==n-1) {
                count++;
                i=-1;
                n--;
                cout<<endl;
                if (count<temp) {
                    for (int j=0; j<count; j++) {
                    cout<<"  ";
                    }
                }
            }
        }
        count-=2;
        for (int j=0; j<count; j++) {
            cout<<"  ";
        }
        cout<<"*";
        n+=2;
        for (int i=0; i<n; i++) {
            if (i==n-1) {
                if (n<temp) {
                    i=-1;
                    n++;
                    count--;
                    cout<<endl;
                    for (int j=0; j<count; j++) {
                        cout<<"  ";
                    }
                } else break;
            }
            cout<<"*";
        }
    } else if (left==true) {
        count=n-1;
        for (int j=0; j<count; j++) {
            cout<<" ";
        }
        for (int i=0; i<n; i++) {
            cout<<"*";
            if (i==n-1) {
                if (count>0) {
                    i=-1;
                    n--;
                    cout<<endl;
                    count--;
                    for (int j=0; j<count; j++) {
                        cout<<" ";
                    }
                }
            }
        }
        n++;
        count++;
        cout<<endl;
        cout<<" ";
        for (int i=0; i<n; i++) {
            cout<<"*";
            if (i==n-1) {
                if (n<temp) {
                    i=-1;
                    n++;
                    cout<<endl;
                    count++;
                    for (int j=0; j<count; j++) {
                        cout<<" ";
                    }
                }
            }
        }
    }
}


