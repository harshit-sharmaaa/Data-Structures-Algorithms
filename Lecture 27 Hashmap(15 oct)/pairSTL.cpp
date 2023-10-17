#include <iostream>
using namespace std;

// template<typename T, typename U>
// class Pair {
// public:
// 	T first;
// 	U second;
// };

int main()
{

    pair<int, string> p1;
    // Insertion ka way one
    p1.first = 10;
    p1.second = "Hello";

    // Insertion ka second way
    pair<int, string> p2(10, "Hello");

    // Insertion ka third way
    pair<int, string> p3(make_pair(10, "Hello"));

    // Insertion ka Fourth way
    pair<int, string> p4({10, "Hello"});

    // Insertion ka Fifth way
    pair<int, string> p5;
    p5 = make_pair(10, "Hello");
    p5 = {10, "Hello"};

    cout << p1.first << ", " << p1.second << endl;
    cout << p2.first << ", " << p2.second << endl;
    cout << p3.first << ", " << p3.second << endl;
    cout << p4.first << ", " << p4.second << endl;
    cout << p5.first << ", " << p5.second << endl;

    return 0;
}