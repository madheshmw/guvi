#include <iostream>
#include<vector>
#include <string.h>
using namespace std;


string LCP(string X, string Y)
{
	int i = 0, j = 0;
	while (i < X.length() && j < Y.length())
	{
		if (X[i] != Y[j])
			break;

		i++, j++;
	}

	return X.substr(0, i);
}


string findLCP(vector<string> const &words)
{
	string prefix = words[0];
	for (string s: words)
		prefix = LCP(prefix, s);

	return prefix;
}


int main()
{
	vector<string> words { "techie delight", "tech", "techie",
						   "technology", "technical" };

	cout<<"" << findLCP(words); 
	return 0;
}
