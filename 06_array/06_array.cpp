// 06_array.cpp - supaprastinata iš praeitos paskaitos
//

#include <iostream>

using namespace std;

template<typename T, size_t S>
class Array
{
private:
    T myData[S];

public:
    constexpr size_t Size() const { return S; }

    T& operator[](size_t index) { return myData[index]; }
};


int main()
{
    Array<int, 3> data;

    data[0] = 2020;
    data[1] = 12;
    data[2] = 12;

    for (size_t i = 0; i < data.Size(); i++)
    {
        cout << data[i] << endl;
    }

    //TODO - padarykime kad veiktų
    //for (int d : data)
    //{
    //    cout << d << endl;
    //}
}
