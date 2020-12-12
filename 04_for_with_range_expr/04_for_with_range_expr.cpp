// 04_for_with_range_expr.cpp

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> data;

    data.push_back(2020);
    data.push_back(12);
    data.push_back(12);

    for (int d : data)
    {
        cout << d << endl;
    }

    //supaprastinta
    for (size_t i = 0; i < data.size(); i++)
    {
        int d = data[i];

        cout << d << endl;
    }

    //iš tikro
    for (vector<int>::iterator it = data.begin(); it != data.end(); it++)
    {
        int d = *it;

        cout << d << endl;
    }

    //panaudojam using
    using dataIterator = vector<int>::iterator;

    for (dataIterator it = data.begin(); it != data.end(); it++)
    {
        int d = *it;

        cout << d << endl;
    }
}
