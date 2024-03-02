#include<iostream>
#include<set>
using namespace std;

int main(){
    string str = "pwwkew";
    set<char>s;
    int start = 0;
    int end = 0;
    for(int i = 0; i<str.length(); i++){
        s.insert(str[i]);
    }
    cout<<s.end();
    
    return 0;
}