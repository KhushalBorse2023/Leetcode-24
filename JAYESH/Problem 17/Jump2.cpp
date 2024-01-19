// Input: v = [2,3,1,1,4]
// Output: 2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v = {2,3,1,1,4};
    int count = 0;
    int i = 0;
    while(i<v.size()){
        int j = i + v[i];
        if(j>=v.size()){
            break;
        }
        else{
            count++;
        }
        i = j;
    }

    cout<<count;
    return 0;
}