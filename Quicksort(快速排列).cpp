// quick sort 快速排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//By ax1an9;

#include <iostream>
using namespace std;
void quicksort(int* p, int start, int end)//传入数组的地址，起始位，末位
{
    if (start >= end)
        return;
    //如果左标签和右标签位置相同结束函数
    int i = start;//左标签
    int j = end;//右标签
    int key = p[i];//选择基准数！！！并且记录它的值
    while (i < j)//当i<j时循环
    {
        while (i < j && p[j] >= key)//右标签“向左移动”从右侧开始寻找第一个小于基准的数，找到时停止
        {
            j--;
        }
        p[i] = p[j];//用目标数替换左标签指向的数字
        while (i < j && p[i] < key)//左标签“向右移动”从左侧开始寻找第一个大于基准的数，找到时停止
            
        {
            i++;
        }
        p[j] = p[i];//用目标数替换右标签指向的数字

    }
    p[i] = key;//循环结束用左标签或右标签指向的数赋值基准值（此时左标签等于右标签）
    //开始递归
    quicksort(p, start, i - 1);//快速排列上一次基准数左侧的数字
    quicksort(p, i + 1, end);//快速排列上一次基准数右侧的数字
}
void Display(int* p, int len)//用于打印数组的所有数字
{
    for (int i = 0; i < len; i++)
    {
        cout << *p << " ";
        p++; 
    }
    cout << endl;
}
int main()
{
    int arr[9] = { 88,59,57,54,2,487,568,999,465};//示范未排序数组
    Display(&arr[0], sizeof(arr) / sizeof(arr[0]));//打印未排序的数
    quicksort(&arr[0],0, sizeof(arr) / sizeof(arr[0])-1);//进行快速排列
    Display(&arr[0], sizeof(arr) / sizeof(arr[0]));//打印已排序的数
}


