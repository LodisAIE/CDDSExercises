#include <iostream>
#include "DynamicArray.h"

template<typename AnyType>
AnyType add(AnyType a, AnyType b)
{
	return a + b;
}

template<typename AnyType>
void print(AnyType value)
{
	std::cout << value << std::endl;
}

template<typename AnyType, int size>
void printArray(AnyType items[])
{
	for (int i = 0; i < size; i++)
	{
		print(items[i]);
	}
}

int main()
{
	DynamicArray<int> nums = DynamicArray<int>();

	nums.addItem(1);
	nums.addItem(2);
	nums.addItem(3);
	nums.addItem(4);
	nums.addItem(5);

	nums.print();
}