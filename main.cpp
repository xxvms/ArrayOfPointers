#include <iostream>

int main()
{
    const int DAYS = 7;     // number of days in array
    char const* arrayPointers[DAYS]{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    for (int j = 0; j < DAYS; j++)  // display every string
    {
        std::cout << arrayPointers[j] << std::endl;
    }
    system("pause");
    return 0;
}