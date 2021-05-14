#include<stdio.h>

// 노드 구조체
typedef struct node
{
	int data;
	struct node* next;
}Node;

// 헤더 노드 구조체
typedef struct
{
	Node* head;	// 노드를 가리킬수 있는 타입이 와야한다
}HeadNode;

HeadNode* createHead();
void preInsertNode(HeadNode* h_node, int data);	// h_node의 실인수는 head
void rearInsertNode(HeadNode* h_node, int data);
void printNode(HeadNode* h_node);

int main()
{
	HeadNode* h = createHead();

	// 전위 삽입
	preInsertNode(h, 1);
	preInsertNode(h, 2);
	preInsertNode(h, 3);
	preInsertNode(h, 4);
	preInsertNode(h, 5);

	// 후위 삽입
	rearInsertNode(h, 10);
	rearInsertNode(h, 20);
	rearInsertNode(h, 30);
	rearInsertNode(h, 40);
	rearInsertNode(h, 50);

	// 연결리스트 출력
	printNode(h);

	return 0;
}

/* 헤더를 생성하는 함수 */
HeadNode* createHead()
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));	// 헤드노드 생성
	if (h != NULL) h->head = NULL;

	return h;
}

/* 전위 노드 생성 */
void preInsertNode(HeadNode* h_node, int data)	// h_node의 실인수는 head
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode != NULL)
	{
		newNode->data = data;
		newNode->next = h_node->head;
		h_node->head = newNode;
	}
}

/* 후위 노드 생성 */
void rearInsertNode(HeadNode* h_node, int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode != NULL)
	{
		newNode->data = data;
		newNode->next = NULL;
	}

	// 첫번째 노드인 경우
	if (h_node->head == NULL)
	{
		h_node->head = newNode;
	}

	// 이미 생성된 노드가 있는 경우
	else
	{
		//마지막 노드 찾기
		Node* curr = h_node->head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}

		// 마지막 노드 뒤에 새로운 노드 삽입
		curr->next = newNode;
	}
}

void printNode(HeadNode* h_node)
{
	Node* curr = h_node->head;
	int i = 1;
	while (curr != NULL)
	{
		printf("%d번째 노드 값 : %d\n", i++, curr->data);
		curr = curr->next;
	}
}