#include <iostream>

int main()
{
    int n = 0;
    int res = 1;
    std::cin >> n;

    while (n != 0)
    {
        res *= (n % 10);
        n /= 10;
    }
    std::cout << res;
    return EXIT_SUCCESS;
    
}