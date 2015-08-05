/*
 * heapsort.c
 *
 *  Created on: 2015年8月5日
 *      Author: Song Zhi-Cheng
 */


#include "General.h"


void adjustHeap(int arr[],int start,int end){
	//int tmp = arr[start];
	int i;
	//每次调整3个，如果传入进来的节点start,i,i+1，已经是一个有序的序列，那么循环执行一次就会结束。
	//如果传入进来的三个节点顺序不对，那么先调整这三个节点，然后再进入下一次循环以i或者i+1作为新的父节点进行调整，有可能调整到叶子节点，直到满足break。
	//NOTICE:for中一定要i<=end，而下边第一条执行if一定要有i<end，
	//考虑叶子节点只有一个左孩子的情况，此时也需要判断父亲和左孩子的大小，因为左孩子没有兄弟，所以不能跟i+1比较，会出现不可预料的后果。
	for(i=2*start+1;i<=end;i*=2){
		if(arr[i] < arr[i+1] && i<end) i++;//选择大的子节点//这里的大于小于就确定了是大根堆还是小根堆
		if(arr[i] < arr[start]) break;//选择子节点和父节点中较大的一个
		int temp = arr[i];
		arr[i] = arr[start];
		arr[start] = temp;
		start = i;//为下一次节点调整做准备，下次循环中start就是“父节点”。
	}
}

//这里的n传入的是个数，不是数组下标最大值
void heapSort(int arr[], int n){
	int i ;
	//建立一个初始堆，这个堆是一个原始的序列
	//此循环从n/2开始，是要从中间部分向上逐渐调整。
	//循环最终得到一个完整的大根堆/小根堆
	for(i=n/2;i>=0;i--){//这里i有=0，是因为根节点也要和左右调整
		adjustHeap(arr,i,n-1);
	}


	//每次取出根节点，放置序列的尾部，空间复杂度o1
	//这样的话，在大根堆输出的序列就是一个递增的序列
	for(i=n-1;i>0;i--){//这里i没有=0，是因为下边一直在和arr[0]换，arr[0]不需要和本身换。
		int tmp = arr[0];
		arr[0] = arr[i];
		arr[i] = tmp;
		//交换完之后还要调整剩下的堆，这个堆从上往下调整，直到再次选出其余节点中最值
		adjustHeap(arr,0,i-1);//i-1是因为每次交换的都是最后一个和第一个，所以需要从0调整到倒数第二个。
	}
}

