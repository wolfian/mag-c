#include <iostream>
#include <ncurses.h>
#include <vector>
#include <string>
#include <ctime>
#include <chrono>
#include <thread>
#include <fstream>
using namespace std;
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals;

int check_snakehighscore(int score){
	int old_score, new_score, highscore;
	std::string temp;
	bool flag = false;

	new_score = score;
	std::fstream reader;
	reader.open("snake_highscore.txt", std::ios::in);

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
		writer.open("snake_highscore.txt", std::ios::out);
		writer<<temp1;
		writer.close();
		highscore = 0;
	}
	else if (flag == true)
	{
		std::fstream reader;
		reader.open("snake_highscore.txt", std::ios::in);
		reader>>old_score;
		if (new_score > old_score)
		{
			std::fstream writer;
			writer.open("snake_highscore.txt", std::ios::out);
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

int kbhit()
{
    int ch = getch();
    if (ch != ERR) {
        ungetch(ch);
        return 1;
    } else {
        return 2;
    }
}

int snake()
{
	// initscr();
	// noecho();
	// cbreak();
	curs_set(0);
	// nodelay(stdscr, TRUE);
		while(1){

			int time = 100;
			int a_x = 20, a_y = 4, score = 0, highscore;

			vector<vector<int>> snake = {{4, 5},{4, 4},{4, 3}};

			highscore = check_snakehighscore(0);

			WINDOW * display = newwin(9,26,1,4);
			WINDOW * display1 = newwin(6,20,2,35);
			box(display, 0, 0);
			box(display1, 0, 0);
			refresh();
			
			mvwprintw(display, 1, 2, "Instructions: ");
			mvwprintw(display, 3, 2, "1. w,a,s,d to change");
			mvwprintw(display, 4, 2, "direction and eat as");
			mvwprintw(display, 5, 2, "many apples possible!");
			mvwprintw(display, 6, 2, "2.Press enter to start!");
			// mvwprintw(display, 1, 2, "Score:%d", score);
			// mvwprintw(display, 1, 13, "Highscore:%d", highscore);
			mvwprintw(display, 2, 1, "------------------------");
			mvwprintw(display, 7, 1, "------------------------");
			// mvwprintw(display, 8, 1, "-  `  -  `  -  `  -  ` -");
			// mvwprintw(display, 8, 25, "X");
			wrefresh(display);
			while(true){
			if ( (int)getch() == 10 )
			{
				break;
			}
			wclear(display);

			
		}

		string direction = "right", move = "";
		bool change = false, game_over = false;
		// static time_t first, second;
		const int y_max = 8, x_max = 25, y_min = 0, x_min = 0;

		while(1){
			if(direction == "up" || direction == "down")
				time = 200;
			else
				time = 100;

			timeout(time);

			if(kbhit())
			{
				switch (getch())           // check what key it was and take action
				{
					case 'W':
					case 'w':
					case KEY_UP:
						change = true;
						move = "up";
						break;
					case 'A':
					case 'a':
					case KEY_LEFT:
						change = true;
						move = "left";
						break;
					case 'S':
					case 's':
					case KEY_DOWN:
						change = true;
						move = "down";
						break;
					case 'D':
					case 'd':
					case KEY_RIGHT:
						change = true;
						move = "right";
						break;
				}
			}
			
			if (change == true && move == "up" && direction != "down")
			{
				snake.insert(snake.begin(), {snake.front()[0]-1, snake.front()[1]});
				snake.pop_back();
				direction = "up";
				wclear(display);
				box(display, 0, 0);
				refresh();
				wrefresh(display);
			}
			else if (change == true && move == "left" && direction != "right")
			{
				snake.insert(snake.begin(), {snake.front()[0], snake.front()[1]-1});
				snake.pop_back();
				direction = "left";
				wclear(display);
				box(display, 0, 0);
				refresh();
				wrefresh(display);
			}
			else if (change == true && move == "down" && direction != "up")
			{
				snake.insert(snake.begin(), {snake.front()[0]+1, snake.front()[1]});
				snake.pop_back();
				direction = "down";
				wclear(display);
				box(display, 0, 0);
				refresh();
				wrefresh(display);
			}
			else if (change == true && move == "right" && direction != "left")
			{
				snake.insert(snake.begin(), {snake.front()[0], snake.front()[1]+1});
				snake.pop_back();
				direction = "right";
				wclear(display);
				box(display, 0, 0);
				refresh();
				wrefresh(display);
			}
			else
			{
				if(direction == "up"){
					snake.insert(snake.begin(), {snake.front()[0]-1, snake.front()[1]});
					snake.pop_back();
				}
				else if(direction == "down"){
					snake.insert(snake.begin(), {snake.front()[0]+1, snake.front()[1]});
					snake.pop_back();
				}
				else if(direction == "left"){
					snake.insert(snake.begin(), {snake.front()[0], snake.front()[1]-1});
					snake.pop_back();
				}
				else if(direction == "right"){
					snake.insert(snake.begin(), {snake.front()[0], snake.front()[1]+1});
					snake.pop_back();
				}

				wclear(display);
				box(display, 0, 0);
				refresh();
				wrefresh(display);
			}

			change = false;

			
			for(int i=0; i < snake.size()-1; i++){
				if (snake.back()[0] == snake[i][0] && snake.back()[1] == snake[i][1])
					game_over = true;
			}

			if(game_over == true || snake[snake.size()-1][0] >= y_max || snake.front()[1] >= x_max || snake.front()[0] <= y_min || snake.front()[1] <= x_min)
			{
				highscore = check_snakehighscore(score);
				wclear(display);
				box(display, 0, 0);
				refresh();
				mvwprintw(display, 3, 7, "GAME OVER!");
				mvwprintw(display, 4, 3, "(press R to restart");
				mvwprintw(display, 5, 3, "   or Q to quit)");
				wrefresh(display);
				break;
			}

			if(a_x == snake.front()[1] and a_y == snake.front()[0])
			{
				score++;
				if(direction == "up")
					snake.insert(snake.begin(), {snake.front()[0]-1, snake.front()[1]});
				else if(direction == "down")
					snake.insert(snake.begin(), {snake.front()[0]+1, snake.front()[1]});
				else if(direction == "left")
					snake.insert(snake.begin(), {snake.front()[0], snake.front()[1]-1});
				else if(direction == "right")
					snake.insert(snake.begin(), {snake.front()[0], snake.front()[1]+1});

				a_x = (x_min+2) + (rand() % ((x_max-2) - (x_min+2) + 1));
				a_y = (y_min+2) + (rand() % ((y_max-2) - (y_min+2) + 1));
			}


			//print snake
			for(int i=0; i<snake.size(); i++){
				if (snake[i][0] == snake.front()[0] && snake[i][1] == snake.front()[1])
					mvwprintw(display, snake[i][0], snake[i][1], "Q");
				else if (snake[i][0] == snake.back()[0] && snake[i][1] == snake.back()[1])
					mvwprintw(display, snake[i][0], snake[i][1], "o");
				else
					mvwprintw(display, snake[i][0], snake[i][1], "O");
			}

			//apple
			mvwprintw(display, a_y, a_x, "*");

			refresh();
			box(display, 0, 0);	
			box(display1, 0, 0);

			// score
			mvwprintw(display1,3,1,"Score: %d", score);
			mvwprintw(display1,1,1,"Highscore: %d", highscore);
			
			//sleep_for(500ms);
			wrefresh(display);
			wrefresh(display1);
			wclear(display);
			wclear(display1);
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
				int a_x = 20, a_y = 4, score = 0, highscore;
				vector<vector<int>> snake = {{4, 5},{4, 4},{4, 3}};
				string direction = "right", move = "";
				continue;
		}

		{
			outerWhile:
				wclear(display); wclear(display);
				int a_x = 20, a_y = 4, score = 0, highscore;
				vector<vector<int>> snake = {{4, 5},{4, 4},{4, 3}};
				string direction = "right", move = "";
				break;
		}

	} // outer while end

	getch();
	clear();
	endwin();

	return 0;
}