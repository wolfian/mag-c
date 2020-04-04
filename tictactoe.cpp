#include <ncurses.h>

int tictactoe(){
	// initscr();
	// noecho();
	
	while(1){
		WINDOW * w1 = newwin(3,5,2,10); WINDOW * w2 = newwin(3,5,2,14); WINDOW * w3 = newwin(3,5,2,18);
		WINDOW * w4 = newwin(3,5,4,10); WINDOW * w5 = newwin(3,5,4,14); WINDOW * w6 = newwin(3,5,4,18);
		WINDOW * w7 = newwin(3,5,6,10); WINDOW * w8 = newwin(3,5,6,14); WINDOW * w9 = newwin(3,5,6,18);
		WINDOW * display = newwin(6,20,2,35);

		wborder(w1, 32, 0, 32, 0, 32, 32, 32, 0); wborder(w2, 0, 0, 32, 0, 32, 32, 0, 0);
		wborder(w3, 0, 32, 32, 0, 32, 32, 0, 32); wborder(w4, 32, 0, 0, 0, 32, 0, 32, 0);
		wborder(w5, 0, 0, 0, 0, 0, 0, 0, 0); wborder(w6, 0, 32, 0, 0, 0, 32, 0, 32);
		wborder(w7, 32, 0, 0, 32, 32, 0, 32, 32); wborder(w8, 0, 0, 0, 32, 0, 0, 32, 32);
		wborder(w9, 0, 32, 0, 32, 0, 32, 32, 32);
		box(display, 0, 0);

		refresh();

		mvwprintw(w1,1,2,"1"); mvwprintw(w2,1,2,"2"); mvwprintw(w3,1,2,"3");
		mvwprintw(w4,1,2,"4"); mvwprintw(w5,1,2,"5	"); mvwprintw(w6,1,2,"6");
		mvwprintw(w7,1,2,"7"); mvwprintw(w8,1,2,"8"); mvwprintw(w9,1,2,"9");

		wrefresh(w1); wrefresh(w2); wrefresh(w3);
		wrefresh(w4); wrefresh(w5); wrefresh(w6);
		wrefresh(w7); wrefresh(w8); wrefresh(w9);
		wrefresh(display);

		char ttt[3][3] = {'-', '-', '-','-', '-', '-','-', '-', '-'};
		bool flag = true, input = true;
		int turn, loc, count = 0;
		char value;

		while(1){
			if (count==9)
			{
				wclear(display);
				box(display, 0, 0);
				refresh();
				mvwprintw(display,1,1,"Match drawn! 0_0");
				wrefresh(display);
				break;
			}

			if (flag==true) turn = 1;
			else if (flag==false) turn = 2;


			if (turn==1)
			{
				wclear(display);
				box(display, 0, 0);
				refresh();
				mvwprintw(display,1,1,"Player 1,");
				mvwprintw(display,2,1,"at what location");
				mvwprintw(display,3,1,"do you wish to ");
				mvwprintw(display,4,1,"place 'X'?");
				wrefresh(display);

				label1:
				if (input==false){
					wclear(display);
					box(display, 0, 0);
					refresh();
					mvwprintw(display,1,1,"Player 1,");
					mvwprintw(display,2,1,"at what location");
					mvwprintw(display,3,1,"do you wish to ");
					mvwprintw(display,4,1,"place 'X'?");
					wrefresh(display);
					input=true;
				}

				loc = getch();

				if(loc!=49 && loc!=50 && loc!=51 && loc!=52 && loc!=53 && loc!=54 && loc!=55 && loc!=56 && loc!=57){
					input = false;
					goto label1;
				}

				value = 'X';
			}
			else if (turn==2)
			{
				wclear(display);
				box(display, 0, 0);
				refresh();
				mvwprintw(display,1,1,"Player 2,");
				mvwprintw(display,2,1,"at what location");
				mvwprintw(display,3,1,"do you wish to ");
				mvwprintw(display,4,1,"place 'O'?");
				wrefresh(display);

				label2:
				if (input==false){
					wclear(display);
					box(display, 0, 0);
					refresh();
					mvwprintw(display,1,1,"Player 2,");
					mvwprintw(display,2,1,"at what location");
					mvwprintw(display,3,1,"do you wish to ");
					mvwprintw(display,4,1,"place 'O'?");
					wrefresh(display);
					input=true;
				}

				loc = getch();

				if(loc!=49 && loc!=50 && loc!=51 && loc!=52 && loc!=53 && loc!=54 && loc!=55 && loc!=56 && loc!=57){
					input = false;
					goto label2;
				}	
				value = 'O';
			}

			char* ptr = &ttt[0][0];

			for (int i = 48; i < loc; ++i)
			{
				if (i==loc-1)
				{
					if (*ptr == 'X' || *ptr == 'O'){
						flag=!flag;
						continue;
					}
					else{
						count++;
						if(loc==49 && (*ptr != 'X' && *ptr != 'O')){
							*ptr = value;
							wclear(w1);
							wborder(w1, 32, 0, 32, 0, 32, 32, 32, 0);
							refresh();
							if (value=='X')
							{
								mvwprintw(w1,1,2,"X");
								wrefresh(w1);
							}
							else if (value=='O')
							{
								mvwprintw(w1,1,2,"O");
								wrefresh(w1);
							}	
						}
						else if(loc==50 && (*ptr != 'X' && *ptr != 'O')){
							*ptr = value;
							wclear(w2);
							wborder(w2, 0, 0, 32, 0, 32, 32, 0, 0);
							refresh();
							if (value=='X')
							{
								mvwprintw(w2,1,2,"X");
								wrefresh(w2);
							}
							else if (value=='O')
							{
								mvwprintw(w2,1,2,"O");
								wrefresh(w2);
							}
						}
						else if(loc==51 && (*ptr != 'X' && *ptr != 'O')){
							*ptr = value;
							wclear(w3);
							wborder(w3, 0, 32, 32, 0, 32, 32, 0, 32);
							refresh();
							if (value=='X')
							{
								mvwprintw(w3,1,2,"X");
								wrefresh(w3);
							}
							else if (value=='O')
							{
								mvwprintw(w3,1,2,"O");
								wrefresh(w3);
							}
						}
						else if(loc==52 && (*ptr != 'X' && *ptr != 'O')){
							*ptr = value;
							wclear(w4);
							wborder(w4, 32, 0, 0, 0, 32, 0, 32, 0);
							refresh();
							if (value=='X')
							{
								mvwprintw(w4,1,2,"X");
								wrefresh(w4);
							}
							else if (value=='O')
							{
								mvwprintw(w4,1,2,"O");
								wrefresh(w4);
							}
						}
						else if(loc==53 && (*ptr != 'X' && *ptr != 'O')){
							*ptr = value;
							wclear(w5);
							wborder(w5, 0, 0, 0, 0, 0, 0, 0, 0);
							refresh();
							if (value=='X')
							{
								mvwprintw(w5,1,2,"X");
								wrefresh(w5);
							}
							else if (value=='O')
							{
								mvwprintw(w5,1,2,"O");
								wrefresh(w5);
							}
						}
						else if(loc==54 && (*ptr != 'X' && *ptr != 'O')){
							*ptr = value;
							wclear(w6);
							wborder(w6, 0, 32, 0, 0, 0, 32, 0, 32);
							refresh();
							if (value=='X')
							{
								mvwprintw(w6,1,2,"X");
								wrefresh(w6);
							}
							else if (value=='O')
							{
								mvwprintw(w6,1,2,"O");
								wrefresh(w6);
							}
						}
						else if(loc==55 && (*ptr != 'X' && *ptr != 'O')){
							*ptr = value;
							wclear(w7);
							wborder(w7, 32, 0, 0, 32, 32, 0, 32, 32);
							refresh();
							if (value=='X')
							{
								mvwprintw(w7,1,2,"X");
								wrefresh(w7);
							}
							else if (value=='O')
							{
								mvwprintw(w7,1,2,"O");
								wrefresh(w7);
							}
						}
						else if(loc==56 && (*ptr != 'X' && *ptr != 'O')){
							*ptr = value;
							wclear(w8);
							wborder(w8, 0, 0, 0, 32, 0, 0, 32, 32);
							refresh();
							if (value=='X')
							{
								mvwprintw(w8,1,2,"X");
								wrefresh(w8);
							}
							else if (value=='O')
							{
								mvwprintw(w8,1,2,"O");
								wrefresh(w8);
							}
						}
						else if(loc==57 && (*ptr != 'X' && *ptr != 'O')){
							*ptr = value;
							wclear(w9);
							wborder(w9, 0, 32, 0, 32, 0, 32, 32, 32);
							refresh();
							if (value=='X')
							{
								mvwprintw(w9,1,2,"X");
								wrefresh(w9);
							}
							else if (value=='O')
							{
								mvwprintw(w9,1,2,"O");
								wrefresh(w9);
							}
						}

						break;
					}
				}
				ptr++;
			}

			int winner=0, a1=0, a2=0, b1=0, b2=0, c1=0, c2=0, d1=0, d2=0, e1=0, e2=0, f1=0, f2=0, g1=0, g2=0, h1=0, h2=0;

			for (int i = 0; i < 3; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					//winning logic
					if (i==j)
					{
						if (ttt[i][j]=='X'){
							a1++;
						}
						else if (ttt[i][j]=='O'){
							a2++;
						}
						if (a1==3)
						{
							winner=1;
							break;
						}
						else if (a2==3)
						{
							winner=2;
							break;
						}
					}
					//repeating it separately for each line
					if (i+j == 2)
					{
						if (ttt[i][j]=='X'){
							b1++;
						}
						else if (ttt[i][j]=='O'){
							b2++;
						}
						if (b1==3)
						{
							winner=1;
							break;
						}
						else if (b2==3)
						{
							winner=2;
							break;
						}
					}
					if (i==0)
					{
						if (ttt[i][j]=='X'){
							c1++;
						}
						else if (ttt[i][j]=='O'){
							c2++;
						}
						if (c1==3)
						{
							winner=1;
							break;
						}
						else if (c2==3)
						{
							winner=2;
							break;
						}
					}
					if (i==1)
					{
						if (ttt[i][j]=='X'){
							d1++;
						}
						else if (ttt[i][j]=='O'){
							d2++;
						}
						if (d1==3)
						{
							winner=1;
							break;
						}
						else if (d2==3)
						{
							winner=2;
							break;
						}
					}
					if (i==2)
					{
						if (ttt[i][j]=='X'){
							e1++;
						}
						else if (ttt[i][j]=='O'){
							e2++;
						}
						if (e1==3)
						{
							winner=1;
							break;
						}
						else if (e2==3)
						{
							winner=2;
							break;
						}
					}
					if (j==0)
					{
						if (ttt[i][j]=='X'){
							f1++;
						}
						else if (ttt[i][j]=='O'){
							f2++;
						}
						if (f1==3)
						{
							winner=1;
							break;
						}
						else if (f2==3)
						{
							winner=2;
							break;
						}
					}
					if (j==1)
					{
						if (ttt[i][j]=='X'){
							g1++;
						}
						else if (ttt[i][j]=='O'){
							g2++;
						}
						if (g1==3)
						{
							winner=1;
							break;
						}
						else if (g2==3)
						{
							winner=2;
							break;
						}
					}
					if (j==2)
					{
						if (ttt[i][j]=='X'){
							h1++;
						}
						else if (ttt[i][j]=='O'){
							h2++;
						}
						if (h1==3)
						{
							winner=1;
							break;
						}
						else if (h2==3)
						{
							winner=2;
							break;
						}
					}
				}
			}

			if (winner==1)
			{
					wclear(display);
					box(display, 0, 0);
					refresh();
					mvwprintw(display,1,1,"PLAYER 1 HAS WON!");
					mvwprintw(display, 3, 1, "(press R to resta-");
					mvwprintw(display, 4, 1, " rt or Q to quit)");
					wrefresh(display);
					break;
			}
			else if (winner==2)
			{
				wclear(display);
				box(display, 0, 0);
				refresh();
				mvwprintw(display,1,1,"PLAYER 2 HAS WON!");
				mvwprintw(display, 3, 1, "(press R to resta-");
				mvwprintw(display, 4, 1, " rt or Q to quit)");
				wrefresh(display);
				break;
			}
			beep();
			flag = !flag;
		}// inner while end

		while(1){
			int temp;
			temp = getch();
			if (temp == (int)'q' || temp == (int)'Q')
			{
				beep();
				goto outerWhile;
			}
			if (temp == (int)'r' || temp == (int)'R')
			{
				beep();
				goto innerWhile;
			}
		}

		{
			innerWhile:
				wclear(w1); wclear(w2); wclear(w3);
				wclear(w4); wclear(w5); wclear(w6);
				wclear(w7); wclear(w8); wclear(w9);
				wclear(display);
				continue;
		}

		{
			outerWhile:
				break;
		}

	}// outer while end

	// endwin();

	return 0;
}