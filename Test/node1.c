#include <stdio.h>

typedef struct node {
	int data;			//data�� �ִ� data���
	struct node* link;	// �ڱ� ���� ���� 
	// ���� ����� �ּҸ� ������ ��� (���� �ּҸ� ����Ŵ)
}Node;

int main()
{
	int i = 1;

	//��� ��� ���� 
	Node* head = (Node*)malloc(sizeof(Node));	
	Node* node1 = malloc(sizeof(Node));
	
    // �޸� ���� �Ҵ� , �̰� ���� sizeof�ؾ��� 
	// node1�� ���� NodeŸ���� �����ͷ�
	// �̰� �ٷ� ��� ����! 
	if (node1 == NULL) return;
	node1->data = 10;
	node1->link = NULL;
	head->link = node1;		// �����忡 ù��° ����� �ּҰ��� �ִ´� 


	// �ι�° ��� ����
	Node* node2 = (Node*)malloc(sizeof(Node));
	node1->link = node2;	// ù��° ��尡 �ι�° ��� ���� 
	node2->data = 12;
	node2->link = NULL;

	// ����° ��� ����
	Node* node3 = (Node*)malloc(sizeof(Node));
	node2->link = node3;	// �ι�° ��尡 ����° ��� ���� 
	node3->data = 14;
	node3->link = NULL;

	// �׹�° ��� ����
	Node* node4 = (Node*)malloc(sizeof(Node));
	node3->link = node4;	// ����° ��尡 �׹�° ��� ���� 
	node4->data = 16;
	node4->link = NULL;

	// �ټ���° ��� ����
	Node* node5 = (Node*)malloc(sizeof(Node));
	node4->link = node5;	// �׹�° ��尡 �ټ���° ��� ���� 
	node5->data = 18;
	node5->link = NULL;

	Node* curr = head->link;
	while (curr != NULL)
	{
		printf("%d��° ��� ������ : %d\n",i, curr->data);
		curr = curr->link;
		i++;
	}

	free(node1);
	free(node2);
	free(head);
	return 0;
}