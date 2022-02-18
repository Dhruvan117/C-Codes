/*
*************************************************************
* Author  : Dangar Dhruvan                                  *
* Written in Sublime Text                                   *
* Code    : Binary tree                                     *
* Date    : 28/12/2021                                      *
* time    : 10:32                                           *
*                                                           *
* you can modify this code as per your need                 *
*************************************************************
*/

#include<stdio.h>             //Standard IO headerfile
#include<stdlib.h>

struct btn
{
	int info;
	struct btn *left;
	struct btn *right;
};

void preorder(struct btn *root)
{
	if(root)
	{
		printf("%d",root->info);
		preorder(root->left);
		preorder(root->right);
	}
}

void levelorder(struct btn *root)
{
	struct btn *temp;
	struct queue *q = creatqueue();
	if(!root)
	{
		return;
	}
	enqueue(q,root);
	while(!isemptyqueue(q))
	{
		temp = dequeue(q);
		printf("%D",temp -> info);
		if(temp->left)
		{
			enqueue(q,temp->left);
		}
		if(temp->right)
		{
			enqueue(q,temp->right);
		}
	}
	deletequeue(q);
}

void insert(struct btn *root, int data)
{
	struct btn *par;
	struct btn *n=malloc(sizeof(struct btn));
	n->left=NULL;
	n->info=data;
	n->right=NULL;

	if(root==NULL)
	{
		root=n;
	}

	esle
	{
		par=root;
		while(par!=NULL)
		{
			if(par->left==NULL)
			{
				par=par->left = n;
			}
			par=par->right;
		}
	}
}

struct btn *delete(struct btn *root, int data)
{
	struct btn *temp;
	if(root==NULL)
	{
		printf("NO such element exist");
	}
	else if(data < root -> data)
	{
		root->left = delete(root->left,data);
	}
	else if(data > root -> data)
	{
		root -> right = delete (root -> right,data);
	}
	else
	{
		temp=root;
		if(root -> left == NULL)
		{
			root = root->right;
		}
		if(root -> right == NULL)
		{
			root=root -> left;
		}
		free(temp);
	}
	return(root);
}
