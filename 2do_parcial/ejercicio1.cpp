#include <iostream>
using namespace std;

int main(){

    int x[3][3][3]={{{1,2,3},{4,5,6},{7,8,9}},
                    {{11,12,13},{14,15,16},{17,18,19}},
                    {{21,22,23},{24,25,26},{27,28,29}}
                    };
   
    int (*ptr)[3][3]= x;
    
    cout<<(*(*(x+0)+2)+1)<<endl;
    cout<<(*(*(x+1)+2)+1)<<endl;
    cout<<(*(*(x+2)+2)+1)<<endl;
    
    cout<<*(*(*(x+0)+0)+2)<<endl;
    cout<<*(*(*(x+1)+0)+2)<<endl;
    cout<<*(*(*(x+2)+0)+2)<<endl;
    
    
}