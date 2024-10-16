#define MAX 30
#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
	int val;
	int height;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode;/* 二叉树节点结构体*/

typedef struct bnode
{
	char  data;
	struct bnode* lchild, * rchild;
}Bnode, * BTree;/*完全二叉树*/

TreeNode* newTreeNode(int val) {/*二叉树节点构造函数*/
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

/*二叉树节点删除与插入，简单不详细写*/

BTree CreateBinTree()//创建完全二叉树
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
	BTree* root;//根结点
	printf("请输入二叉树的结点数:");
	scanf("%d", &n);
	getchar();//输入数字
	printf("请输入长度为 %d 的字符串 :\n", n);

	printf("完全二叉树已成功创建! 结点序列为：");
	for (i = 0; i < n; i++)
	{
		printf(" %c ", str[i]);
	}
	printf("\n");
}