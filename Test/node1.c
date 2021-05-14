#include <stdio.h>

typedef struct node {
	int data;			//data를 넣는 data멤버
	struct node* link;	// 자기 참조 구조 
	// 다음 노드의 주소를 저장할 멤버 (다음 주소를 가리킴)
}Node;

int main()
{
	int i = 1;

	//헤더 노드 선언 
	Node* head = (Node*)malloc(sizeof(Node));	
	Node* node1 = malloc(sizeof(Node));
	
    // 메모리 동적 할당 , 이게 오면 sizeof해야함 
	// node1에 저장 Node타입의 포인터로
	// 이게 바로 노드 생성! 
	if (node1 == NULL) return;
	node1->data = 10;
	node1->link = NULL;
	head->link = node1;		// 헤더노드에 첫번째 노드의 주소값을 넣는다 


	// 두번째 노드 생성
	Node* node2 = (Node*)malloc(sizeof(Node));
	node1->link = node2;	// 첫번째 노드가 두번째 노드 연결 
	node2->data = 12;
	node2->link = NULL;

	// 세번째 노드 생성
	Node* node3 = (Node*)malloc(sizeof(Node));
	node2->link = node3;	// 두번째 노드가 세번째 노드 연결 
	node3->data = 14;
	node3->link = NULL;

	// 네번째 노드 생성
	Node* node4 = (Node*)malloc(sizeof(Node));
	node3->link = node4;	// 세번째 노드가 네번째 노드 연결 
	node4->data = 16;
	node4->link = NULL;

	// 다섯번째 노드 생성
	Node* node5 = (Node*)malloc(sizeof(Node));
	node4->link = node5;	// 네번째 노드가 다섯번째 노드 연결 
	node5->data = 18;
	node5->link = NULL;

	Node* curr = head->link;
	while (curr != NULL)
	{
		printf("%d번째 노드 데이터 : %d\n",i, curr->data);
		curr = curr->link;
		i++;
	}

	free(node1);
	free(node2);
	free(head);
	return 0;
}