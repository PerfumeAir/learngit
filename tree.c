#define MAX 30
#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
	int val;
	int height;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode;/* �������ڵ�ṹ��*/

typedef struct bnode
{
	char  data;
	struct bnode* lchild, * rchild;
}Bnode, * BTree;/*��ȫ������*/

TreeNode* newTreeNode(int val) {/*�������ڵ㹹�캯��*/
	TreeNode* node;
	node = (TreeNode*)malloc(sizeof(TreeNode));
	if (node) {
		node->val = val;
		node->height = 0;
		node->left = NULL;
		node->right = NULL;
		return node;
	}
}

/*�������ڵ�ɾ������룬�򵥲���ϸд*/

BTree CreateBinTree()//������ȫ������
{
	BTree t;
	char ch;
	ch = getchar();
	if (ch == '#')
	{
		t = NULL;
	}
	else
	{
		t = (BTree*)malloc(sizeof(Bnode));
		t->data = ch;
		t->lchild = CreateBinTree();
		t->rchild = CreateBinTree();
	}
	return t;
}
int main()
{
	int i, n;
	char str[MAX];
	BTree* root;//�����
	printf("������������Ľ����:");
	scanf("%d", &n);
	getchar();//��������
	printf("�����볤��Ϊ %d ���ַ��� :\n", n);

	printf("��ȫ�������ѳɹ�����! �������Ϊ��");
	for (i = 0; i < n; i++)
	{
		printf(" %c ", str[i]);
	}
	printf("\n");
}