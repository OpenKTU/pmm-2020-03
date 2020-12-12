// 02_queue.cpp 
//

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	cout << "Stack:" << endl;

	stack<int> sData = stack<int>();

	sData.push(2020);
	sData.push(12);
	sData.push(11);

	while (!sData.empty()) {
		cout << sData.top() << endl;
		sData.pop();
	}

	cout << "Queue:" << endl;

	queue<int> qData = queue<int>();

	qData.push(2020);
	qData.push(12);
	qData.push(11);

	while (!qData.empty()) {
		cout << qData.front() << endl;
		qData.pop();
	}
}
