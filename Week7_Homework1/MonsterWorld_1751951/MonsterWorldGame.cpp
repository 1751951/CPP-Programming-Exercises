#include "MonsterWorld.h"
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int w = 16, h = 8;

	MonsterWorld game(w, h);
	Monster m("몬스터", "※", rand() % w, rand() % h);
	game.add(m);
	
	Monster a("도깨비", "◎", rand() % w, rand() % h);
	game.add(a);

	Monster b("별그대", "★", rand() % w, rand() % h);
	game.add(b);

	Monster c("고스트", "♥", rand() % w, rand() % h);
	game.add(c);

	game.play(500, 10);
	printf("------게임 종료-------------------\n");
}