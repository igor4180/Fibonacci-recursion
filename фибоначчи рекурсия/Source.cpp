#include <iostream>
using namespace std;

void fibb(int n, int& res)
{
    static int arr[1000] = { };

    if (n == 1 || n == 2)
    {
        res = 1;
        return;
    }

    if (!arr[n - 1])
        fibb(n - 1, arr[n - 1]);

    if (!arr[n - 2])
        fibb(n - 2, arr[n - 2]);

    res = arr[n - 1] + arr[n - 2];
}

int main()
{
    int x;
    fibb(7, x);
    std::cout << x;
}
