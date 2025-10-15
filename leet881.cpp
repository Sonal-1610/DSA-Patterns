#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int no_of_boats(vector<int> people,int limit){
    sort(people.begin(),people.end()); 
    int i=0;
    int j=people.size()-1;
    int count=0;
    while(i<=j){
        if(i==j){
          count++;
          i++;
          j--;
        }
        else if(people[i]+people[j]<=limit){
            count++;
            i++;
            j--;
        }
        else{
            count++;
            j--;

        }
    }
    return count;

}
int main(){
    vector<int> people={1,2,3,4,5,6,7,8,9};
    int limit=10;
    int ans=no_of_boats(people,limit);
    cout<<ans;

}
