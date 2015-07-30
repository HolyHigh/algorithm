/*
 * Stack.h
 *
 *  Created on: 2015��3��29��
 *      Author: lorne
 */


#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#ifndef STACK_H_
#define STACK_H_

typedef struct Bitree{
	int item;
	struct Bitree *lchild,*rchild;
}Node,*root;


Node *create_node(int data,Node *lchild,Node *rchild);

root init_bitree(Node *node);

void destroy_bitree(root root);

void pre_search(root root);

void mid_search(root root);

void last_search(root root);





#endif /* STACK_H_ */
