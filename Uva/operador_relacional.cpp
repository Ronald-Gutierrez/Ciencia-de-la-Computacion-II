#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int long long a,b;
    int cant;
    cout<<"INRESE CUANTOS VALORES A EVALUAR"<<endl;
    cin>>cant;
    cout<<"INGRESE LOS VALORES A EVALUAR"<<endl;
    
    for(int i=0;i<=cant;i++){
        cin>>a>>b;
        if(a<b)
            cout<<"<"<<endl;
        
        else if (a>b)
            cout<<">"<<endl;
        
        else
            cout<<"="<<endl;
    }

    return 0;
}