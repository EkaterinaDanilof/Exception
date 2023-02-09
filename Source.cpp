#include <iostream>
#include <string>
using namespace std;
template<typename T> T Max(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}
template<typename T> T Max(T a, T b, T c) {
    return Max(Max(a, b), c);
}
int main(int argc, char** argv)
{
    cout << Max<int>(5, 2) << endl;
    cout << Max<double>(5, 2.7, 10.3) << endl;
    cout << Max<string>("Alex", "Sergey", "Andrey") << endl;
    return 0;
}