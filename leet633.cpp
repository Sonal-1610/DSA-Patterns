#include<iostream>
#include<cmath>
using namespace std;
bool twonum(int c){
int i=0;
int j=(int)sqrt(c);
while(i<=j){
    long long ans=(long long)i*i+(long long)j*j;
    if(ans==c){
        return 1;
    }
    else if(ans>c){
        j--;
    }
    else{
        i++;
    }
}
return 0;
}
int main(){
    int c=17;
   bool flag= twonum(c);
   cout<<flag;
}