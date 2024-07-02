#include <iostream>
#include <string>
#include <vector>

const int A = 1;

using namespace std;

vector<int> test()
{
    return {};
}

int main()
{
    test();
    vector<int> vec = {1, 2, 3};

    for (int v : vec)
    {
        cout << v << endl;
    }
}