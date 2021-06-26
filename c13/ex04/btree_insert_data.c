#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*node;

	if (!(*root))
	{
		*root = btree_create_node(item);
	}
	else
	{
		node = *root;
		if ((*cmpf)(item, node->item) < 0)
		{
			if (node->left)
				btree_insert_data(&node->left, item, cmpf);
			else
				node->left = btree_create_node(item);
		}
		else
		{
			if (node->right)
				btree_insert_data(&node->right, item, cmpf);
			else
				node->right = btree_create_node(item);
		}
	}
}
