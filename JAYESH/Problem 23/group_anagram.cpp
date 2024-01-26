#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<string> str = {"eat", "tea", "tan", "ate", "nat", "bat"};
//    sort(str[0].begin(), str[0].end());
//    cout<<str[0]<<endl;
 vector<vector<string>>ans;
  for(int i = 0; i<str.size(); i++){
     sort(str[i].begin(), str[i].end());
  }
  for(int i = 0; i<str.size()-1; i++){
    for(int j = i+1; j<str.size(); j++){
        if(str[i]==str[j]){
            vector<string> anagramPair = {str[i], str[j]};
            ans.push_back(anagramPair);
        }
    }
  }
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i][0] << " " << ans[i][1] << endl;
}

    return 0;
}