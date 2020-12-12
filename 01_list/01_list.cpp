// 01_list.cpp 
//

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> data = list<int>();

	data.push_back(12);
	data.push_front(2020);
	data.push_back(11);	

	for (int x : data) {
		cout << x << endl;
	}
}