#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    unordered_map<string, int> h;
    // Hashmap ke andar we have to insert key,value ka pair
    h.insert({"Mango", 100});
    h.insert(make_pair("Apple", 150));
    h.insert(make_pair("Banana", 10));
    h.insert(make_pair("Kiwi", 200));

    h["Mango"] = 150;  // Update
    h["Orange"] = 200; // Insert  krdega  orange

    for (pair<string, int> p : h)
    {
        cout << p.first << "," << p.second << endl;
    }

    // or we can use auto keyword instead of pair<string,int>
    // for (auto p : h)
    // {
    //     cout << p.first << "," << p.second << endl;
    // }

    for (int i = 0; i < h.bucket_count(); ++i)
    {
        cout << i << "--> ";
        for (auto it = h.begin(i); it != h.end(i); ++it)
        {
            cout << "[" << it->first << "," << it->second << "]";
        }
        cout << endl;
    }

    return 0;
}