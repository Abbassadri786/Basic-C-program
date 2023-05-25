// prev smaller element 
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<int> input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);
    
    stack<int> st;
    st.push(-1);
    
    vector<int> ans(input.size());
    
    for(int i= 0; i < input.size(); i++){
        int curr = input[i];
        while(st.top() >= curr){
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }
    
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
