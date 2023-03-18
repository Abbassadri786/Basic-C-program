#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    
    vector<char>ans;
    int k=0,cnt=0;
    for(int i=0; i<str.length(); i++){
        if(str[i] != 'x'){
            ans.push_back(str[i]);
            k++;
        }
        else{
            cnt++;
        }
    }
    for(int i=0; i< cnt; i++){
        ans.push_back(ans[k++]='x');
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
    }
    
    return 0;
}
