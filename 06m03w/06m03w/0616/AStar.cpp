#include <iostream>
#include <list>
using namespace std;

#define UNIT_DISTANCE 1
#define MAPSIZE 8

class Node_0616_1 {
public:
	int posX, posY;
	int F, G, H; //F(Fitness) G(Goal) H(Heuristic)
	bool IsBlock;
	Node_0616_1* parent;
};

Node_0616_1 mapData[MAPSIZE][MAPSIZE];	// 맵

list<Node_0616_1*> openList;
//list<Node_0616_1*> closedList;
Node_0616_1* Start, * End;

void InitializeNodes_0616_1() // 맵 초기화 
{
	for (int y = 0; y < MAPSIZE; y++) {
		for (int x = 0; x < MAPSIZE; x++) {
			mapData[y][x].posX = x;
			mapData[y][x].posY = y;
			mapData[y][x].F = mapData[y][x].G = mapData[y][x].H = 0;
			mapData[y][x].IsBlock = false;
			mapData[y][x].parent = NULL;
		}
	}
}

void AstarInsertOpenList_0616_1(Node_0616_1* node, Node_0616_1* parent, int Gdist = 0)
{
	if (node->posX < 0 || node->posY < 0 ||
		node->posX > MAPSIZE - 1 || node->posY > MAPSIZE - 1 || node->IsBlock)
		return;

	//list<Node_0616_1*>::iterator iter2 = find(closedList.begin(), closedList.end(), node);
	//if (iter2 != closedList.end()) return;

	for (auto iter1 = openList.begin(); iter1 != openList.end(); iter1++)
	{
		if (node == (*iter1)) { // openList 있으면
			if (Gdist < node->G) openList.erase(iter1); // G거리 큰 것 재계산
			else return; // G거리 작거나 같으면 통과
			break;
		}
	}

	node->parent = parent;
	node->G = Gdist;
	node->H = UNIT_DISTANCE * (abs(End->posX - node->posX) + abs(End->posY - node->posY));
	node->F = node->G + node->H; // 휴리스틱 계산

	list<Node_0616_1*>::iterator iter;
	for (iter = openList.begin(); iter != openList.end(); iter++) {
		if (node->F <= (*iter)->F) {
			openList.insert(iter, node); // F 비교 후 작으면 추가
			return;
		}
	}
	openList.insert(iter, node); // 끝에 추가
}

//AstarFindRoute_0616_1(); 
void AstarFindRoute_0616_1() {
	Node_0616_1* node;
	while (!openList.empty()) {
		list<Node_0616_1*>::iterator iter = openList.begin();
		node = *iter;
		openList.erase(iter);
		node->IsBlock = true;
		//closedList.push_back(node);

		if (node == End) break;

		AstarInsertOpenList_0616_1(&mapData[node->posY - 1][node->posX - 1], node, node->G + 1.4 * UNIT_DISTANCE);
		AstarInsertOpenList_0616_1(&mapData[node->posY - 1][node->posX    ], node, node->G + UNIT_DISTANCE);
		AstarInsertOpenList_0616_1(&mapData[node->posY - 1][node->posX + 1], node, node->G + 1.4 * UNIT_DISTANCE);
		AstarInsertOpenList_0616_1(&mapData[node->posY    ][node->posX - 1], node, node->G + UNIT_DISTANCE);
		AstarInsertOpenList_0616_1(&mapData[node->posY    ][node->posX + 1], node, node->G + UNIT_DISTANCE);
		AstarInsertOpenList_0616_1(&mapData[node->posY + 1][node->posX - 1], node, node->G + 1.4 * UNIT_DISTANCE);
		AstarInsertOpenList_0616_1(&mapData[node->posY + 1][node->posX    ], node, node->G + UNIT_DISTANCE);
		AstarInsertOpenList_0616_1(&mapData[node->posY + 1][node->posX + 1], node, node->G + 1.4 * UNIT_DISTANCE);
	}
}

void AstarMakePath_0616_1() {
	cout << "Result : ";
	Node_0616_1* node = End;
	while (node != Start) {
		cout << "[" << node->posX << "," << node->posY << "] ";
		node = node->parent;
	}
	cout << "[" << node->posX << "," << node->posY << "] ";
}

//AstarSetObstacleBlock_0616_1(4, 2);
void AstarSetObstacleBlock_0616_1(int x, int y) // 장애물 설치
{
	mapData[y][x].IsBlock = true;
}

//AstarSetStartEndPoints_0616_1(&mapData[3][2], &mapData[3][6]);
void AstarSetStartEndPoints_0616_1(Node_0616_1* S, Node_0616_1* E)
{
	Start = S;
	End = E;
	AstarInsertOpenList_0616_1(Start, NULL, 0);
}

void TestPrint_0616_1() {
	for (int y = 0; y < MAPSIZE; y++) {
		for (int x = 0; x < MAPSIZE; x++) {
			//cout << "[" << x << "," << y << "]"; 			
			cout.width(3); cout << mapData[y][x].F << " ";
		}
		cout << endl;
	}
}

int main_0616_1()
{
	cout << "A* 알고리즘" << endl << endl;

	InitializeNodes_0616_1();

	AstarSetObstacleBlock_0616_1(4, 2);
	AstarSetObstacleBlock_0616_1(4, 3);
	AstarSetObstacleBlock_0616_1(4, 4);
	AstarSetObstacleBlock_0616_1(3, 2);
	AstarSetObstacleBlock_0616_1(2, 4);
	AstarSetObstacleBlock_0616_1(3, 4);

	//int StartX = 2, StartY = 3;
	//int EndX = 6, EndY = 3;
	AstarSetStartEndPoints_0616_1(&mapData[3][2], &mapData[3][6]);

	cout << endl << "-----------------초기 세팅----------------" << endl << endl;
	TestPrint_0616_1();

	AstarFindRoute_0616_1();

	cout << endl << "-----------------전체 결과----------------" << endl << endl;
	TestPrint_0616_1();

	cout << endl << "-----------------최단 경로----------------" << endl << endl;
	AstarMakePath_0616_1();

	return 0;
}