#include <iostream>
#include <ranges>
#include <list>
#include "ShortcutHeader.h"

/*
The example below is for a list consisting of integers only.
*/
int main()
{
    /*
    List of integers is created here. It only contains integers 2,4,6,8,...,48
    */
    std::list<uint64_t> l{};
    for (uint64_t j : std::ranges::iota_view{ 1,50 })
    {
        if (j % 2 == 0)
        {
            l.push_back(j);
        }
    }
    /*
    The variable 42 is set as the one we want to find the index for.
    */
    uint64_t var{ 42 };
    std::cout << "The element you are searching for is: " << var << '\n';
    uint64_t getVal{ getIndexInt(l,var) };
    /*
    Prints out index number below:
    */
    std::cout << "The index of your chosen element is: " << getVal << '\n';
    uint64_t myNum{ 0 };
    /*
    Confirms that the element at the index above is really what it should be:
    */
    for (uint64_t j : l)
        if(myNum == getVal)
        {
            if (j == var)
            {
                std::cout << "The element at index " << getVal << " is: " << j;
                ++myNum;
            }
            else
            {
                ++myNum;
            }
        }
        else
        {
            ++myNum;
        }
    return 0;
}
