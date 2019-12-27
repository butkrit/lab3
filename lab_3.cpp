#include <iostream>

using namespace std;

int main(){
    float a =1;
    float b =6;
    float c;
    float d =0;
    while(b<20){
        c = a/b;
        b = b+1;
        d = d+c;
    }
    cout<< d;
     return 0;    
}