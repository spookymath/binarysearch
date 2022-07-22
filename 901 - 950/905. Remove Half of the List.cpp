int solve(vector<int>& nums) 
{
    int half = (nums.size() & 1) ? (nums.size() + 1)/2 : nums.size()/2;

    unordered_map<int, int> mp;
    unordered_map<int, int> :: iterator itr;
    for(int i: nums) mp[i] += 1;

    vector<int> v;
    for(itr = mp.begin(); itr != mp.end(); itr++)
        v.push_back(itr->second);
    
    sort(v.begin(), v.end(), greater<int>());

    int x = 0;
    int y = 0;
    for(int i=0; i<v.size(); i++)
    {
        if(x >= half) break;
        else
        {
            y += 1;
            x += v[i];
        }
    }

    return y;
}
