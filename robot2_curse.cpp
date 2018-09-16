/*
__________  .__           .__                           ___________ .__                     .__             .__                   
\______   \ |__|   ______ |  |__     ____    __ __      \__    ___/ |__|   _____   _____    |  |     ______ |__|   ____   _____   
 |    |  _/ |  |  /  ___/ |  |  \   /    \  |  |  \       |    |    |  |  /     \  \__  \   |  |    /  ___/ |  |  /    \  \__  \  
 |    |   \ |  |  \___ \  |   Y  \ |   |  \ |  |  /       |    |    |  | |  Y Y  \  / __ \_ |  |__  \___ \  |  | |   |  \  / __ \_
 |______  / |__| /____  > |___|  / |___|  / |____/        |____|    |__| |__|_|  / (____  / |____/ /____  > |__| |___|  / (____  /
        \/            \/       \/       \/                                     \/       \/              \/            \/       \/ 

  
  tima9387@vandals.uidaho.edu
  >> Bishnu Timalsina
  >> CS120 SECTION 06
  >> April 05/2018                                                                                                                             
*/
#include <iostream>
#include <curses.h>
#include<cstdlib>
#include<string>
#include<sstream>

using namespace std;

const int NUMCOLS = 70;
const int NUMROWS = 20;

void print();
void setup();
void move_robot(int,char);
bool collide(int,int,int&);

class Robot {
        int x,y,id;
        

        public:
                void set_x(int i){
                        x=i;
                }

                int get_x(){
                        return x;
                }
                
                              

                void set_y(int i) {
                        y = i;
                }
                int get_y() {
                        return y;
                }
                void set_id(int i) {
                id = i;
                }

                int get_id() {
                return id;
                }
};

Robot robot[4];
int main()
{
        int id;
        char c,y;
        WINDOW *wnd;

        wnd = initscr();
        clear();
        refresh();
        setup();

        while (1) {
        cin >> c;
        if (c == 'q')
            break;
        }
        endwin();

        do{
        cout<<"Enter the name of the robot you want to move:     ";
        cin>>id;

                         if(id!=0 && id!=1 && id!=2 && id!=3){
                                cout<<"Invalid name. Try again\n";
                                return 0;
                        }

        
        
        cout<<"Enter the directionection: (E, W, N, S)";
        cin>>y;
        move_robot(id,y);
        }
        
        while(1);
}

void setup()
{
        int i;
        for (i=0; i<NUMCOLS; i++) {
                move(0, i);
                delch();
                insch('-');
                move(NUMROWS-1, i);
                delch();
                insch('-');
        }

        for (i=0; i<NUMROWS; i++) {
                move(i, 0);
                delch();
                insch('|');
                move(i, NUMCOLS-1);
                delch();
                insch('|');
        }

                move(1,1);
                delch();
                robot[0].set_id(0);
                robot[0].set_x(1);
                robot[0].set_y(1);
                insch('0');

                move(1,NUMCOLS-2);
                delch();
                robot[1].set_id(1);
                robot[1].set_x(NUMCOLS-2);
                robot[1].set_y(1);
                insch('1');

                move(NUMROWS-2,NUMCOLS-2);
                delch();
                robot[2].set_id(2);
                robot[2].set_x(NUMCOLS-2);
                robot[2].set_y(NUMROWS-2);
                insch('2');

                move(NUMROWS-2,1);
                delch();
                robot[3].set_id(3);
                robot[3].set_x(1);
                robot[3].set_y(NUMROWS-2);
                insch('3');

                refresh();
}

void move_robot(int r,char direction){
        string error = "";
        int mem = -1;
        ostringstream foo,bar;
        int val;

        switch(direction){
                case 'W':
                case 'w':
                        val=robot[r].get_x()-1;
                        if(val<=0 || val>=NUMCOLS-1){
                                error = "Robot hits west wall\n";
                        }
                        else{
                                if(!collide(val,robot[r].get_y(),mem)){
                                        robot[r].set_x(val);
                                }
                        else{
                                        foo << r;
                                        bar << mem;
                                        error = "Robot ";
                                        error += foo.str();;
                                        error += " collides with ";
                                        error += bar.str();;
                                        error += "\n";

                                }
                        }
                        break;
                case 'N':
                case 'n':
                        val = robot[r].get_y()-1;
                        if(!(val>0 && val<NUMCOLS-1)){
                                error = "Robot hits north wall\n";
                        }
                        else{
                                if(!collide(robot[r].get_x(),val,mem)){
                                        robot[r].set_y(val);
                                }
                        else{
                                        foo << r;
                                        bar << mem;
                                        error = "Robot ";
                                        error += foo.str();
                                        error += " collides with ";
                                        error += bar.str();
                                        error += "\n";
                                }
                        }
                        break;

                case 'S':
                case 's':
                        val=robot[r].get_y()+1;
                        if(val<=0 || val>=NUMROWS-1){
                                error = "Robot hits south wall\n";
                        }
                        else{
                                if(!collide(robot[r].get_x(),val,mem)){
                                        robot[r].set_y(val);
                                }
                        else{
                                        foo << r;
                                        bar << mem;
                                        error = "Robot ";
                                        error += foo.str();;
                                        error += " collides with ";
                                        error += bar.str();;
                                        error += "\n";
                                }
                        }
                        break;

                case 'E':
                case 'e':
                        val=robot[r].get_x()+1;
                        if(val<=0 || val>=NUMROWS-1){
                                error = "Robot hit east wall\n";
                        }
                        else{
                                if(!collide(val,robot[r].get_y(),mem)){
                                        robot[r].set_x(val);
                                }
                        else{
                                        foo << r;
                                        bar << mem;
                                        error = "Robot ";
                                        error += foo.str();
                                        error += " collides with ";
                                        error += bar.str();
                                        error += "\n";

                                }
                        }
                        break;

                

                default:
                        cout<<"Invalid direction. Terminating program\n";
                        exit(1);

        }
        if(error.empty()) {
                print();
        } else {
                cout << error << endl;
        }
}

void print(){

        int i;

        for (i=0; i<NUMCOLS; i++) {
                move(0, i);
                delch();
                insch('-');
                move(NUMROWS-1, i);
                delch();
                insch('-');
        }

        for (i=0; i<NUMROWS; i++) {
                move(i, 0);
                delch();
                insch('|');
                move(i, NUMCOLS-1);
                delch();
                insch('|');
        }

        for(int i=1; i<NUMCOLS-1; i++){
                for(int j=1; j<NUMROWS-1; j++){
                        move(j,i);
                        delch();
                        insch(' ');
                }
        }

                move(robot[0].get_y(),robot[0].get_x());
                delch();
                insch('0');

                move(robot[1].get_y(),robot[1].get_x());
                delch();
                insch('1');

                move(robot[2].get_y(),robot[2].get_x());
                delch();
                insch('2');

                move(robot[3].get_y(),robot[3].get_x());
                delch();
                insch('3');

                refresh();

                char c;
                while (1) {
                        cin >> c;
                        if (c == 'q')
                                break;
                }
                endwin();

}

bool collide(int x, int y, int &q){
        for(int i=0; i<4; i++){
                if(x==robot[i].get_x() && y==robot[i].get_y()){
                        q = i;
                        return true;
                }
        }
        return false;
}
