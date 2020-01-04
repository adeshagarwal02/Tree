typedef struct node
{
	float data;
	union 
	{
		struct node *right;
		struct node *left
	};
}node;
