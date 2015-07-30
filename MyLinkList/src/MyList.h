/*
 * List.h
 *
 *  Created on: 2015��3��17��
 *      Author: lorne
 */

#ifndef MYLIST_H_
#define MYLIST_H_
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>


typedef int Item;
typedef struct LNode{
	Item data;
	struct LNode *next;
}RadomNode,*HeadList;
//һ����˵������Ľṹ�����ﶼ��Ҫ��������������RamdomNode��������һ���ڵ㣬��HeadList�������������ͷָ��


//����ĳ�ʼ��
int ListInit(HeadList *p);

//����Ĵ���(�����ʵ���ǲ���)����ʼ��ֻ�ǰ������ͷ�ڵ��ָ������Ϊ�գ�������һЩ�������������Ĺ����Ǽ����Ѿ�����һ�������ˣ�
//ȥ�����Ǹ��Ѿ����ڵ���������������ʵ���Ͼ������������һ��ֵ������ָ�������������
int CreateList(HeadList *p,int n);

//����Ų���
int Find_iList(HeadList p, int i, Item *item);

//��ֵ����
int Find_vList(HeadList p, Item *item);

//�������е������ڵ�֮�����һ������,iλʵ�ʵĵ�i������1��ʼ�ģ�����Ҫ�����¡������������л���һ��ͷ��㣬���໥�����ˡ����ÿ���i=0��
int InsertList(HeadList *p,int i, Item item);

//ɾ��һ��ָ��λ�õ�Ԫ��
int DelList(HeadList *p, int i, Item *item);

//���ص�����Ĵ�С,��ͷ���
int SizeOfList( HeadList p);

//ɾ������������
int DropList(HeadList *p);

//��ӡ����
int PrintList(HeadList p);

#endif /* MYLIST_H_ */
