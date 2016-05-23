#include <stdio.h>
#include <signal.h>

int cnt;

main (int ac, char *av[]) {
	void f(int);
	signal(SIGINT, f);

	int i;

	char *name[4];

	cnt = -1;
	name[0] = "tr";
	name[1] = "[a-z]";
	name[2] = "[A-Z]";
	name[3] = " ";

	printf("Number of args : %d, args are: \n", ac);
	
	while(1) {
		for (i=0; i<4; i++) {
			if (cnt>0) break;
			printf("Arg[%d]? %s\n", i , name[i]);
			sleep(0.5);
		}
		if (cnt>0) break;
		printf("hello\n");
		sleep(0.5);
		printf("Hello\n");
		sleep(0.5);

	}
}

void f(int signum) {
	printf("\n");
	cnt++;
}
