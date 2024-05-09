#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Définition de la structure d'un nœud de la liste
typedef struct t_list {
    void *data;           // Les données stockées dans le nœud
    struct t_list *next ;  // Pointeur vers le nœud suivant
} t_list;

t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (!new)
	{
		return NULL;
	}
	new -> data = content;
	new -> next = NULL;
	return new;
}

int	ft_lstsize(t_list *lst)
{
	int i = 0;
	while (lst != NULL)
	{
		i++;
    	lst = lst -> next;
	}
	return i;
}

void *print_list(t_list *node)
{
	while (node != NULL)
	{
		printf("%s ->", (char *)(node -> data));
		node = node -> next;
	}
	printf("NULL");
	
}
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (*lst && new)
    {
        new->next = *lst;
		*lst = new;
    }
}

t_list *ft_lstlast(t_list *lst)
{
	while (lst -> next != NULL)
	{
		lst -> next = lst;
	}
	return lst;
	
}

int main(void)
{
	t_list *l = ft_lstnew("nyacat");
 	t_list *n = ft_lstnew("nycqtt");

	ft_lstadd_front(&l, n);
	printf("%s", (char *)l->data);
	l = l->next;
	printf("\n");
}
