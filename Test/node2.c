#include<stdio.h>

typedef struct node {
	int data;
	struct node* link;
}Node;

//�Ǿ����� ���ο� ��带 ������Ű�� ���� �Լ�
void addNode(Node* target, int data)			// ���� ��� �ڿ� ��带 �߰�
{
	Node* newNode = malloc(sizeof(Node));		//���ο� ��� ����
	newNode->data = data;						// ������ ����
	newNode->link = target->link;				// �� ��� ������ ���� ��忡 ���� ��带 ����
	target->link = newNode;						// ���� ����� ���� ��忡 �� ��带 ����
}

int main()
{
	int i = 1;

	//��� ��� ����
	Node* head = (Node*)malloc(sizeof(Node));
	head->link = NULL;
	
	// ��� ���� ���� �� ������ �� �Է�
	addNode(head, 10);
	addNode(head, 20);
	addNode(head, 30);

	// ������ �� ��� 
	Node* curr = head->link;
	while (curr != NULL)
	{
		printf("%d��° ��� ������ : %d\n", i, curr->data);
		curr = curr->link;
		i++;
	}
	curr = head->link;
	while (curr != NULL)
	{
		Node* link = curr->link;
		free(curr);
		curr = link;
	}
	free(head);
	
	return 0;
}