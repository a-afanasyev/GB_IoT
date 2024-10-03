
#include <stdio.h>
#include <curses.h>

int Rubl_1=0, Rubl_2 = 0, Cancel = 0;
enum states {READY, PREPARE, WAIT, CHANGE, RETURN};

void GetUserSignal(void)
{
	char Choise;
	while(1)
	{
		printf("1. Put 1 rub\n2. Put 2 rubl\n0. Cancel\n");
		Choise = getch();
		switch(Choise)
		{
			case '1': Rubl_1 = 1; return;
			case '2': Rubl_2 = 1; return;
			case '0': Cancel = 1; return;
		}
		
	}
}

int main(int argc, char **argv)
{
	enum states state = READY;
	while(1)
	{
		switch(state)
		{
			case READY:
				printf("Ready\n");
				GetUserSignal();
				if(Rubl_2) state = PREPARE;
				if(Rubl_1) state = WAIT;
			break;
			case PREPARE:
				printf("Prepare Coffe\n");
				state = READY;
			break;
			case WAIT:
				printf("Wait\n");
				GetUserSignal();
				if(Rubl_2) state = CHANGE;
				if(Rubl_1) state = PREPARE;
				if(Cancel) state = RETURN;
			break;
			case CHANGE:
				printf("Change 1 rubl\n");
				state = PREPARE;
			break;
			case RETURN:
				printf("Change 1rubl\n");
				state = READY;
			break;
		}
		Rubl_1=0, Rubl_2 = 0, Cancel = 0; 
	}
	return 0;
}

