#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int> numbers, int target) {
		
		vector<int> indice;
		int s = 0;
		int n = numbers.size()-1;
		int sum;
		while (s < n)
		{
			sum = numbers[s] + numbers[n];

			if (sum == target)
			{
				indice.push_back(s + 1);
				indice.push_back(n + 1);
				cout << s + 1 << " " << n + 1 << endl;
				return indice;
			}

			if (sum > target)
				n--;
			else
				s++;
		}
		return indice;
	}
};

int main()
{
	Solution s;
	s.twoSum({ 1,3,4,6,9,10}, 7);
	system("pause");
}
