typedef int ADT;//Abstract Data Type;�����������Ͷ���
typedef struct BiTree
{
	struct BiTree* LeftTree;//������
	struct BiTree* RightTree;//������
	ADT D;//degree��
}ADTTree;
ADTTree T;
void CreateBiTree(ADT* T, ADT definition)
{

}//����һ��������T
void PreOrderTraverse(ADT* T)
{

}//��������T����(�������)
void InOrderTraverse(ADT* T)	
{

}//��������T����(�������)
void PostOrderTraverse(ADT* T)
{

}//��������T����(�������)
void main()
{
	ADT definition;
	CreateBiTree(&T, &definition);
}
//�ڶ������ϵĵ�i�������2^(i-1)�����(i>=1)
//�����㹫ʽ
//���Ϊk�Ķ����������2^k-1�����
//���Ϊk�Ķ�����������k�����
//���κζ���������,����Ҷ�ӽ��Ϊn0��,��Ϊ2�Ľ��Ϊn2��,��ôn0=n2+1
//�ܱ�(B)�ܱ��ܽ����һ��
//B=n2*2+n1*1;
//�����ܽ�����n=n2*2+n1*1+1;
//֤������ѧ���ɷ�֤��
//����������,һ�ֽ���������,һ�ֽ���ȫ������
//	