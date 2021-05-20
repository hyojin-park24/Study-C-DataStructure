/*이진 탐색 트리의 연산 프로그램*/

#include<stdio.h>
#include<stdlib.h>

typedef char element;		//이진 탐색 트리 element의 자료형을 char로 정의
typedef struct treeNode {
	char key;				//데이터 필드
	struct treeNode* left;	//왼쪽 서브 트리 링크 필드
	struct treeNode* right;	//오른쪽 서브 트리 링크 필드
}treeNode;

/*이진 탐색 트리에서 키 값이 x인 노드의 위치를 탐색하는 연산*/
treeNode* searchBST(treeNode* root, char x) {
	if (root == NULL) printf("\n생성자를 찾을 수 없습니다\n");
	else
	{
		treeNode* p;
		p = root;
		while (p != NULL)
		{
			if (x < p->key)p = p->left;
			else if (x == p->key)return p;
			else p = p->right;
			printf("\n 찾는 키가 없습니다!!");
			return p;
		}
	}
	
	
}

/*포인터 p가 가리키는 노드와 비교하여 노드 x를 삽입하는 연산*/
treeNode* insertNode(treeNode* p, char x) {
	treeNode* newNode;
	if (p == NULL) {
		newNode = (treeNode*)malloc(sizeof(treeNode));
		newNode->key = x;
		newNode->left = NULL;
		newNode->right = NULL;
		return newNode;
	}
	else if (x < p->key) p->left = insertNode(p->left, x);
	else if (x > p->key) p->right = insertNode(p->right, x);
	else printf("\n 이미 같은 키가 있습니다!! \n");

	return p;
}

/*루트 노드부터 탐색하여 키값과 같은 노드를 찾아 삭제하는 연산*/
void deleteNode(treeNode* root, element key) {
	treeNode* parent, * p, * succ, * succ_parent;
	treeNode* child;
	parent = NULL;
	p = root;
	while ((p!=NULL) && (p->key != key))
	{
		//삭제할 노드의 위치 탐색
		parent = p;
		if (key < p->key) p = p->left;
		else p = p->right;
	}

	//삭제할 노드가 없는 경우
	if (p == NULL) {
		printf("\n 찾는 키가 이진 트리에 없습니다!!");
		return;
	}

	//삭제할 노드가 단말 노드인 경우
	if ((p->left == NULL) && (p->right == NULL)) {
		if (parent != NULL) {
			if (parent->left == p)parent->left = NULL;
			else parent->right = NULL;
		}
		else root = NULL;
	}

	//삭제할 노드가 자식 노드를 한 개 가진 경우
	else if ((p->left == NULL) || (p->right == NULL)) {
		if (p->left != NULL) child = p->left;
		else child = p->right;

		if (parent != NULL) {
			if (parent->left == p)parent->left = child;
			else parent->right = child;
		}
		else root = child;
	}
	//삭제할 노드가 자식 노드를 두 개 가진 경우
	else {
		succ_parent = p;
		succ = p->left;
		while (succ->right != NULL)
		{
			//왼쪽 서브 트리에서 후계자 찾기
			succ_parent = succ;
			succ = succ->right;
		}
		if (succ_parent->left == succ) succ_parent->left = succ->left;
		else succ_parent->right = succ->left;
		p->key = succ->key;
		p = succ;
	}
	free(p);
}

//이진 탐색 트리를 중위 순회하면서 출력하는 연산
void displayInorder(treeNode* root)
{
	if (root) {
		displayInorder(root->left);
		printf("%c_", root->key);
		displayInorder(root->right);
	}
}

int main()
{
	/* 탐색 트리 규칙 : 
	 * 부모(root)를 기준으로 이동
	 * 중복된 값이 존재할 수 없음
	  부모보다 자식값이 크게 되면 오른쪽으로 계속 이동
	  부모보다 자식값이 작게 되면 왼쪽으로 계속 이동
	  트리 형성 된 후, 이진트리 형태로 값을 출력 함*/ 

	/*삭제
	자식노드가 두개인 경우, 실질적으로 삭제할 데이터를 삭제하지 않고
	오른쪽에 있는 제일 큰 값을 삭제하려고 하는 노드에 값을 복사하고
	자식노드를 실질적으로 삭제시켜서 트리 연결!*/
	
	treeNode* root = NULL;
	// 부모보다 자식값이 큰 경우
	//searchBST(root, 'a');
	//root = insertNode(root, 'a');
	//insertNode(root, 'a');
	//insertNode(root, 'b');
	//insertNode(root, 'c');
	////insertNode(root, 'j');
	//insertNode(root, 'd');
	//insertNode(root, 'e');
	//insertNode(root, 'f');
	//insertNode(root, 'g');
	//insertNode(root, 'h');
	//insertNode(root, 'i');

	// 부모보다 자식값이 작고 큰 경우
	searchBST(root, 'k');
	root = insertNode(root, 'k');
	insertNode(root, 'c');
	insertNode(root, 'h');
	insertNode(root, 'i');
	//insertNode(root, 'j');
	insertNode(root, 'j');
	insertNode(root, 'k');
	insertNode(root, 'q');
	insertNode(root, 'y');
	insertNode(root, 'z');
	insertNode(root, 'x');

	displayInorder(root);

	return 0;
}