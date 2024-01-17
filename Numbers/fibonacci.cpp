#include <iostream>
#include <vector>

std::vector<int> fibNth(int n)
{
    std::vector<int> sequence = {1, 1};

    for (int i = 2; i <= n - 1; i++)
    {
        sequence.push_back(sequence[i - 1] + sequence[i - 2]);
    }

    return sequence;
}

int main()
{
    std::vector result = fibNth(10);

    for (int e : result)
    {
        std::cout << e << "\n";
    }
}
