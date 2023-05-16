// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

    void printSquare(int n) {
        for(int i=1;i<=n;i++){
            cout<<"*"<<" ";
            for(int j=1;j<n;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }

int main()
{
    int n;
    cin>>n;
    printSquare(n);
    return 0;
}