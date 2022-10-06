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
        
        pair<string,int> temp(value,timestamp);

        auto it = mp.find(key);

        if ( it == mp.end() )
        {
            vec_index[key] = 0;
        }

        mp[key].push_back(temp);
    }
    
    string get(string key, int timestamp) {

        int max_index = vec_index[key];
        int max_time = mp[key][max_index].second;
        bool find = false;

        for(int i =max_index+1;i<mp[key].size();i++)
        {
            if ( max_time < mp[key][i].second && mp[key][i].second <= timestamp )
            {
                max_time = mp[key][i].second;
                max_index = i;
            }
        }
        
        // if (find)return mp[key][max_index].first;
        // else return "";

        if ( mp[key][max_index].second <= timestamp ) return mp[key][max_index].first;
        else return "";
    }
};

int main ()
{
    return 0;
}