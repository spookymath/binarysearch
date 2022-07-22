bool solve(string s0, string s1) 
{
    vector<int> v0(26, 0), v1(26, 0);

    for(int i=0; i<s0.length(); i++) v0[s0[i] - 'a'] += 1;
    for(int i=0; i<s1.length(); i++) v1[s1[i] - 'a'] += 1;

    return v0 == v1 ? true : false;
}
