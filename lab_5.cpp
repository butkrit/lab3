#include <iostream>

using namespace std;

int main(){
  string Text1,Text2;
  int N;
  int count =0;
  cout<<"Enter the first text:";
  cin>> Text1;
  cout<<"Enter the second text: ";
  cin>> Text2;
  cout<< " Enter N: ";
  cin>> N;
  while (count<N){
    if(count%2 ==0){
        cout<<Text1<<" ";
    }else{
        cout<<Text2<<" ";
    }
    count+=1;
  }
  return 0;
}

