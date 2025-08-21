#include <bits/stdc++.h>
using namespace std;

int main(){
    int target;
    vector<int> nums;
    vector<int> res;
    map<int,int> mp;
    for(int i = 0;i < nums.size(); i++){
        mp[nums[i]] = i;
    }
    for(int i = 0;i < nums.size(); i++){
        if(mp[target - nums[i]] >= 0 && mp[target - nums[i]] != i){
            res.push_back(mp[target - nums[i]]);
            res.push_back(i);
        }
    }
    for(auto i : res){
        cout << i << ' ';
    }
    return 0;
}
