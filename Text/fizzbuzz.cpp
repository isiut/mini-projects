#include <iostream>

void fizzBuzzIfStatements(void)
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 15 == 0)
        {
            std::cout << "FizzBuzz\n";
        }
        else if (i % 3 == 0)
        {
            std::cout << "Fizz\n";
        }
        else if (i % 5 == 0)
        {
            std::cout << "Buzz\n";
        }
        else
        {
            std::cout << i << '\n';
        }
    }
}

int main(void)
{
    fizzBuzzIfStatements();
    return 0;
}
