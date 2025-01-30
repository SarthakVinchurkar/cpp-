#include <iostream>
using namespace std;

 long factorial(int n)
{
     long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

 long calculatePermutation(int n, int r)
{
    if (n < r)
    {
        return 0;
    }
    return factorial(n) / factorial(n - r);
}

 long calculateCombination(int n, int r) 
{
    if (n < r)
    {
        return 0;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n, r;

    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
 
     long permutation = calculatePermutation(n, r);
    cout << "Permutation (P(n, r)) = " << permutation <<endl;

    long combination = calculateCombination(n, r);
    cout << "Combination (C(n, r)) = " << combination <<endl;

    return 0;
}
