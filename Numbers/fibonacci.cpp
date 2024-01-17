#include <iostream>
#include <vector>

// Fibonacci with n elements
std::vector<int> fibNth(int n)
{
    std::vector<int> sequence = {1, 1};

    for (int i = 2; i <= n - 1; i++)
    {
        sequence.push_back(sequence[i - 1] + sequence[i - 2]);
    }

    return sequence;
}

// Fibonacci to a limit n
std::vector<int> fibToN(int n)
{
    std::vector<int> sequence = {1, 1};

    for (int i = 2; sequence[i - 1] + sequence[i - 2] <= n; i++)
    {
        sequence.push_back(sequence[i - 1] + sequence[i - 2]);
    }

    return sequence;
}
