int solve(vector<string>& shows, vector<int>& durations, int k) 
{
    unordered_map<string, int> mp;
    unordered_map<string, int> :: iterator itr;
    for(int i=0; i<shows.size(); i++) mp[shows[i]] += durations[i];

    vector<int> v;
    for(itr = mp.begin(); itr != mp.end(); itr++) v.push_back(itr->second);

    sort(v.begin(), v.end(), greater<int>());

    int s = 0;
    for(int i=0; i<k; i++) s += v[i];

    return s;
}
