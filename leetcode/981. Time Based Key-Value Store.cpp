#include <bits/stdc++.h>
using namespace std;

class TimeMap {
public:
    map<string,vector<pair<string,int>>> mp;
    map<string,int> vec_index;
    TimeMap() {
        // map<string,vector<pair<string,int>>> mp;
    }
    
    void set(string key, string value, int timestamp) {
        if(mp.find(key) == mp.end()){
            mp[key] = {{value,timestamp}};
        }
        else{
            mp[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {

        for(int i =mp[key].size()-1;i>=0;i--)
        {
            if (mp[key][i].second <= timestamp )
            {
                return mp[key][i].first;
            }
        }
        
        return "";
    }
};

int main ()
{
    return 0;
}