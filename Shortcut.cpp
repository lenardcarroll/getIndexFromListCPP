#include <iostream>
#include <ranges>
#include <list>
#include <string>
#include "ShortcutHeader.h"

/*
Use the below function if your list contains only integers.
Use the function as getIndexInt(your_list, your_variable>
*/
uint64_t getIndexInt(std::list<uint64_t> l, uint64_t var)
{
	uint64_t myNum{ 0 };
	for (uint64_t j : l)
	{
		if (j == var)
		{
			return myNum;
		}
		else
		{
			++myNum;
		}
	}
}

/*
Use the below function if your list contains only string values.
Use the function as getIndexStr(your_list, your_variable>
*/
uint64_t getIndexStr(std::list<std::string> l, std::string var)
{
	uint64_t myNum{ 0 };
	for (std::string j : l)
	{
		if (j == var)
		{
			return myNum;
		}
		else
		{
			++myNum;
		}
	}
}

/*
Use the below function if your list contains only floating point (double) values.
Use the function as getIndexDoub(your_list, your_variable>
*/
uint64_t getIndexDoub(std::list<double> l, double var)
{
	uint64_t myNum{ 0 };
	for (double j : l)
	{
		if (j == var)
		{
			return myNum;
		}
		else
		{
			++myNum;
		}
	}
}
