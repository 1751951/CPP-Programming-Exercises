#include "MonsterWorld.h"
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int w = 16, h = 8;

	MonsterWorld game(w, h);
	Monster m("����", "��", rand() % w, rand() % h);
	game.add(m);
	
	Monster a("������", "��", rand() % w, rand() % h);
	game.add(a);

	Monster b("���״�", "��", rand() % w, rand() % h);
	game.add(b);

	Monster c("��Ʈ", "��", rand() % w, rand() % h);
	game.add(c);

	game.play(500, 10);
	printf("------���� ����-------------------\n");
}