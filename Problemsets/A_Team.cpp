#include <iostream>
using namespace std;
int main(){

// Algorithm:
// 1.input
// 2.Loop for N
// 3.if() condition

int n,x,y,z,count=0;
// cout<<"input n"<<endl;
cin>>n;
for(int i=0; i<n; i++){
// cout<<"input x"<<endl;
cin>>x;
// cout<<"input y"<<endl;
cin>>y;
// cout<<"input z"<<endl;
cin>>z;

if((x+y+z)>=2){
    count++;
    
}
}
cout<<count<<endl;

return 0;
}