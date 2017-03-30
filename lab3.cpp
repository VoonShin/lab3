#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> weight;
	ifstream inFile("file.in",ios::in);
	int num, w;
	inFile >> num;
	for(int i =0; i < num ;i++)
	{
		inFile >> w;
		weight.push_back(w);
	}
	
	sort(weight.begin(), weight.end());
	int total= 0;
	for(int i = weight.size()-1; i > weight.size() - 6; --i)
	{
		total = total + weight[i];
	}
	cout << total << endl;
	return 0;
}