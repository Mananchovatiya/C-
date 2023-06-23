#include <iostream>

void s()
{
    for(int i=2; i<=10; i+=2)  // row
    {
        for(int j=1; j<=5; j++)    // col
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    s();
    return 0;
}

