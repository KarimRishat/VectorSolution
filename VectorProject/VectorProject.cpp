// VectorProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector.h"
#include <vector>

void test1()
{
    VectorSpace::Vector<int> v{ 5 };
    v[0] = 5;
    std::cout << v[0];
}
//void test2BuBle()
//{
//    std::vector<int> v{ vectorFactory(5) };
//    for (size_t i = 0; v.size() - 1; ++i)
//    {
//        for (size_t j = 0; j < v.size()-1-i; j++)
//        {
//            if (v[j] > v[j + 1])
//                std::swap(v[j], v[j + 1]);
//        }
//    }
//}

void testShakerSort()
{   //В комментах - для любого контейнера
    std::vector<int> v(3, 0);
    size_t right = v.size(),    //v.end()
        left = 0,               //v.begin()
        ctrl = v.size();        //v.end()
    while (left<right-1)
    {
        for (size_t i = left+1; i < right; i++) //size-t -> auto
        {
            if (v[i]>v[i+1])                    //*i>*(i+1)
            {
                std::swap(v[i], v[i + 1]);       //sqap(i,i+1
                ctrl = i+1;
            }
        }
        right = ctrl;
        for (size_t j = right-1; j > left; --j)
        {
            if (v[j] < v[j - 1])
            {
                std::swap(v[j], v[j - 1]);
                ctrl = j;
            }
        }
        left = ctrl;
    }//while
}

void QuickSort(std::vector<int>& v, size_t low, size_t high)
{
    size_t p = partition_lomuto(v, low, high);
    QuickSort(v, low, p);
    QuickSort(v, p, high);
}

size_t partition_lomuto(std::vector<int>& v, size_t low, size_t high)
{
    int pivot = v[high - 1];
    size_t i = low;         //граница м-у больштими и малыми 
    for (size_t j = low; j < high-1; j++)
    {
        if (v[j] < pivot)
        {
            std::swap(v[i], v[j]);
            i++;
        }
    }
    std::swap(v[high - 1], v[i]);
    return i;
}

size_t partition_hoar(std::vector<int>& v, size_t low, size_t high)
{
    int pivot = v[low];
    size_t i = low;
    size_t j = high - 1;
    while (true)
    {
        while (v[j]>pivot)
        {
            j--;
        }
        while (v[i]<pivot)
        {
            i++;
        }
        if (i < j)
        {
            std::swap(v[i], v[j]); i++; j++;
        }
        else return j;
    }
}

template<typename Functor>
void qSort(std::vector<int>& v, Functor f)
{
    quick_sort<Functor>(v, o, v.size(), f);
}
template<typename Functor>
void quick_sort(std::vector<int>& v, size_t low, size_t high, Functor f)
{
    if (low<high-1)
    {
        size_t p = f(v, low, high);
        quick_sort(v, low, p, f);
        quick_sort(v, p, high, f);
    }
}
void testqsort()
{

    qSort<partition_hoar>(v);
}

void testik()
{
    size_t i = 2;
    size_t k = i - 5;
    std::cout << k;
}

int main()
{
    testik();
}
