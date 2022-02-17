struct node *insert_at_pos(struct node *head,int data,int pos)
{
	struct node *temp,*p;
	int i;

	temp=(struct node *)malloc(sizeof(struct node));
	temp->info=data;

    // Move 'p' so that it points the tail!
    // Also m calculating length of this list
    p = head;
    int len = 1;
    while(p->next != head)
    {
        p = p->next;
        len += 1;
    }

    if (pos > len)
    {
        printf("Position bigger than the list");
        return head;
    }

	for(i=1; i<pos; i++)
		p=p->link;
        
    temp->link=p->link;
    p->link=temp;

    if (pos == 1)
        head = temp;
	
	return head;
}