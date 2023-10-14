// Display the first 40 terms of the Fibonacci sequence using recursion. It should not take more than 1 second to execute the program.

#include<iostream>
using namespace std;

const int MAX_N = 40; 

long long memo[MAX_N];

long long fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    if (memo[n] != -1)
        return memo[n];

    memo[n] = fibo(n - 1) + fibo(n - 2);
    return memo[n];
}

int main()
{
    time_t start, end;
	time(&start);

    for (int i = 0; i <= MAX_N; i++)
        memo[i] = -1;

    for (int i = 0; i <= MAX_N; i++)
        cout << fibo(i) << " ";
        cout << endl;
        time(&end);
	float exetime = float(end - start);

	cout << "Execution time: " << exetime << " sec\n";
}