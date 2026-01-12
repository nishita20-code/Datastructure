#include <iostream>
using namespace std;

// O(1) - Constant Time
void constantTime(int n)
{
    cout << "O(1) Output: " << n * n << endl;
}

// O(n) - Linear Time
void linearTime(int n)
{
    cout << "O(n) Output: ";
    for(int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

// O(n^2) - Quadratic Time
void quadraticTime(int n)
{
    cout << "O(n^2) Output:\n";
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// O(log n) - Logarithmic Time
void logarithmicTime(int n)
{
    cout << "O(log n) Output: ";
    while(n > 1)
    {
        cout << n << " ";
        n = n / 2;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    constantTime(n);
    linearTime(n);
    quadraticTime(n);
    logarithmicTime(n);

    return 0;
}
