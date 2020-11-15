#include <stdio.h>

#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
	bool validateStackSequences(vector<int)& pushed, vector<int>& popped){
		std::stack<int> S;
		int index = 0;
		for (int i = 0; i < pushed.size(); i++) {
			S.push(pushed[i]);
			while (!S.empty() && popped[index] == S.top())
			{
				S.pop();
				index++;
			}
		}
		if (!S.empty()) {
			return false;
		}
		return true;
	}

};
int main() {
	vector<int>pushed;
	vector<int>popped;
	pushed.push_back(1);
	pushed.push_back(2);
	pushed.push_back(3);
	pushed.push_back(4);
	pushed.push_back(5);

	popped.push_back(3);
	popped.push_back(2);
	popped.push_back(5);
	popped.push_back(4);
	popped.push_back(1);
	
	Solution solve;
	printf("%d\n", solve.validateStackSequences(pushed, popped));
	return 0;
}