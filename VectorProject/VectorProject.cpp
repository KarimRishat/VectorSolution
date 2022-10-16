// VectorProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector.h"

void test1()
{
    VectorSpace::Vector<int> v{ 5 };
    v[0] = 5;
    std::cout << v[0];
}
int main()
{
    test1();
}
