#include<stdio.h>

typedef struct node {
	int data;
	struct node* link;
}Node;

//맨앞으로 새로운 노드를 생성시키는 전위 함수
void addNode(Node* target, int data)			// 기존 노드 뒤에 노드를 추가
{
	Node* newNode = malloc(sizeof(Node));		//새로운 노드 생성
	newNode->data = data;						// 데이터 저장
	newNode->link = target->link;				// 새 노드 다음의 다음 노드에 다음 노드를 저장
	target->link = newNode;						// 기준 노드의 다음 노드에 새 노드를 지정
}

int main()
{
	int i = 1;

	//헤더 노드 생성
	Node* head = (Node*)malloc(sizeof(Node));
	head->link = NULL;
	
	// 노드 세개 만든 후 데이터 값 입력
	addNode(head, 10);
	addNode(head, 20);
	addNode(head, 30);

	// 데이터 값 출력 
	Node* curr = head->link;
	while (curr != NULL)
	{
		printf("%d번째 노드 데이터 : %d\n", i, curr->data);
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