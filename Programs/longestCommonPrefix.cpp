#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<string> strs{"cluster", "clue", "clutch", "club", "clumsy"};
	sort(strs.begin(), strs.end());
	int n = strs.size();
	string s1 = strs[0];
	string s2 = strs[n-1];
	int size1 = s1.size();
	int size2 = s2.size();
	string res = "";
	for(int i=0; i<min(size1, size2); i++)
	{
		if(s1[i]==s2[i]) res.push_back(s1[i]);
		else break;
	}
	cout<<"Longest Common Prefix is : "<<res<<endl;
	return 0;
}
