#include <iostream>
#include <ncurses.h>
#include <ctime>
#include <chrono>
#include <thread>
#include <fstream>
using namespace std;
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals;

int check_jumphighscore(int score){
	int old_score, new_score, highscore;
	std::string temp;
	bool flag = false;

	new_score = score;
	std::fstream reader;
	reader.open("jump_highscore.txt", std::ios::in);

	while(getline(reader, temp)){
		if (temp.size()>0)
		{
			flag = true;
		}else{
			flag = false;
		}
		reader.close();
	}

	if (flag == false)
	{
		int temp1 = 0;
		std::fstream writer;
		writer.open("jump_highscore.txt", std::ios::out);
		writer<<temp1;
		writer.close();
		highscore = 0;
	}
	else if (flag == true)
	{
		std::fstream reader;
		reader.open("jump_highscore.txt", std::ios::in);
		reader>>old_score;
		if (new_score > old_score)
		{
			std::fstream writer;
			writer.open("jump_highscore.txt", std::ios::out);
			writer<<new_score;
			writer.close();
			highscore = new_score;
		}
		else{
			highscore = old_score;
		}
	}

	return highscore;
}

int jumpman()
{
	// initscr();
	// noecho();
	// cbreak();
	// nodelay(stdscr, TRUE);

	while(1){

		int time = 300;
		static int p_y = 6, o_x = 20, score=0;
		const int p_x = 4, o_y = 6, x_max = 22, x_min = 0;
		int highscore;
		bool p_jump = false, p_up = false, p_down = false, state = true, speed = true;

		highscore = check_jumphighscore(0);

		WINDOW * display = newwin(9,26,1,4);
		box(display, 0, 0);
		refresh();
		mvwprintw(display, 1, 2, "Instructions: ");
		mvwprintw(display, 3, 2, "1.Use spacebar to jump");
		mvwprintw(display, 4, 2, "and avoid hitting the");
		mvwprintw(display, 5, 2, "moster!");
		mvwprintw(display, 6, 2, "2.Press enter to start!");
		// mvwprintw(display, 1, 2, "Score:%d", score);
		// mvwprintw(display, 1, 13, "Highscore:%d", highscore);
		mvwprintw(display, 2, 1, "------------------------");
		mvwprintw(display, 7, 1, "------------------------");
		// mvwprintw(display, 8, 1, "-  `  -  `  -  `  -  ` -");
		wrefresh(display);
		while(true){
		if ( (int)getch() == 10 )
		{
			break;
		}
		wclear(display);

		
	}

		static int i = 0;
		// static time_t first, second;

		while(1){
			timeout(time);
			// int jump;
			if ((int)getch() == 32 && p_y == 6)
			// if ((int)jump == 32)
			{
				// first = time(0);
				p_jump = true;
				p_up = true;

				// if (second <= first+1 )
				// {
				// 	flushinp();
				// }
			}

			if (p_jump == true && p_up == true)
			{
				p_y--;
				if (p_y < 3)
				{
					// mvwprintw(display, 2, 20, "yes");
					p_up = false;
					p_down = true;
				}
				mvwprintw(display, 1, 20, "%d", p_y);
			}
			
			if (p_jump == true && p_down == true)
			{
				p_y++;
				if (p_y==6)
				{
					p_down = false;
					p_jump = false;
					beep();
				}
				// mvwprintw(display, 1, 20, "%d", p_y);
			}
			
			refresh();
			box(display, 0, 0);		

			refresh();
			mvwprintw(display, 7, 1, "------------------------");
			// mvwprintw(display, 8, 1, "-  `  -  `  -  `  -  ` -");

			o_x--;
			if (o_x==x_min)
			{
				score++;
				state = !state;

				if (state == true)
					o_x = x_max-3;
				if (state == false)
					o_x = x_max;
				if (speed == true)
				{
					if (time>=40 && time<=100)
						time = time-20;
					if (time>100)
						time = time-50;
					if (time<40)
						speed = !speed;
				}
				if (speed == false){
					if (time<150)
						time = time+30;
					// if (time>50 && time<=100)
					// 		time = time+25;
					if (time>=150)
						speed = !speed;
				}
			}

			if ((p_x == o_x || p_x+1 == o_x || p_x == o_x+1 || p_x+1 == o_x+1 || p_x == o_x+2 || p_x+1 == o_x+2 || p_x == o_x+3 || p_x+1 == o_x+3) && p_y == o_y)
			{
				highscore = check_jumphighscore(score);
				wclear(display);
				box(display, 0, 0);
				refresh();
				mvwprintw(display, 1, 2, "Score:%d", score);
				mvwprintw(display, 1, 13, "Highscore:%d", highscore);
				mvwprintw(display, 3, 7, "GAME OVER!");
				mvwprintw(display, 4, 3, "(press R to restart");
				mvwprintw(display, 5, 3, "   or Q to quit)");
				mvwprintw(display, 7, 1, "------------------------");
				// mvwprintw(display, 8, 1, "-  `  -  `  -  `  -  ` -");
				wrefresh(display);
				break;
			}

			//purr
			mvwprintw(display, p_y, p_x, ":3");
			//obstacle
			mvwprintw(display, o_y, o_x, "[:v]");

			mvwprintw(display, 1, 2, "Score:%d", score);
			mvwprintw(display, 1, 13, "Highscore:%d", highscore);
			mvwprintw(display, 2, 2, "Inv-spd:%d", time);
			mvwprintw(display, 2, 17, "State:%d", speed);
			
			//sleep_for(500ms);
			wrefresh(display);
			wclear(display);
		} // inner while end

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
				wclear(display); wclear(display);
				p_y = 6, o_x = 20, score=0, p_jump = false, p_up = false, p_down = false;
				continue;
		}

		{
			outerWhile:
				wclear(display); wclear(display);
				p_y = 6, o_x = 20, score=0, p_jump = false, p_up = false, p_down = false;
				break;
		}

	} // outer while end

	// getch();
	// clear();
	// endwin();

	return 0;
}