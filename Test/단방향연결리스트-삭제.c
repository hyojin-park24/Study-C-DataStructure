#include<stdio.h>

// ��� ����ü
typedef struct node
{
	int data;
	struct node* next;
}Node;

// ��� ��� ����ü
typedef struct
{
	Node* head;	// ��带 ����ų�� �ִ� Ÿ���� �;��Ѵ�
}HeadNode;

HeadNode* createHead();
void preInsertNode(HeadNode* h_node, int data);	// h_node�� ���μ��� head
void rearInsertNode(HeadNode* h_node, int data);
void printNode(HeadNode* h_node);

/*��ü ��� ���� �Լ�*/
void allDelNode(HeadNode* h)
{

	Node* delNode;
	while (h->head != NULL)
	{
		delNode = h->head;
		h->head = h->head->next;
		free(delNode);
	}
}

/*��� �˻� �Լ�*/
Node* searchNode(HeadNode* h, int data)
{
	Node* s = h->head;
}

/*��� ���� �Լ�*/
void removeNode(HeadNode* h, Node* d)
{
	Node* curr = h->head;
	while (curr != NULL)
	{
		if (curr->next == d)
		{
			curr->next = d->next;
			free(d);
		}
		curr = curr->next;
	}
	printf("ã�� ���� �����ϴ�.");

	// ������� ���� 
}

int main()
{
	HeadNode* h = createHead();

	// ���� ����
	preInsertNode(h, 1);
	preInsertNode(h, 2);
	preInsertNode(h, 3);
	preInsertNode(h, 4);
	preInsertNode(h, 5);

	// ���� ����
	rearInsertNode(h, 10);
	rearInsertNode(h, 20);
	rearInsertNode(h, 30);
	rearInsertNode(h, 40);
	rearInsertNode(h, 50);

	// ���Ḯ��Ʈ ���
	printNode(h);

	return 0;
}

/* ����� �����ϴ� �Լ� */
HeadNode* createHead()
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));	// ����� ����
	if (h != NULL) h->head = NULL;

	return h;
}

/* ���� ��� ���� */
void preInsertNode(HeadNode* h_node, int data)	// h_node�� ���μ��� head
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode != NULL)
	{
		newNode->data = data;
		newNode->next = h_node->head;
		h_node->head = newNode;
	}
}

/* ���� ��� ���� */
void rearInsertNode(HeadNode* h_node, int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode != NULL)
	{
		newNode->data = data;
		newNode->next = NULL;
	}

	// ù��° ����� ���
	if (h_node->head == NULL)
	{
		h_node->head = newNode;
	}

	// �̹� ������ ��尡 �ִ� ���
	else
	{
		//������ ��� ã��
		Node* curr = h_node->head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}

		// ������ ��� �ڿ� ���ο� ��� ����
		curr->next = newNode;
	}
}

// ȭ�� ��� �Լ� 
void printNode(HeadNode* h_node)
{
	Node* curr = h_node->head;
	int i = 1;
	while (curr != NULL)
	{
		printf("%d��° ��� �� : %d\n", i++, curr->data);
		curr = curr->next;
	}
}




