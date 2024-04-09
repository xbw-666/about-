typedef int ADT;//Abstract Data Type;抽象数据类型定义
typedef struct BiTree
{
	struct BiTree* LeftTree;//左子树
	struct BiTree* RightTree;//右子树
	ADT D;//degree度
}ADTTree;
ADTTree T;
void CreateBiTree(ADT* T, ADT definition)
{

}//创建一个二叉树T
void PreOrderTraverse(ADT* T)
{

}//检查二叉树T存在(先序遍历)
void InOrderTraverse(ADT* T)	
{

}//检查二叉树T存在(中序遍历)
void PostOrderTraverse(ADT* T)
{

}//检查二叉树T存在(后序遍历)
void main()
{
	ADT definition;
	CreateBiTree(&T, &definition);
}
//在二叉树上的第i层最多有2^(i-1)个结点(i>=1)
//计算结点公式
//深度为k的二叉树最多有2^k-1个结点
//深度为k的二叉树最少有k个结点
//对任何二叉树来讲,假设叶子结点为n0个,度为2的结点为n2个,那么n0=n2+1
//总边(B)总比总结点少一个
//B=n2*2+n1*1;
//所以总结点个数n=n2*2+n1*1+1;
//证明用数学归纳法证明
//二叉树两种,一种叫满二叉树,一种叫完全二叉树
//	