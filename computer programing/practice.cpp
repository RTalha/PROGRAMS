/*
#include <iostream>
using namespace std;
class ab
{
	int a;
public:
	ab()
	{
		a = 0;
	}
	void fun(int a)
	{
		this->a = a;
	}
	void show()
	{
		cout << a << endl;
	}
};
int main()
{
	ab obj;
	obj.fun(6);
	obj.show();
}

*/
/*
#include<iostream>
using namespace std;
class a
{
public:
	int ab;
	int c;
	a()
	{
		ab = 0;
		c = 0;
	}
};
int main()
{
	a b;
	cout << "size of character is" << sizeof b << endl;
}*/


/*
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;
char tmp_map[18][32];

char map[18][32] = {
"+#############################+",
"|                             |",
"|                             |",
"|## ########### ##   #########|",
"|   |                         |",
"| | |### |  |           |     |",
"| |      |  | |###  |   |  |  |",
"| | #####|  | |      ## |     |",
"| |           |###  |      |  |",
"| |##### ###         ##       |",
"|          ######  ####### ###|",
"|                             |",
"|# ### ####      ###   #######|",
"|                             |",
"|                             |",
"|                             |",
"|                             |",
"+#############################+"
};

void ShowMap()
{
for (int i = 0; i < 18; i++) {
printf("%s\n", map[i]);
}
}

void gotoxy(short x, short y)
{
HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
COORD position = { x, y };

SetConsoleCursorPosition(hStdout, position);
}

class entity {
public:
entity(int x, int y){
this->x = x;
this->y = y;
}

void move_x(int p){
if (map[y][x + p] == ' ') x += p;
}

void move_y(int p){
if (map[y + p][x] == ' ') y += p;
}

void move(int p, int q){
x += p;
y += q;
}

int get_x(){ return x; }
int get_y(){ return y; }

void draw(char p){
map[x][y] = p;
gotoxy(x, y); printf("%c", p);
}

private:
int x;
int y;
};

struct walk {
short walk_count;
short x;
short y;
short back;
};

struct target {
short x;
short y;
};

vector<target> walk_queue;

vector<walk> BFSArray;

void AddArray(int x, int y, int wc, int back){
if (tmp_map[y][x] == ' ' || tmp_map[y][x] == '.'){
tmp_map[y][x] = '#';
walk tmp;
tmp.x = x;
tmp.y = y;
tmp.walk_count = wc;
tmp.back = back;
BFSArray.push_back(tmp);
}
}

void FindPath(int sx, int sy, int x, int y){
memcpy(tmp_map, map, sizeof(map));
BFSArray.clear();
walk tmp;
tmp.x = sx;
tmp.y = sy;
tmp.walk_count = 0;
tmp.back = -1;
BFSArray.push_back(tmp);

int i = 0;
while (i < BFSArray.size()){
if (BFSArray[i].x == x && BFSArray[i].y == y){
walk_queue.clear();
target tmp2;
while (BFSArray[i].walk_count != 0){
tmp2.x = BFSArray[i].x;
tmp2.y = BFSArray[i].y;
walk_queue.push_back(tmp2);

i = BFSArray[i].back;
}

break;
}

AddArray(BFSArray[i].x + 1, BFSArray[i].y, BFSArray[i].walk_count + 1, i);
AddArray(BFSArray[i].x - 1, BFSArray[i].y, BFSArray[i].walk_count + 1, i);
AddArray(BFSArray[i].x, BFSArray[i].y + 1, BFSArray[i].walk_count + 1, i);
AddArray(BFSArray[i].x, BFSArray[i].y - 1, BFSArray[i].walk_count + 1, i);

/*
AddArray( BFSArray[i].x+1, BFSArray[i].y+1, BFSArray[i].walk_count+1, i );
AddArray( BFSArray[i].x-1, BFSArray[i].y+1, BFSArray[i].walk_count+1, i );
AddArray( BFSArray[i].x+1, BFSArray[i].y+1, BFSArray[i].walk_count+1, i );
AddArray( BFSArray[i].x+1, BFSArray[i].y-1, BFSArray[i].walk_count+1, i );

AddArray( BFSArray[i].x+1, BFSArray[i].y-1, BFSArray[i].walk_count+1, i );
AddArray( BFSArray[i].x-1, BFSArray[i].y-1, BFSArray[i].walk_count+1, i );
AddArray( BFSArray[i].x-1, BFSArray[i].y+1, BFSArray[i].walk_count+1, i );
AddArray( BFSArray[i].x-1, BFSArray[i].y-1, BFSArray[i].walk_count+1, i );
/*///
/*
i++;
}

BFSArray.clear();
}


int main()
{
bool running = true;
int x = 15; // hero x
int y = 16; // hero y
int old_x;
int old_y;

int ex = 1;
int ey = 1;


int pts = 0;

printf("Instruction:\n1. Arrow Keys to move your hero\n2. Eat the dots produced by the Eater to gain poins\n3. Don't get caught by the Eater\n\n");
printf("H -> Hard\nN -> Normal\nE -> Easy\n\nInput : ");

char diffi;
int speedmod = 3;

cin >> diffi;

if (diffi == 'N'){
speedmod = 2;
}
else if (diffi == 'H'){
speedmod = 1;
}

system("cls");
ShowMap();

gotoxy(x, y); cout << "H";

int frame = 0;

FindPath(ex, ey, x, y);

while (running){
gotoxy(x, y); cout << " ";

old_x = x;
old_y = y;

if (GetAsyncKeyState(VK_UP)){
if (map[y - 1][x] == '.'){ y--; pts++; }
else
if (map[y - 1][x] == ' ') y--;
}
if (GetAsyncKeyState(VK_DOWN)){
if (map[y + 1][x] == '.'){ y++; pts++; }
else
if (map[y + 1][x] == ' ') y++;
}
if (GetAsyncKeyState(VK_LEFT)){
if (map[y][x - 1] == '.'){ x--; pts++; }
else
if (map[y][x - 1] == ' ') x--;
}
if (GetAsyncKeyState(VK_RIGHT)){
if (map[y][x + 1] == '.'){ x++; pts++; }
else
if (map[y][x + 1] == ' ') x++;
}

if (old_x != x || old_y != y){
FindPath(ex, ey, x, y);
}

gotoxy(x, y); cout << "H";

map[ey][ex] = '.';
gotoxy(ex, ey); cout << ".";

if (frame%speedmod == 0 && walk_queue.size() != 0){
ex = walk_queue.back().x;
ey = walk_queue.back().y;
walk_queue.pop_back();
}

gotoxy(ex, ey); cout << "E";

if (ex == x && ey == y){
break;
}


gotoxy(32, 18);
gotoxy(32, 1); cout << pts;
Sleep(100);
frame++;
}

system("cls");
printf("You Lose and your score is : %i", pts);
cin.get();
cin.get();
cin.get();
cin.get();
cin.get();
cin.get();
cin.get();
cin.get();

return 0;
}*/

/*
#include <iostream>
#include<Windows.h>

int main()
{
gotoxy(4, 5);
system("Color 2");
std::cout << "\t\t\t    Hello World" << std::endl;
Sleep(1000);
system("cls");
system("Color 5");

std::cout << "\t\t\t    Hello World" << std::endl;
Sleep(1000);
system("cls");
system("Color 3C");
std::cout << "\t\t\t    Hello World" << std::endl;
Sleep(1000);
system("cls");
system("Color 4D");
std::cout << "\t\t\t    Hello World" << std::endl;
Sleep(1000);
system("cls");
system("Color 5E");
std::cout << "\t\t\t    Hello World" << std::endl;
Sleep(1000);
system("cls");
system("Color 6F");
std::cout << "\t\t\t    Hello World" << std::endl;
Sleep(1000);
system("cls");
system("Color A1");
std::cout << "\t\t\t    Hello World" << std::endl;
Sleep(1000);
system("cls");
system("Color B2");
std::cout << "\t\t\t    Hello World" << std::endl;
Sleep(1000);
system("cls");
system("Color C3");
std::cout << "\t\t\t    Hello World" << std::endl;
Sleep(1000);
system("cls");
system("Color D4");
std::cout << "\t\t\t    Hello World" << std::endl;
Sleep(1000);
system("cls");
system("Color E5");
std::cout << "\t\t\t    Hello World" << std::endl;
Sleep(1000);
system("cls");
system("Color F6");
std::cout << "\t\t\t    Hello World" << std::endl;


return 0;
}
*/
/*
#include <iostream>
#include <windows.h>

int main()
{
const WORD colors[] =
{
0x1A, 0x2B, 0x3C, 0x4D, 0x5E, 0x6F,
0xA1, 0xB2, 0xC3, 0xD4, 0xE5, 0xF6
};

HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
WORD   index = 0;

// Remember how things were when we started
CONSOLE_SCREEN_BUFFER_INFO csbi;
GetConsoleScreenBufferInfo(hstdout, &csbi);

// Tell the user how to stop
SetConsoleTextAttribute(hstdout, 0xEC);
std::cout << "Press any key to quit.\n";

// Draw pretty colors until the user presses any key
while (WaitForSingleObject(hstdin, 100) == WAIT_TIMEOUT)
{
SetConsoleTextAttribute(hstdout, colors[index]);
std::cout << "\t\t\t\t Hello World \t\t\t\t" << std::endl;
if (++index > sizeof(colors) / sizeof(colors[0]))
index = 0;
}
FlushConsoleInputBuffer(hstdin);

// Keep users happy
SetConsoleTextAttribute(hstdout, csbi.wAttributes);
return 0;
}
*/

/*
#include<SDL.h>
#include<SDL_ttf.h>
#include<SDL_image.h>

int FPS = 50;    // Assign a FPS
int NextTick, interval;

// Initialize FPS_Fn( )
void FPS_Initial(void) {
NextTick = 0;
interval = 1 * 1000 / FPS;
return;
}

// Frame Per Second Function  , put this in a loop
void FPS_Fn(void) {
if (NextTick > SDL_GetTicks()) SDL_Delay(NextTick - SDL_GetTicks());
NextTick = SDL_GetTicks() + interval;
return;
}

// This function load a image file to a surface
// Set bCKey with colorkey (R,G,B) to clear a color on the image
// Set alpha value for transparency 0(No transparent) ~ 255(Ivisible)
inline SDL_Surface *ImgLoader(char *file, bool bCKey, int r, int g, int b, int alpha)
{
SDL_Surface *pic;
pic = IMG_Load(file); // From SDL_image.h , load the image to pic
// Log error message into stderr.txt if happened
if (pic == NULL) fprintf(stderr, "Missing image %s : %s\n", file, IMG_GetError());
if (bCKey) {
// Sets the color key (transparent pixel) in a blittable surface and RLE acceleration.
SDL_SetColorKey(pic, SDL_SRCCOLORKEY | SDL_RLEACCEL, SDL_MapRGB(pic->format, r, g, b));
}
if (alpha) SDL_SetAlpha(pic, SDL_SRCALPHA | SDL_RLEACCEL, 255 - alpha);
pic = SDL_DisplayFormat(pic);
return (pic);
}

// Load a normal picture into a surface
inline SDL_Surface *ImgLoader(char *file)
{
return ImgLoader(file, 1, 0, 0, 0, 0);
}
// Load a pic & set the transparent color to (255,255,255) , no alpha
inline SDL_Surface *ImgLoader(char *file, bool bCKey)
{
return ImgLoader(file, 1, 255, 255, 255, 0);
}


int main(int argc, char *argv[])
{
TTF_Font *font; // Declare a SDL_ttf font : font
TTF_Init(); // Initilize SDL_ttf
font = TTF_OpenFont("./font/arial.ttf", 24); // Open a font & set the font size
SDL_Surface *imgTxt; // Store image of the text for blit
SDL_Rect txtRect; // Store (x,y) of text for blit
SDL_Color fColor; // Font color (R,G,B)

txtRect.x = 10;
txtRect.y = 250;
fColor.r = fColor.g = fColor.b = 245; // Set font to white color
imgTxt = TTF_RenderText_Solid(font, "SDL_ttf Test : Load & Display Font", fColor);

SDL_Event event;
bool bRun = 1;
int pidx = 0, aTick = 0;
SDL_Surface *screen;
enum walk {
justice1, justice2, justice3, justice4
, justice5, justice6, justice_No
};
SDL_Surface *anim[justice_No];
SDL_Rect animRect;
animRect.x = 160;
animRect.y = 160;

atexit(SDL_Quit);

if (SDL_Init(SDL_INIT_VIDEO) < 0) exit(1);

SDL_WM_SetCaption("SDL Window", NULL);

screen = SDL_SetVideoMode(400, 300, 32, SDL_DOUBLEBUF | SDL_HWSURFACE | SDL_ANYFORMAT);

anim[0] = ImgLoader("./anim/justice1.gif", 1, 255, 255, 255, 0);
anim[1] = ImgLoader("./anim/justice2.gif", 1, 255, 255, 255, 0);
anim[2] = ImgLoader("./anim/justice3.gif", 1, 255, 255, 255, 0);
anim[3] = ImgLoader("./anim/justice4.gif", 1);
anim[4] = ImgLoader("./anim/justice5.gif", 1);
anim[5] = ImgLoader("./anim/justice6.gif", 1);

FPS_Initial();

while (bRun) {
aTick++;
SDL_FillRect(screen, NULL, 0x221122);
SDL_BlitSurface(anim[pidx], NULL, screen, &animRect);
SDL_BlitSurface(imgTxt, NULL, screen, &txtRect);
SDL_Flip(screen);
FPS_Fn();
if (aTick % 10 == 0) pidx++;
if (pidx >= justice_No) pidx = 0;
while (SDL_PollEvent(&event)){
switch (event.type){
case SDL_KEYDOWN:
switch (event.key.keysym.sym){
case SDLK_UP:
animRect.y = animRect.y - 10;
break;
case SDLK_DOWN:
animRect.y = animRect.y + 10;
break;
case SDLK_LEFT:
animRect.x = animRect.x - 10;
break;
case SDLK_RIGHT:
animRect.x = animRect.x + 10;
break;
case SDLK_ESCAPE:
bRun = 0;
break;
default:
break;
} // switch( event.key.keysym.sym ){ END
break; // case SDL_KEYDOWN: END
case SDL_QUIT:
bRun = 0;
break;
default:
break;
} // switch( event.type ){ END
} // while( SDLK_PollEvent( &event ) ){ END
}; // while(bRun) { END


return 0;
}
*/

/*



#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
	system("color 9F");
	//5E,4C,9B
	cout << " %%    %%  %%%%%%%%    %%%%%       %%       %%%%%%%%%  %%%%%%      %%%%%" << endl;
	cout << " %%    %%  %%    %%  %%   %%      %% %%         %%     %%        %%   %%"  << endl;
	cout << " %%    %%  %%%%%%%%  %%   %%     %%   %%        %%     %%%%%%    %%   %%"<<endl;
	cout << " %%    %%  %%        %%   %%    %%  %% %%       %%     %%        %%   %%"<< endl;
	cout << " %%%%%%%%  %%          %%%%%   %%       %%      %%     %%%%%%      %%%%%"<<endl;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int *ptr;
//	cout << *ptr << endl;
	int x = 8;
	int **ptr1;
	ptr = &x;
	cout << ptr << endl;
	ptr1 = &ptr;
	cout << ptr1 << endl;

}
*/

/*
dynamic pointer example

#include<iostream>
using namespace std;
int main()
{
	int rows, column;
	cin >> rows >> column;
	//int *ptr = new int[rows];
	int **ptr1=new int*[rows];
	//ptr1 = &ptr;
	for (int i = 0; i < rows; i++)
		ptr1[i] = new int[column];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cin >> ptr1[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout<< ptr1[i][j];
		}
	}
}
*/

/*
dynamic pointer
#include<iostream>
using namespace std;
int main()
{
	int rows, colums, additional_colums = 0;
	cout << "enter rows" << endl;
	cin >> rows;
	int **ptr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		cout << "enter colums" << endl;
		cin >> colums;
		ptr[i] = new int[colums];
		additional_colums += colums;
	}
	int **ptr1 = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		ptr1[i] = new int[additional_colums];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < additional_colums; j++)
		{
			cin>>ptr1[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < additional_colums; j++)
		{
			cout<< ptr1[i][j];
		}
		cout << endl;
	}
}
*/



/*
static examole
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class foo
{
private:
	static int count; //note: “declaration” only!
	int t;
public:
	foo() //increments count when object created
	{
		t = 8;
		count = 0;
	}
	static int getcount() //returns count
	{
		count++;
		return count;
	}
};
//--------------------------------------------------------------
int foo::count = 0; //*definition* of count
////////////////////////////////////////////////////////////////
int main()
{
	foo f1, f2, f3; //create three objects
	cout << "count is " << f1.getcount() << endl; //each object
	cout << "count is " << f2.getcount() << endl; //sees the
	cout << "count is " << f3.getcount() << endl; //same value
	return 0;
}
*/

/*
//ambiguity check with different method
#include<iostream>
using namespace std;
class a
{
public:
	void show()
	{
		cout << "rana" << endl;
	}
};
class b
{
public:
	void show()
	{
		cout << "talha" << endl;
	}
};
class c :public a, public b
{
public:
	void show()
	{
		cout << "khan" << endl;
	}
};
int main()
{
	c n;
	n.a::show();    //avoid ambiguity
	n.b::show();	//again avoid
	n.show();
}
*/

/*
pointer to pointer
#include<iostream>
using namespace std;
int main()
{
	int **ptr1;
	int *ptr;
	int a = 8;
	ptr = &a;
	ptr1 = &ptr;
	cout << **ptr1 << endl;
}
*/

/*
//addressing with pointer
#include<iostream>
using namespace std;
void output(int* ptr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << *ptr++ << endl;
	}
}
int main()
{
	int arrayy[5] = { 1, 2, 3, 4, 5 };
	output(arrayy);
}
*/
/*
#include<iostream>
using namespace std;
void arr(int arr[][2])
{
	for (int i = 0; i < 2; i++)
	{

		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 2; i++)
	{

		for (int j = 0; j < 2; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
}
int main()
{
	int **ptr;
	int a = 2;
	ptr = new int*[a];
	for (int i = 0; i < 2; i++)
	{
		ptr[i] = new int[a];
	}
	arr(ptr);
}

*/
/*
#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr = new int[2];
	for (int i = 0; i < 2; i++)
	{
		cin >> ptr[i];
	}
	for (int i = 0; i < 2; i++)
	{
		cout<< ptr[i];
	}


}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr = new int[3][4];
}
*/


#include<iostream>
using namespace std;
int main()
{
	cout << "hello world" << endl;
}