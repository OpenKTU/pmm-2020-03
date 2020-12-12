// 03_set_and_map.cpp
//

#include <iostream>
#include <iterator>
#include <unordered_set>
#include <set>
#include <unordered_map>

using namespace std;

int main()
{
    cout << "Unordered set:" << endl;

    unordered_set<int> usData;

    usData.insert(2020);
    usData.insert(12);
    usData.insert(12);

    for (int d : usData)
    {
        cout << d << endl;
    }

    cout << endl;
    cout << "Set:" << endl;

    set<int, greater<int>> sData;

    sData.insert(1);
    sData.insert(2);
    sData.insert(5);
    sData.insert(4);
    sData.insert(3);
    sData.insert(2);
    sData.insert(1);

    for (int d : sData)
    {
        cout << d << endl;
    }

    if (sData.find(5) != sData.end()) {
        cout << "Rado 5" << endl;
    }
    else {
        cout << "Nerado 5" << endl;
    }

    if (sData.find(2020) != sData.end()) {
        cout << "Rado 2020" << endl;
    }
    else {
        cout << "Nerado 2020" << endl;
    }

    cout << endl;
    cout << "Map:" << endl;

    unordered_map<string, int> mData;

    mData["metai"] = 2020;
    mData["menuo"] = 12;
    mData["diena"] = 12;

    cout << "Metai: " << mData["metai"] << endl;

    cout << endl << endl;

    for (unordered_map<string, int>::iterator it = mData.begin(); it != mData.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }
}
