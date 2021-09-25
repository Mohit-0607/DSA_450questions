#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(int n){
    vector<int> ans;
    ans.push_back(1);
    for(int i=2;i<=n;i++){
        int carry = 0;
        for(int j=ans.size()-1;j>=0;j--){
            int pro = ans[j]*i + carry;
            ans[j] = pro%10;
            carry = pro/10;
        }
        while(carry){
            ans.insert(ans.begin(),carry%10);
            carry = carry/10;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> ans = solve(n);
    for(auto X:ans) cout<<X;
    return 0;
}
