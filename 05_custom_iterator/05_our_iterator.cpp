// 05_our_iterator.cpp
//
#include <iostream>

using namespace std;

template<typename MyArray>
class MyIterator
{
public:
    using ValueType = typename MyArray::ValueType; 

private:
    ValueType* myPtr;

public:
    MyIterator(ValueType* ptr) {
        myPtr = ptr;
    }

    MyIterator& operator++()
    {
        myPtr++;
        return *this;
    }

    ValueType& operator*()
    {
        return *myPtr;
    }

    bool operator==(MyIterator& other) {
        return myPtr == other.myPtr;
    }

    bool operator!=(MyIterator& other) {
        return !(*this == other);
    }
};

template<typename T, size_t S>
class MyArray
{
public:
    using ValueType = T;
    using Iterator = MyIterator<MyArray<T, S>>;

private:
    T myData[S];

public:
    constexpr size_t Size() const { return S; }

    T& operator[](size_t index) { return myData[index]; }

    Iterator begin()
    {
        return Iterator(myData);
    }

    Iterator end()
    {
        return Iterator(myData + Size());
    }
};


int main()
{
    MyArray<int, 3> data;

    data[0] = 2020;
    data[1] = 12;
    data[2] = 22;

    for (int d : data)
    {
        cout << d << endl;
    }
}
