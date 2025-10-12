#include<iostream>
using namespace std;
    
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                continue;
            }
             else{
                if(s[i]<=90){
                    s[i]=s[i]+32;
                }
                ans+=s[i];
            }
        }
        cout<<ans<<" ";
        int i=0;
        int j=ans.size()-1;
        while(i<=j){
            if(ans[i]!=ans[j]){
                return 0;
            }
            i++;
            j--;
        }
        return 1;
    }
    int main(){
     string s="Was it a car or a cat I saw";
     cout<<isPalindrome(s);
     
    }
