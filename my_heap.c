/*
 * my_heap的实现文件
 */

#include "include/my_heap.h"
#include <stdio.h>
#include <stdlib.h>

void HeapAdjust(int arr[],int i,int length)
    {
            int Child;
            int temp;
            for(;2*i+1<length;i=Child)
            {
                Child=2*i+1;
                if(Child<length-1&&arr[Child+1]>arr[Child])
                        ++Child;
                if(arr[i] < arr[Child])
                {
                    temp=arr[i];
                    arr[i]=arr[Child];
                    arr[Child]=temp;
                }
                else
                        break;
            }
    }
    
void HeapSort(int arr[],int length)
  {
        int i;
        for(i=length/2-1;i>=0;--i)
                HeapAdjust(arr,i,length);
        for(i=length-1;i>0;--i)
        {
            arr[i]=arr[0]^arr[i];
            arr[0]=arr[0]^arr[i];
            arr[i]=arr[0]^arr[i];
            HeapAdjust(arr,0,i);                      //递归调整
        }
  }
