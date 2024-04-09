#define ERROR 0
#define OK 1
#include <stdio.h>
#include <iostream>
#include <string.h>
typedef int TElemType;
typedef struct BiTreeNode
{
	TElemType data;
	struct BiTreeNode* Lchild;
	struct BiTreeNode* Rchild;
}BiNode,*BiTree;
BiTree T;
BiTree T1;
int BiTree_Node = 0;
char ch = '\0';
void CreatBiTree(BiTree T)
{
	BiTree p = NULL;
	p = (BiTree*)malloc(sizeof(BiTree));
	for (int i = 0; i < BiTree_Node; i++)
	{
					
	}
}
void CreatBiTree_Another(BiTree T)
{
	scanf_s("%c", &ch);
	if (ch == "#")
	{
		T = NULL;
	}
	else
	{
		if(!((BiTree*)malloc(sizeof(BiTree)))
			exit(0);
		T->data = ch;
		CreatBiTree_Another(T->Lchild);
		CreatBiTree_Another(T->Rchild);
	}
	//return OK;
}
void PreOrderTraverse(BiTree T)
{
	if (T == NULL)
	{
		return NULL;
	}
	else
	{
		visit(T);
		PreOderTraverse(T->Lchild);
		PreOderTraverse(T->Rchild);
	}
}
void CopyBiTree(BiTree T)
{
	if (!T)
		exit(0);
	else
	{
		BiTree T1;
		T1 = (BiTree*)malloc(sizeof(BiTree));
		T1->data = T->data;
		CopyBiTree(T->Lchild);
		CopyBiTree(T->Rchild);
	}
	//return OK;
}
void visit(BiTree T)
{
	printf("%d", T->data);
}
void main()
{
	printf("please creat BiTree and input node who numbers:>");
	scanf_s("%d", &BiTree_Node);
	CreatBiTree(T);
	CreatBiTree_Another(T);
	PreOderTraverse(&T);
	visit(&T);
}