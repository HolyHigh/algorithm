/*
 * MDoBT.h
 *
 *  Created on: 2015��8��2��
 *      Author: Song Zhi-Cheng
 */

#ifndef GENERAL_H_
#define GENERAL_H_

#include <assert.h>
#define false 0
#define true 1
typedef int bool;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

int singleNumber(int* nums, int numsSize);
int maxDepth(struct TreeNode* root);
bool isSameTree(struct TreeNode* p, struct TreeNode* q);
int myAtoi(char* str);
void heapSort(int arr[], int n);
void adjustHeap(int arr[],int start,int end);



#endif /* GENERAL_H_ */
