//by Vokinsark
#include <iostream>
#include <time.h>
#include <conio.h>
#include <clocale>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

#pragma comment(lib, "Winmm.lib")

#define GAME_MENU 0
#define GAME_SING 1
#define GAME_MULT 2
#define GAME_EXIT 3
#define STOP_SOUND 9
#define N 10


#define Bit1 0x1
#define Bit2 0x2
#define Bit3 0x4
#define Bit4 0x8
#define Bit5 0x10
#define Bit6 0x20
#define Bit7 0x40
#define Bit8 0x80
#define Bit9 0x100
#define Bit10 0x200
#define Bit11 0x400
#define Bit12 0x800
#define Bit13 0x1000
#define Bit14 0x2000
#define Bit15 0x4000
#define Bit16 0x8000
#define Bit17 0x10000
#define Bit18 0x20000
#define Bit19 0x40000
#define Bit20 0x80000
#define Bit21 0x100000
#define Bit22 0x200000
#define Bit23 0x400000
#define Bit24 0x800000
#define Bit25 0x1000000
#define Bit26 0x2000000
#define Bit27 0x4000000
#define Bit28 0x8000000
#define Bit29 0x10000000
#define Bit30 0x20000000
#define Bit31 0x40000000
#define Bit32 0x80000000

void run(int flag)
{
	if(flag&Bit1) printf("Bit1 is 1\n");
	if(flag&Bit2) printf("Bit2 is 1\n");
	if(flag&Bit3) printf("Bit3 is 1\n");
	if(flag&Bit4) printf("Bit4 is 1\n");
	if(flag&Bit5) printf("Bit5 is 1\n");
	if(flag&Bit6) printf("Bit6 is 1\n");
	if(flag&Bit7) printf("Bit7 is 1\n");
	if(flag&Bit8) printf("Bit8 is 1\n");
	if(flag&Bit9) printf("Bit9 is 1\n");
	if(flag&Bit10) printf("Bit10 is 1\n");
	if(flag&Bit11) printf("Bit11 is 1\n");
	if(flag&Bit12) printf("Bit12 is 1\n");
	if(flag&Bit13) printf("Bit13 is 1\n");
	if(flag&Bit14) printf("Bit14 is 1\n");
	if(flag&Bit15) printf("Bit15 is 1\n");
	if(flag&Bit16) printf("Bit16 is 1\n");
	if(flag&Bit17) printf("Bit17 is 1\n");
	if(flag&Bit18) printf("Bit18 is 1\n");
	if(flag&Bit19) printf("Bit19 is 1\n");
	if(flag&Bit20) printf("Bit20 is 1\n");
	if(flag&Bit21) printf("Bit21 is 1\n");
	if(flag&Bit22) printf("Bit22 is 1\n");
	if(flag&Bit23) printf("Bit23 is 1\n");
	if(flag&Bit24) printf("Bit24 is 1\n");
	if(flag&Bit25) printf("Bit25 is 1\n");
	if(flag&Bit26) printf("Bit26 is 1\n");
	if(flag&Bit27) printf("Bit27 is 1\n");
	if(flag&Bit28) printf("Bit28 is 1\n");
	if(flag&Bit29) printf("Bit29 is 1\n");
	if(flag&Bit30) printf("Bit30 is 1\n");
	if(flag&Bit31) printf("Bit31 is 1\n");
	if(flag&Bit32) printf("Bit32 is 1\n");
}


struct coords
{
	int x;
	int y;
};

class Float4x
{
private:
	coords coors[4];
	int lifeParts;
	bool rotate;
	bool life;
public:
	Float4x(void) {rotate=false; lifeParts=4; life=true; for(int i=0; i<4; i++) {coors[i].x=0; coors[i].y=0;}}
	void zeroConfig(void) {rotate=false; lifeParts=4; life=true; for(int i=0; i<4; i++) {coors[i].x=0; coors[i].y=0;}}
	bool getLife(void) {return life;}
	void setLife(bool z) {life=z;}
	bool getRotate(void) {return rotate;}
	void setRotate(bool z) {rotate=z;}
	int getLifeParts(void) {return lifeParts;}
	void setLifeParts(int part) {lifeParts=part; if(lifeParts==0) setLife(false);}
	int getCorX(void) {return coors[0].x;}
	int getCorY(void) {return coors[0].y;}
	void setCoors(int _x, int _y) {if(rotate) {for(int i=0; i<4; i++) {coors[i].x=_x+i; coors[i].y=_y;} } else {for(int i=0; i<4; i++) {coors[i].x=_x; coors[i].y=_y+i;} } }
};

class Float3x
{
private:
	coords coors[3];
	int lifeParts;
	bool rotate;
	bool life;
public:
	Float3x(void) {rotate=false; lifeParts=3; life=true; for(int i=0; i<3; i++) {coors[i].x=0; coors[i].y=0;}}
	void zeroConfig(void) {rotate=false; lifeParts=3; life=true; for(int i=0; i<3; i++) {coors[i].x=0; coors[i].y=0;}}
	bool getLife(void) {return life;}
	void setLife(bool z) {life=z;}
	bool getRotate(void) {return rotate;}
	void setRotate(bool z) {rotate=z;}
	int getLifeParts(void) {return lifeParts;}
	void setLifeParts(int part) {lifeParts=part; if(lifeParts==0) setLife(false);}
	int getCorX(void) {return coors[0].x;}
	int getCorY(void) {return coors[0].y;}
	void setCoors(int _x, int _y) {if(rotate) {for(int i=0; i<3; i++) {coors[i].x=_x+i; coors[i].y=_y;} } else {for(int i=0; i<3; i++) {coors[i].x=_x; coors[i].y=_y+i;} } }
};

class Float2x
{
private:
	coords coors[2];
	int lifeParts;
	bool rotate;
	bool life;
public:
	Float2x(void) {rotate=false; lifeParts=2; life=true; for(int i=0; i<2; i++) {coors[i].x=0; coors[i].y=0;}}
	void zeroConfig(void) {rotate=false; lifeParts=2; life=true; for(int i=0; i<2; i++) {coors[i].x=0; coors[i].y=0;}}
	bool getLife(void) {return life;}
	void setLife(bool z) {life=z;}
	bool getRotate(void) {return rotate;}
	void setRotate(bool z) {rotate=z;}
	int getLifeParts(void) {return lifeParts;}
	void setLifeParts(int part) {lifeParts=part; if(lifeParts==0) setLife(false);}
	int getCorX(void) {return coors[0].x;}
	int getCorY(void) {return coors[0].y;}
	void setCoors(int _x, int _y) {if(rotate) {for(int i=0; i<2; i++) {coors[i].x=_x+i; coors[i].y=_y;} } else {for(int i=0; i<2; i++) {coors[i].x=_x; coors[i].y=_y+i;} } }
};

class Float1x
{
private:
	coords coors;
	int lifeParts;
	bool life;
public:
	Float1x(void) {lifeParts=1; life=true;  coors.x=0; coors.y=0;}
	void zeroConfig(void) {lifeParts=1; life=true;  coors.x=0; coors.y=0;}
	bool getLife(void) {return life;}
	void setLife(bool z) {life=z;}
	int getLifeParts(void) {return lifeParts;}
	void setLifeParts(int part) {lifeParts=part; if(lifeParts==0) setLife(false);}
	int getCorX(void) {return coors.x;}
	int getCorY(void) {return coors.y;}
	void setCoors(int posX, int posY) {coors.x=posX; coors.y=posY;}
};

Float4x ships4xFP;
Float3x ships3xFP[2];
Float2x ships2xFP[3];
Float1x ships1xFP[4];

Float4x ships4xSP;
Float3x ships3xSP[2];
Float2x ships2xSP[3];
Float1x ships1xSP[4];

struct foundedShips
{
	int ships4x;
	int ships3x;
	int ships2x;
	int ships1x;
};

foundedShips foundedShipsFP={0, 0, 0, 0}, foundedShipsSP={0, 0, 0, 0};
const char * const developerStrings[13]={/* 0*/ "   _________________________________________________________________________\n",
	                                     /* 1*/ "   _|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__\n",
										 /* 2*/ "   |__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|\n",
										 /* 3*/ "   _|__|_| _   _   ___   _   __ _  _   _   ____    _    ____   _   __|_|__|_\n",
										 /* 4*/ "   |__|__|| | | | / _ \\ | | / /| || | | | / ___|  / \\  |  _ \\ | | / /|__|__|\n",
										 /* 5*/ "   _|__|_|| | | || / \\ || |/ / | || \\ | || /     / _ \\ | |_| || |/ / |_|__|_\n",
										 /* 6*/ "   |__|__|| | | || | | || ' /  | ||  \\| || `--. | |_| ||   _/ | ' /  |__|__|\n",
										 /* 7*/ "   _|__|_|| \\ / || | | || . \\  | || \\ \\ | `--. ||  _  || . \\  | . \\  |_|__|_\n",
										 /* 8*/ "   |__|__| \\ ' / | \\_/ || |\\ \\ | || |\\  | ___/ || | | || |\\ \\ | |\\ \\ |__|__|\n",
										 /* 9*/ "   _|__|_|  \\_/   \\___/ |_| \\_\\|_||_| |_||____/ |_| |_||_| \\_\\|_| \\_\\|_|__|_\n",
										 /*10*/ "   |__|__|___________________________________________________________|__|__|\n",
										 /*11*/ "   _|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__\n",
										 /*12*/ "   |__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|\n"};

const char * const stringWords[26][7]={/*A*/ "   _   ", "  / \\  ", " / _ \\ ", "| |_| |", "|  _  |", "| | | |", "|_| |_|", 
									   /*B*/ " ____  ", "|  _ \\ ", "| | ) |", "| \'-\'/ ", "| .-.\\ ", "| |_) |", "|____/ ", 
									   /*C*/ "   ___ ", "  / __|", " / /   ", "| |    ", "| |    ", " \\ \\__ ", "  \\___|", 
									   /*D*/ " ____  ", "|  _ \\ ", "| | \\ \\", "| | | |", "| | | |", "| |_/ /", "|____/ ", 
									   /*E*/ " _____ ", "|  ___|", "| |    ", "| \'---.", "| .---\'", "| |___ ", "|_____|", 
									   /*F*/ " _____ ", "|  ___|", "| |    ", "| \'--. ", "| .--\' ", "| |    ", "|_|    ", 
									   /*G*/ "  ___  ", " / _ \\ ", "| / \\_|", "| | __ ", "| ||_ \\", "| |_/ /", " \\___/ ", 
									   /*H*/ " _   _ ", "| | | |", "| | | |", "| \'-\' |", "| .-. |", "| | | |", "|_| |_|", 
									   /*I*/ "   _   ", "  | |  ", "  | |  ", "  | |  ", "  | |  ", "  | |  ", "  |_|  ", 
									   /*J*/ " _____ ", "|_   _|", "  | |  ", "  | |  ", "  | |  ", " _/ |  ", "/__/   ", 
									   /*K*/ " _   _ ", "| | / /", "| |/ / ", "| \' /  ", "| . \\  ", "| |\\ \\ ", "|_| \\_\\", 
									   /*L*/ " _     ", "| |    ", "| |    ", "| |    ", "| |    ", "| |___ ", "|_____|", 
									   /*M*/ ".     .", "|\\   /|", "| \\_/ |", "|     |", "| \\_/ |", "| | | |", "|_| |_|", 
									   /*N*/ " _   _ ", "| | | |", "| \\ | |", "|  \\| |", "| \\ \\ |", "| |\\  |", "|_| |_|", 
									   /*O*/ "  ___  ", " / _ \\ ", "| / \\ |", "| | | |", "| | | |", "| \\_/ |", " \\___/ ", 
									   /*P*/ " ____  ", "|  _ \\ ", "| |_| |", "|  __/ ", "| |    ", "| |    ", "|_|    ", 
									   /*Q*/ "  ___  ", " / _ \\ ", "| / \\ |", "| | | |", "| |_| |", "|  \\ \\|", " \\__\\_\\", 
									   /*R*/ " ____  ", "|  _ \\ ", "| |_| |", "|   _/ ", "| . \\  ", "| |\\ \\ ", "|_| \\_\\", 
									   /*S*/ "  ____ ", " / ___|", "| /    ", "| `--. ", " `--. |", " ___/ |", "|____/ ", 
									   /*T*/ " _____ ", "|_   _|", "  | |  ", "  | |  ", "  | |  ", "  | |  ", "  |_|  ", 
									   /*U*/ " _   _ ", "| | | |", "| | | |", "| | | |", "| | | |", "\\ \\_/ /", " \\___/ ", 
									   /*V*/ " _   _ ", "| | | |", "| | | |", "| | | |", "\\ \\ / /", " \\ \' / ", "  \\_/  ", 
									   /*W*/ " _   _ ", "| | | |", "| |_| |", "| / \\ |", "|  _  |", "| / \\ |", "|/   \\|", 
									   /*X*/ "__   __", "\\ \\ / /", " \\ . / ", "  \\ /  ", "  / \\  ", " / \' \\ ", "/_/ \\_\\", 
									   /*Y*/ " _   _ ", "| | | |", "\\ \\_/ |", " \\__  /", "   / / ", " _/ /  ", "/__/   ", 
									   /*Z*/ "______ ", "\\____ |", "    / /", "   / / ", "  / /  ", " / /___", "|_____/"};
const unsigned char borderChar=183;
const char * const charsForName[30]={"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "<-", "Ок", "", ""};
const char * const soundSources[9]={"Sounds\\LogoSND.wav", "Sounds\\LogoEnterSND.wav", "Sounds\\ErrorSND.wav", "Sounds\\MissSND.wav", "Sounds\\KilledSND.wav", "Sounds\\DamagedSND.wav", "Sounds\\MenuSND.wav", "Sounds\\EndingSND.wav", "Sounds\\DeveloperLogoSND.wav"};
const char * const messageStrings[3]={"Мимо...", "Убил!", "Попал."};
const char * const menuStrings[6]={"Одиночная игра", "2 игрока", "Изменить профиль", "Настройки", "Статистика", "Выход"};
const char * const changeProfileStrings[4]={"Создать новый профиль", "Выбрать профиль", "Удалить существующий профиль", "Назад"};
const char * const dificultyStrings[2]={"Очень легкая", "Нормальная"};
const LPCWSTR title[4]={L"Морской бой 5: Почувствуй себя адмиралом!", L"Морской бой 5: Все что нужно начинающему пирату!", L"Морской бой 5: Проверь свою удачу!", L"Морской бой 5: Обстреляй врага по полной!"};
const char fieldChars[18][10]={/* 0*/ 'А', 'Б', 'В', 'Г', 'Д', 'Е', 'Ж', 'З', 'И', 'К', 
	                           /* 1*/ 'А', 'Г', 'Р', 'О', 'Т', 'Е', 'Х', 'Н', 'И', 'К', 
							   /* 2*/ 'Б', 'Л', 'А', 'Ж', 'Е', 'Н', 'С', 'Т', 'В', 'О', 
							   /* 3*/ 'В', 'З', 'А', 'И', 'М', 'Н', 'О', 'С', 'Т', 'Ь', 
							   /* 4*/ 'Г', 'И', 'П', 'О', 'Т', 'Е', 'Н', 'У', 'З', 'А', 
							   /* 5*/ 'Д', 'Е', 'М', 'О', 'К', 'Р', 'А', 'Т', 'И', 'Я', 
							   /* 6*/ 'М', 'У', 'Р', 'А', 'В', 'Е', 'Й', 'Н', 'И', 'К', 
							   /* 7*/ 'Н', 'А', 'Р', 'У', 'Ш', 'И', 'Т', 'Е', 'Л', 'Ь', 
							   /* 8*/ 'Н', 'О', 'С', 'Т', 'А', 'Л', 'Ь', 'Г', 'И', 'Я', 
							   /* 9*/ 'П', 'О', 'Ж', 'И', 'Р', 'А', 'Т', 'Е', 'Л', 'Ь', 
							   /*10*/ 'П', 'Р', 'А', 'В', 'О', 'С', 'У', 'Д', 'И', 'Е', 
							   /*11*/ 'Р', 'Е', 'С', 'П', 'У', 'Б', 'Л', 'И', 'К', 'А', 
							   /*12*/ 'С', 'Н', 'Е', 'Г', 'У', 'Р', 'О', 'Ч', 'К', 'А', 
							   /*13*/ 'С', 'П', 'Р', 'А', 'В', 'О', 'Ч', 'Н', 'И', 'К', 
							   /*14*/ 'Т', 'Р', 'У', 'Д', 'О', 'Л', 'Ю', 'Б', 'И', 'Е', 
							   /*15*/ 'Ц', 'Е', 'Н', 'Т', 'Р', 'И', 'Ф', 'У', 'Г', 'А', 
							   /*16*/ 'Э', 'К', 'С', 'П', 'Е', 'Р', 'Т', 'И', 'З', 'А', 
	                           /*17*/ 'Э', 'С', 'К', 'А', 'Д', 'Р', 'И', 'Л', 'Ь', 'Я'};
FILE *profilesP;
int stage = GAME_MENU, currentProfile=-1, profilesAmount, currentMarkField=11, playedGames[5], wins[5], numberOfDeletedProfile, gameDificulty=1;
char *fieldFP, *fieldSP, *vFieldFP, *vFieldSP, *virtualField, nameFP[9]={0}, nameSP[9]={0}, profiles[5][9];
int scoreFP, scoreSP, settedShips4x, settedShips3x, settedShips2x, settedShips1x, hunterMark=0; 
bool newProfileB=false, deleteProfileB=false, hunterMode=false;
time_t start, finish;
coords curPosFP={0,0}, curPosSP={0,0};
 
void init(void)
{
	fieldFP=new char[100];
	fieldSP=new char[100];
	vFieldFP=new char[100];
	vFieldSP=new char[100];
	virtualField=new char[100];

	for(int i=0; i<100; i++)
	{
		*(vFieldFP+i)='?';
		*(fieldFP+i)=' ';
		*(vFieldSP+i)='?';
		*(fieldSP+i)=' ';
		*(virtualField+i)=0;
	}
	scoreFP=0;
	scoreSP=0;
	settedShips4x=0;
	settedShips3x=0;
	settedShips2x=0;
	settedShips1x=0;
	foundedShipsFP.ships1x=0;
	foundedShipsFP.ships2x=0;
	foundedShipsFP.ships3x=0;
	foundedShipsFP.ships4x=0;
	foundedShipsSP.ships1x=0;
	foundedShipsSP.ships2x=0;
	foundedShipsSP.ships3x=0;
	foundedShipsSP.ships4x=0;
}

void reinit(void)
{
	delete fieldFP;
	delete fieldSP;
	delete vFieldFP;
	delete vFieldSP;
	delete virtualField;

	ships4xFP.zeroConfig();
	ships4xSP.zeroConfig();

	for(int i=0; i<2; i++)
	{
		ships3xFP[i].zeroConfig();
		ships3xSP[i].zeroConfig();
	}
	for(int i=0; i<3; i++)
	{
		ships2xFP[i].zeroConfig();
		ships2xSP[i].zeroConfig();
	}
	for(int i=0; i<4; i++)
	{
		ships1xFP[i].zeroConfig();
		ships1xSP[i].zeroConfig();
	}
	GetAsyncKeyState(13);
	curPosFP.x=0;
	curPosFP.y=0;
	curPosSP.x=0;
	curPosSP.y=0;
	for(int i=0; i<8; i++)
		nameSP[i]=0;
}

void saveLog(char *nameFP, char *nameSP, bool winF, int count)
{
	FILE *fileLog;
	fileLog=fopen("GamesLog.txt", "a");
	if(!fileLog) fileLog=fopen("GamesLog.txt", "w");
	fprintf(fileLog, "------------------------------\nИгра: %s против %s\nПобедитель: %s\nСчет: %d:%d\n",
		nameFP, nameSP, winF? nameFP: nameSP, winF? 20: count, winF? count: 20);
	fclose(fileLog);
}

void drawTableX(char *p, char *vP, char * name)
{
	cout << endl << "Игрок " << name << " размещает корабли.\n\n   ";
	for(int i=0; i<10; i++)
		cout << fieldChars[currentMarkField][i] << " ";
	cout << endl;
	for(int i=0; i<10; i++)
	{
		printf("%d ", i+1); if(i<9) cout << " ";
		for(int j=0; j<10; j++)
		{
			if(*(vP+i*10+j)=='X') cout << "S ";
			else if(*(p+i*10+j)=='X') cout << "X ";
			else cout << borderChar << " ";
		}
		switch(i)
		{
			case 0:	{printf("   Кораблей поставлено:"); break;}
			case 2:	{printf("   ХХХХ: %d/1", settedShips4x); break;}
			case 3:	{printf("   ХХХХ: %d/2", settedShips3x); break;}
			case 4:	{printf("   ХХХХ: %d/3", settedShips2x); break;}
			case 5:	{printf("   ХХХХ: %d/4", settedShips1x); break;}
			default: {break;}
		}
		cout << endl;
	}
	cout << endl << "Инструкция:" << endl << endl << "W A S D и стрелки - перемещение корабля." << endl << endl << "R - поворот корабля." << endl << endl << "Enter - поставить корабль.";
}

void drawTwoTablesX(char *p1, char *p2, char *vP, int player, char *nameFP, char *nameSP)
{
	cout << "   ";
	for(int i=0; i<10; i++)
		cout << fieldChars[currentMarkField][i] << " ";
	printf("    %s %d", nameFP, scoreFP); if(scoreFP<10) cout << " ";
	cout <<" ||   ";
	printf("  %s %d", nameSP, scoreSP); if(scoreSP<10) cout << " ";
	cout << "   ";
	for(int i=0; i<10; i++)
		cout << fieldChars[currentMarkField][i] << " ";
	for(int i=0; i<10; i++)
	{
		printf("%d ", i+1); if(i<9) cout << " ";
		for(int j=0; j<10; j++)
		{
			if(player==1&&*(vP+10*i+j)=='+') cout << "+ ";
			else if(*(p1+i*10+j)=='0') cout << borderChar << " ";
			else cout << *(p1+i*10+j) << " ";
		}
		cout <<"                ||                ";
		printf("%d ", i+1); if(i<9) cout << " ";
		for(int j=0; j<10; j++)
		{
			if(player==2&&*(vP+10*i+j)=='+') cout << "+ ";
			else if(*(p2+i*10+j)=='0') cout << borderChar << " ";
			else cout << *(p2+i*10+j) << " ";
		}
	}
	cout << "\n Найдено вражеских кораблей:             Найдено вражеских кораблей:\n\n";
	cout << " XXXX: " << foundedShipsFP.ships4x << "/1                               XXXX: " << foundedShipsSP.ships4x << "/1\n";
	cout << " XXX : " << foundedShipsFP.ships3x << "/2                               XXX : " << foundedShipsSP.ships3x << "/2\n";
	cout << " XX  : " << foundedShipsFP.ships2x << "/3                               XX  : " << foundedShipsSP.ships2x << "/3\n";
	cout << " X   : " << foundedShipsFP.ships1x << "/4                               X   : " << foundedShipsSP.ships1x << "/4\n";
}

void sounds(int num)
{
	if(num==STOP_SOUND) PlaySoundA(NULL, NULL, NULL);
	else PlaySoundA(soundSources[num], NULL, SND_ASYNC|SND_FILENAME);
}

void message(int num, int player, int x, int y)
{
	if(player==1)
		printf("\n%c%d: %s", fieldChars[currentMarkField][x], y+1, messageStrings[num]);
	else
		printf("\n                                         %c%d: %s", fieldChars[currentMarkField][x], y+1, messageStrings[num]);
}

void clearVirtualField(void)
{
	for(int i=0; i<100; i++)
		*(virtualField+i)=0;
}

bool checkMiss(char *p, int x, int y)
{
	bool returning=false;
	if(x!=0&&x!=N-1&&y!=0&&y!=N-1)
	{
		if((*(p+10*y+x)=='W')||(*(p+10*(y+1)+x)!='W'&&*(p+10*y+x+1)!='W'&&*(p+10*(y+1)+x+1)!='W'&&*(p+10*y+x-1)!='W'&&*(p+10*(y-1)+x)!='W'&&*(p+10*(y-1)+x-1)!='W'&&*(p+10*(y-1)+x+1)!='W'&&*(p+10*(y+1)+x-1)!='W')) returning=false; else return true;
	}
	else if(x==0&&y!=0&&y!=N-1)
	{
		if((*(p+10*y+x)=='W')||(*(p+10*(y+1)+x)!='W'&&*(p+10*y+x+1)!='W'&&*(p+10*(y+1)+x+1)!='W'&&*(p+10*(y-1)+x)!='W'&&*(p+10*(y-1)+x+1)!='W')) returning=false; else return true;
	}
	else if(x!=0&&x!=N-1&&y==0)
	{
		if((*(p+10*y+x)=='W')||(*(p+10*(y+1)+x)!='W'&&*(p+10*y+x+1)!='W'&&*(p+10*(y+1)+x+1)!='W'&&*(p+10*y+x-1)!='W'&&*(p+10*(y+1)+x-1)!='W')) returning=false; else return true;
	}
	else if(x==N-1&&y!=0&&y!=N-1)
	{
		if((*(p+10*y+x)=='W')||(*(p+10*(y+1)+x)!='W'&&*(p+10*y+x-1)!='W'&&*(p+10*(y+1)+x-1)!='W'&&*(p+10*(y-1)+x)!='W'&&*(p+10*(y-1)+x-1)!='W')) returning=false; else return true;
	}
	else if(x!=0&&x!=N-1&&y==N-1)
	{
		if((*(p+10*y+x)=='W')||(*(p+10*(y-1)+x)!='W'&&*(p+10*y+x+1)!='W'&&*(p+10*(y-1)+x+1)!='W'&&*(p+10*y+x-1)!='W'&&*(p+10*(y-1)+x-1)!='W')) returning=false; else return true;
	}
	else if(x==0&&y==N-1)
	{
		if((*(p+10*y+x)=='W')||(*(p+10*(y-1)+x)!='W'&&*(p+10*y+x+1)!='W'&&*(p+10*(y-1)+x+1)!='W')) returning=false; else return true;
	}
	else if(x==N-1&&y==0)
	{
		if((*(p+10*y+x)=='W')||(*(p+10*(y+1)+x)!='W'&&*(p+10*y+x-1)!='W'&&*(p+10*(y+1)+x-1)!='W')) returning=false; else return true;
	}
	else if(x==N-1&&y==N-1)
	{
		if((*(p+10*y+x)=='W')||(*(p+10*(y-1)+x)!='W'&&*(p+10*y+x-1)!='W'&&*(p+10*(y-1)+x-1)!='W')) returning=false; else return true;
	}
	else if(x==0&&y==0)
	{
		if((*(p+10*y+x)=='W')||(*(p+10*(y+1)+x)!='W'&&*(p+10*y+x+1)!='W'&&*(p+10*(y+1)+x+1)!='W')) returning=false; else return true;
	}
	return returning;
}

bool checkPos(char *p, bool rot, int _x, int _y, int len)
{
	bool returning=false;
	int x, y;
	for(int i=0; i<len; i++)
	{
		if(rot) {x=_x+i; y=_y;} else {x=_x; y=_y+i;}
		if(x!=0&&x!=N-1&&y!=0&&y!=N-1)
		{
			if(*(p+10*y+x)!='X'&&*(p+10*(y+1)+x)!='X'&&*(p+10*y+x+1)!='X'&&*(p+10*(y+1)+x+1)!='X'&&*(p+10*y+x-1)!='X'&&*(p+10*(y-1)+x)!='X'&&*(p+10*(y-1)+x-1)!='X'&&*(p+10*(y-1)+x+1)!='X'&&*(p+10*(y+1)+x-1)!='X') returning=true; else {sounds(2); return false;}
		}
		else if(x==0&&y!=0&&y!=N-1)
		{
			if(*(p+10*y+x)!='X'&&*(p+10*(y+1)+x)!='X'&&*(p+10*y+x+1)!='X'&&*(p+10*(y+1)+x+1)!='X'&&*(p+10*(y-1)+x)!='X'&&*(p+10*(y-1)+x+1)!='X') returning=true; else {sounds(2); return false;}
		}
		else if(x!=0&&x!=N-1&&y==0)
		{
			if(*(p+10*y+x)!='X'&&*(p+10*(y+1)+x)!='X'&&*(p+10*y+x+1)!='X'&&*(p+10*(y+1)+x+1)!='X'&&*(p+10*y+x-1)!='X'&&*(p+10*(y+1)+x-1)!='X') returning=true; else {sounds(2); return false;}
		}
		else if(x==N-1&&y!=0&&y!=N-1)
		{
			if(*(p+10*y+x)!='X'&&*(p+10*(y+1)+x)!='X'&&*(p+10*y+x-1)!='X'&&*(p+10*(y+1)+x-1)!='X'&&*(p+10*(y-1)+x)!='X'&&*(p+10*(y-1)+x-1)!='X') returning=true; else {sounds(2); return false;}
		}
		else if(x!=0&&x!=N-1&&y==N-1)
		{
			if(*(p+10*y+x)!='X'&&*(p+10*(y-1)+x)!='X'&&*(p+10*y+x+1)!='X'&&*(p+10*(y-1)+x+1)!='X'&&*(p+10*y+x-1)!='X'&&*(p+10*(y-1)+x-1)!='X') returning=true; else {sounds(2); return false;}
		}
		else if(x==0&&y==N-1)
		{
			if(*(p+10*y+x)!='X'&&*(p+10*(y-1)+x)!='X'&&*(p+10*y+x+1)!='X'&&*(p+10*(y-1)+x+1)!='X') returning=true; else {sounds(2); return false;}
		}
		else if(x==N-1&&y==0)
		{
			if(*(p+10*y+x)!='X'&&*(p+10*(y+1)+x)!='X'&&*(p+10*y+x-1)!='X'&&*(p+10*(y+1)+x-1)!='X') returning=true; else {sounds(2); return false;}
		}
		else if(x==N-1&&y==N-1)
		{
			if(*(p+10*y+x)!='X'&&*(p+10*(y-1)+x)!='X'&&*(p+10*y+x-1)!='X'&&*(p+10*(y-1)+x-1)!='X') returning=true; else {sounds(2); return false;}
		}
		else if(x==0&&y==0)
		{
			if(*(p+10*y+x)!='X'&&*(p+10*(y+1)+x)!='X'&&*(p+10*y+x+1)!='X'&&*(p+10*(y+1)+x+1)!='X') returning=true; else {sounds(2); return false;}
		}
	}
	return returning;
}

void setShip4x(char *p, int player)
{
	if(player==1)
	{
		while(true)
		{
			if(ships4xFP.getRotate()) for(int i=0; i<4; i++) {*(virtualField+10*ships4xFP.getCorY()+ships4xFP.getCorX()+i)='X';} else for(int i=0; i<4; i++) {*(virtualField+10*ships4xFP.getCorY()+ships4xFP.getCorX()+10*i)='X';}
			drawTableX(p, virtualField, profiles[currentProfile]);
			getch();
			if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(ships4xFP.getCorY()>0) {ships4xFP.setCoors(ships4xFP.getCorX(), ships4xFP.getCorY()-1);} } //^
			if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(ships4xFP.getRotate()) {if(ships4xFP.getCorY()<N-1) ships4xFP.setCoors(ships4xFP.getCorX(), ships4xFP.getCorY()+1);} else {if(ships4xFP.getCorY()+3<N-1) ships4xFP.setCoors(ships4xFP.getCorX(), ships4xFP.getCorY()+1);} } //v
			if(GetAsyncKeyState(65)||GetAsyncKeyState(37)) {if(ships4xFP.getCorX()>0) {ships4xFP.setCoors(ships4xFP.getCorX()-1, ships4xFP.getCorY());} } //<
			if(GetAsyncKeyState(68)||GetAsyncKeyState(39)) {if(ships4xFP.getRotate()) {if(ships4xFP.getCorX()+3<N-1) ships4xFP.setCoors(ships4xFP.getCorX()+1, ships4xFP.getCorY());} else {if(ships4xFP.getCorX()<N-1) ships4xFP.setCoors(ships4xFP.getCorX()+1, ships4xFP.getCorY());} } //>
			if(GetAsyncKeyState(82)) {if(ships4xFP.getRotate()) {if(ships4xFP.getCorY()<N-3) {ships4xFP.setRotate(false); ships4xFP.setCoors(ships4xFP.getCorX(), ships4xFP.getCorY());} } else {if(ships4xFP.getCorX()<N-3) {ships4xFP.setRotate(true); ships4xFP.setCoors(ships4xFP.getCorX(), ships4xFP.getCorY());} } } // R
			if(GetAsyncKeyState(13)) {if(checkPos(fieldFP, ships4xFP.getRotate(), ships4xFP.getCorX(), ships4xFP.getCorY(), 4)) {if(ships4xFP.getRotate()) {for(int i=0; i<4; i++) *(fieldFP+10*ships4xFP.getCorY()+ships4xFP.getCorX()+i)='X';} else {for(int i=0; i<4; i++) *(fieldFP+10*ships4xFP.getCorY()+ships4xFP.getCorX()+10*i)='X';} system("cls"); clearVirtualField(); settedShips4x++; break;} } // Enter
			Sleep(70);
			system("cls"); 
			clearVirtualField();
		}
	}
	else if(player==2)
	{
		while(true)
		{
			if(ships4xSP.getRotate()) for(int i=0; i<4; i++) {*(virtualField+10*ships4xSP.getCorY()+ships4xSP.getCorX()+i)='X';} else for(int i=0; i<4; i++) {*(virtualField+10*ships4xSP.getCorY()+ships4xSP.getCorX()+10*i)='X';}
			drawTableX(p, virtualField, nameSP);
			getch();
			if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(ships4xSP.getCorY()>0) {ships4xSP.setCoors(ships4xSP.getCorX(), ships4xSP.getCorY()-1);} } //^
			if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(ships4xSP.getRotate()) {if(ships4xSP.getCorY()<N-1) ships4xSP.setCoors(ships4xSP.getCorX(), ships4xSP.getCorY()+1);} else {if(ships4xSP.getCorY()+3<N-1) ships4xSP.setCoors(ships4xSP.getCorX(), ships4xSP.getCorY()+1);} } //v
			if(GetAsyncKeyState(65)||GetAsyncKeyState(37)) {if(ships4xSP.getCorX()>0) {ships4xSP.setCoors(ships4xSP.getCorX()-1, ships4xSP.getCorY());} } //<
			if(GetAsyncKeyState(68)||GetAsyncKeyState(39)) {if(ships4xSP.getRotate()) {if(ships4xSP.getCorX()+3<N-1) ships4xSP.setCoors(ships4xSP.getCorX()+1, ships4xSP.getCorY());} else {if(ships4xSP.getCorX()<N-1) ships4xSP.setCoors(ships4xSP.getCorX()+1, ships4xSP.getCorY());} } //>
			if(GetAsyncKeyState(82)) {if(ships4xSP.getRotate()) {if(ships4xSP.getCorY()<N-3) {ships4xSP.setRotate(false); ships4xSP.setCoors(ships4xSP.getCorX(), ships4xSP.getCorY());} } else {if(ships4xSP.getCorX()<N-3) {ships4xSP.setRotate(true); ships4xSP.setCoors(ships4xSP.getCorX(), ships4xSP.getCorY());} } } // R
			if(GetAsyncKeyState(13)) {if(checkPos(fieldSP, ships4xSP.getRotate(), ships4xSP.getCorX(), ships4xSP.getCorY(), 4)) {if(ships4xSP.getRotate()) {for(int i=0; i<4; i++) *(fieldSP+10*ships4xSP.getCorY()+ships4xSP.getCorX()+i)='X';} else {for(int i=0; i<4; i++) *(fieldSP+10*ships4xSP.getCorY()+ships4xSP.getCorX()+10*i)='X';} system("cls"); clearVirtualField(); settedShips4x++; break;} } // Enter
			Sleep(70);
			system("cls"); 
			clearVirtualField();
		}
	}
}

void setShip3x(char *p, int player, int n)
{
	if(player==1)
	{
		while(true)
		{
			if(ships3xFP[n].getRotate()) for(int i=0; i<3; i++) {*(virtualField+10*ships3xFP[n].getCorY()+ships3xFP[n].getCorX()+i)='X';} else for(int i=0; i<3; i++) {*(virtualField+10*ships3xFP[n].getCorY()+ships3xFP[n].getCorX()+10*i)='X';}
			drawTableX(p, virtualField, profiles[currentProfile]);
			getch();
			if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(ships3xFP[n].getCorY()>0) {ships3xFP[n].setCoors(ships3xFP[n].getCorX(), ships3xFP[n].getCorY()-1);} } //^
			if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(ships3xFP[n].getRotate()) {if(ships3xFP[n].getCorY()<N-1) ships3xFP[n].setCoors(ships3xFP[n].getCorX(), ships3xFP[n].getCorY()+1);} else {if(ships3xFP[n].getCorY()+2<N-1) ships3xFP[n].setCoors(ships3xFP[n].getCorX(), ships3xFP[n].getCorY()+1);} } //v
			if(GetAsyncKeyState(65)||GetAsyncKeyState(37)) {if(ships3xFP[n].getCorX()>0) {ships3xFP[n].setCoors(ships3xFP[n].getCorX()-1, ships3xFP[n].getCorY());} } //<
			if(GetAsyncKeyState(68)||GetAsyncKeyState(39)) {if(ships3xFP[n].getRotate()) {if(ships3xFP[n].getCorX()+2<N-1) ships3xFP[n].setCoors(ships3xFP[n].getCorX()+1, ships3xFP[n].getCorY());} else {if(ships3xFP[n].getCorX()<N-1) ships3xFP[n].setCoors(ships3xFP[n].getCorX()+1, ships3xFP[n].getCorY());} } //>
			if(GetAsyncKeyState(82)) {if(ships3xFP[n].getRotate()) {if(ships3xFP[n].getCorY()<N-2) {ships3xFP[n].setRotate(false); ships3xFP[n].setCoors(ships3xFP[n].getCorX(), ships3xFP[n].getCorY());} } else {if(ships3xFP[n].getCorX()<N-2) {ships3xFP[n].setRotate(true); ships3xFP[n].setCoors(ships3xFP[n].getCorX(), ships3xFP[n].getCorY());} } } // R
			if(GetAsyncKeyState(13)) {if(checkPos(fieldFP, ships3xFP[n].getRotate(), ships3xFP[n].getCorX(), ships3xFP[n].getCorY(), 3)) {if(ships3xFP[n].getRotate()) {for(int i=0; i<3; i++) *(fieldFP+10*ships3xFP[n].getCorY()+ships3xFP[n].getCorX()+i)='X';} else {for(int i=0; i<3; i++) *(fieldFP+10*ships3xFP[n].getCorY()+ships3xFP[n].getCorX()+10*i)='X';} system("cls"); clearVirtualField(); settedShips3x++; break;} } // Enter
			Sleep(70);
			system("cls"); 
			clearVirtualField();
		}
	}
	else if(player==2)
	{
		while(true)
		{
			if(ships3xSP[n].getRotate()) for(int i=0; i<3; i++) {*(virtualField+10*ships3xSP[n].getCorY()+ships3xSP[n].getCorX()+i)='X';} else for(int i=0; i<3; i++) {*(virtualField+10*ships3xSP[n].getCorY()+ships3xSP[n].getCorX()+10*i)='X';}
			drawTableX(p, virtualField, nameSP);
			getch();
			if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(ships3xSP[n].getCorY()>0) {ships3xSP[n].setCoors(ships3xSP[n].getCorX(), ships3xSP[n].getCorY()-1);} } //^
			if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(ships3xSP[n].getRotate()) {if(ships3xSP[n].getCorY()<N-1) ships3xSP[n].setCoors(ships3xSP[n].getCorX(), ships3xSP[n].getCorY()+1);} else {if(ships3xSP[n].getCorY()+2<N-1) ships3xSP[n].setCoors(ships3xSP[n].getCorX(), ships3xSP[n].getCorY()+1);} } //v
			if(GetAsyncKeyState(65)||GetAsyncKeyState(37)) {if(ships3xSP[n].getCorX()>0) {ships3xSP[n].setCoors(ships3xSP[n].getCorX()-1, ships3xSP[n].getCorY());} } //<
			if(GetAsyncKeyState(68)||GetAsyncKeyState(39)) {if(ships3xSP[n].getRotate()) {if(ships3xSP[n].getCorX()+2<N-1) ships3xSP[n].setCoors(ships3xSP[n].getCorX()+1, ships3xSP[n].getCorY());} else {if(ships3xSP[n].getCorX()<N-1) ships3xSP[n].setCoors(ships3xSP[n].getCorX()+1, ships3xSP[n].getCorY());} } //>
			if(GetAsyncKeyState(82)) {if(ships3xSP[n].getRotate()) {if(ships3xSP[n].getCorY()<N-2) {ships3xSP[n].setRotate(false); ships3xSP[n].setCoors(ships3xSP[n].getCorX(), ships3xSP[n].getCorY());} } else {if(ships3xSP[n].getCorX()<N-2) {ships3xSP[n].setRotate(true); ships3xSP[n].setCoors(ships3xSP[n].getCorX(), ships3xSP[n].getCorY());} } } // R
			if(GetAsyncKeyState(13)) {if(checkPos(fieldSP, ships3xSP[n].getRotate(), ships3xSP[n].getCorX(), ships3xSP[n].getCorY(), 3)) {if(ships3xSP[n].getRotate()) {for(int i=0; i<3; i++) *(fieldSP+10*ships3xSP[n].getCorY()+ships3xSP[n].getCorX()+i)='X';} else {for(int i=0; i<3; i++) *(fieldSP+10*ships3xSP[n].getCorY()+ships3xSP[n].getCorX()+10*i)='X';} system("cls"); clearVirtualField(); settedShips3x++; break;} } // Enter
			Sleep(70);
			system("cls"); 
			clearVirtualField();
		}
	}
}

void setShip2x(char *p, int player, int n)
{
	if(player==1)
	{
		while(true)
		{
			if(ships2xFP[n].getRotate()) for(int i=0; i<2; i++) {*(virtualField+10*ships2xFP[n].getCorY()+ships2xFP[n].getCorX()+i)='X';} else for(int i=0; i<2; i++) {*(virtualField+10*ships2xFP[n].getCorY()+ships2xFP[n].getCorX()+10*i)='X';}
			drawTableX(p, virtualField, profiles[currentProfile]);
			getch();
			if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(ships2xFP[n].getCorY()>0) {ships2xFP[n].setCoors(ships2xFP[n].getCorX(), ships2xFP[n].getCorY()-1);} } //^
			if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(ships2xFP[n].getRotate()) {if(ships2xFP[n].getCorY()<N-1) ships2xFP[n].setCoors(ships2xFP[n].getCorX(), ships2xFP[n].getCorY()+1);} else {if(ships2xFP[n].getCorY()+1<N-1) ships2xFP[n].setCoors(ships2xFP[n].getCorX(), ships2xFP[n].getCorY()+1);} } //v
			if(GetAsyncKeyState(65)||GetAsyncKeyState(37)) {if(ships2xFP[n].getCorX()>0) {ships2xFP[n].setCoors(ships2xFP[n].getCorX()-1, ships2xFP[n].getCorY());} } //<
			if(GetAsyncKeyState(68)||GetAsyncKeyState(39)) {if(ships2xFP[n].getRotate()) {if(ships2xFP[n].getCorX()+1<N-1) ships2xFP[n].setCoors(ships2xFP[n].getCorX()+1, ships2xFP[n].getCorY());} else {if(ships2xFP[n].getCorX()<N-1) ships2xFP[n].setCoors(ships2xFP[n].getCorX()+1, ships2xFP[n].getCorY());} } //>
			if(GetAsyncKeyState(82)) {if(ships2xFP[n].getRotate()) {if(ships2xFP[n].getCorY()<N-1) {ships2xFP[n].setRotate(false); ships2xFP[n].setCoors(ships2xFP[n].getCorX(), ships2xFP[n].getCorY());} } else {if(ships2xFP[n].getCorX()<N-1) {ships2xFP[n].setRotate(true); ships2xFP[n].setCoors(ships2xFP[n].getCorX(), ships2xFP[n].getCorY());} } } // R
			if(GetAsyncKeyState(13)) {if(checkPos(fieldFP, ships2xFP[n].getRotate(), ships2xFP[n].getCorX(), ships2xFP[n].getCorY(), 2)) {if(ships2xFP[n].getRotate()) {for(int i=0; i<2; i++) *(fieldFP+10*ships2xFP[n].getCorY()+ships2xFP[n].getCorX()+i)='X';} else {for(int i=0; i<2; i++) *(fieldFP+10*ships2xFP[n].getCorY()+ships2xFP[n].getCorX()+10*i)='X';} system("cls"); clearVirtualField(); settedShips2x++; break;} } // Enter
			Sleep(70);
			system("cls"); 
			clearVirtualField();
		}
	}
	else if(player==2)
	{
		while(true)
		{
			if(ships2xSP[n].getRotate()) for(int i=0; i<2; i++) {*(virtualField+10*ships2xSP[n].getCorY()+ships2xSP[n].getCorX()+i)='X';} else for(int i=0; i<2; i++) {*(virtualField+10*ships2xSP[n].getCorY()+ships2xSP[n].getCorX()+10*i)='X';}
			drawTableX(p, virtualField, nameSP);
			getch();
			if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(ships2xSP[n].getCorY()>0) {ships2xSP[n].setCoors(ships2xSP[n].getCorX(), ships2xSP[n].getCorY()-1);} } //^
			if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(ships2xSP[n].getRotate()) {if(ships2xSP[n].getCorY()<N-1) ships2xSP[n].setCoors(ships2xSP[n].getCorX(), ships2xSP[n].getCorY()+1);} else {if(ships2xSP[n].getCorY()+1<N-1) ships2xSP[n].setCoors(ships2xSP[n].getCorX(), ships2xSP[n].getCorY()+1);} } //v
			if(GetAsyncKeyState(65)||GetAsyncKeyState(37)) {if(ships2xSP[n].getCorX()>0) {ships2xSP[n].setCoors(ships2xSP[n].getCorX()-1, ships2xSP[n].getCorY());} } //<
			if(GetAsyncKeyState(68)||GetAsyncKeyState(39)) {if(ships2xSP[n].getRotate()) {if(ships2xSP[n].getCorX()+1<N-1) ships2xSP[n].setCoors(ships2xSP[n].getCorX()+1, ships2xSP[n].getCorY());} else {if(ships2xSP[n].getCorX()<N-1) ships2xSP[n].setCoors(ships2xSP[n].getCorX()+1, ships2xSP[n].getCorY());} } //>
			if(GetAsyncKeyState(82)) {if(ships2xSP[n].getRotate()) {if(ships2xSP[n].getCorY()<N-1) {ships2xSP[n].setRotate(false); ships2xSP[n].setCoors(ships2xSP[n].getCorX(), ships2xSP[n].getCorY());} } else {if(ships2xSP[n].getCorX()<N-1) {ships2xSP[n].setRotate(true); ships2xSP[n].setCoors(ships2xSP[n].getCorX(), ships2xSP[n].getCorY());} } } // R
			if(GetAsyncKeyState(13)) {if(checkPos(fieldSP, ships2xSP[n].getRotate(), ships2xSP[n].getCorX(), ships2xSP[n].getCorY(), 2)) {if(ships2xSP[n].getRotate()) {for(int i=0; i<2; i++) *(fieldSP+10*ships2xSP[n].getCorY()+ships2xSP[n].getCorX()+i)='X';} else {for(int i=0; i<2; i++) *(fieldSP+10*ships2xSP[n].getCorY()+ships2xSP[n].getCorX()+10*i)='X';} system("cls"); clearVirtualField(); settedShips2x++; break;} } // Enter
			Sleep(70);
			system("cls"); 
			clearVirtualField();
		}
	}
}

void setShip1x(char *p, int player, int n)
{
	if(player==1)
	{
		while(true)
		{
			*(virtualField+10*ships1xFP[n].getCorY()+ships1xFP[n].getCorX())='X';
			drawTableX(p, virtualField, profiles[currentProfile]);
			getch();
			if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(ships1xFP[n].getCorY()>0) {ships1xFP[n].setCoors(ships1xFP[n].getCorX(), ships1xFP[n].getCorY()-1);} } //^
			if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(ships1xFP[n].getCorY()<N-1) {ships1xFP[n].setCoors(ships1xFP[n].getCorX(), ships1xFP[n].getCorY()+1);} } //v
			if(GetAsyncKeyState(65)||GetAsyncKeyState(37)) {if(ships1xFP[n].getCorX()>0) {ships1xFP[n].setCoors(ships1xFP[n].getCorX()-1, ships1xFP[n].getCorY());} } //<
			if(GetAsyncKeyState(68)||GetAsyncKeyState(39)) {if(ships1xFP[n].getCorX()<N-1) {ships1xFP[n].setCoors(ships1xFP[n].getCorX()+1, ships1xFP[n].getCorY());} } //>
			if(GetAsyncKeyState(13)) {if(checkPos(fieldFP, false, ships1xFP[n].getCorX(), ships1xFP[n].getCorY(), 1)) {*(fieldFP+10*ships1xFP[n].getCorY()+ships1xFP[n].getCorX())='X'; system("cls"); clearVirtualField(); settedShips1x++; break;} } // Enter
			Sleep(70);
			system("cls"); 
			clearVirtualField();
		}
	}
	else if(player==2)
	{
		while(true)
		{
			*(virtualField+10*ships1xSP[n].getCorY()+ships1xSP[n].getCorX())='X';
			drawTableX(p, virtualField, nameSP);
			getch();
			if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(ships1xSP[n].getCorY()>0) {ships1xSP[n].setCoors(ships1xSP[n].getCorX(), ships1xSP[n].getCorY()-1);} } //^
			if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(ships1xSP[n].getCorY()<N-1) {ships1xSP[n].setCoors(ships1xSP[n].getCorX(), ships1xSP[n].getCorY()+1);} } //v
			if(GetAsyncKeyState(65)||GetAsyncKeyState(37)) {if(ships1xSP[n].getCorX()>0) {ships1xSP[n].setCoors(ships1xSP[n].getCorX()-1, ships1xSP[n].getCorY());} } //<
			if(GetAsyncKeyState(68)||GetAsyncKeyState(39)) {if(ships1xSP[n].getCorX()<N-1) {ships1xSP[n].setCoors(ships1xSP[n].getCorX()+1, ships1xSP[n].getCorY());} } //>
			if(GetAsyncKeyState(13)) {if(checkPos(fieldSP, false, ships1xSP[n].getCorX(), ships1xSP[n].getCorY(), 1)) {*(fieldSP+10*ships1xSP[n].getCorY()+ships1xSP[n].getCorX())='X'; system("cls"); clearVirtualField(); settedShips1x++; break;} } // Enter
			Sleep(70);
			system("cls"); 
			clearVirtualField();
		}
	}
}

int checkShips(int x, int y, int player)
{
	sounds(5);
	if(player==2)
	{
		if(ships4xFP.getLife()) {for(int i=0; i<4; i++) {if(ships4xFP.getRotate()) {if((x==ships4xFP.getCorX()+i)&&(y==ships4xFP.getCorY())) {ships4xFP.setLifeParts(ships4xFP.getLifeParts()-1); if(!ships4xFP.getLife()) {if(ships4xFP.getRotate()) {for(int m=0; m<4; m++) *(vFieldSP+10*ships4xFP.getCorY()+ships4xFP.getCorX()+m)='W'; sounds(4); foundedShipsSP.ships4x++;} else {for(int m=0; m<4; m++) *(vFieldSP+10*ships4xFP.getCorY()+ships4xFP.getCorX()+10*m)='W'; sounds(4); foundedShipsSP.ships4x++;} return 1;} } } else {if((x==ships4xFP.getCorX())&&(y==ships4xFP.getCorY()+i)) {ships4xFP.setLifeParts(ships4xFP.getLifeParts()-1); if(!ships4xFP.getLife()) {if(ships4xFP.getRotate()) {for(int m=0; m<4; m++) *(vFieldSP+10*ships4xFP.getCorY()+ships4xFP.getCorX()+m)='W'; sounds(4); foundedShipsSP.ships4x++;} else {for(int m=0; m<4; m++) *(vFieldSP+10*ships4xFP.getCorY()+ships4xFP.getCorX()+10*m)='W'; sounds(4); foundedShipsSP.ships4x++;} return 1;} } } } }
		for(int i=0; i<2; i++) {if(ships3xFP[i].getLife()) {for(int j=0; j<3; j++) {if(ships3xFP[i].getRotate()) {if((x==ships3xFP[i].getCorX()+j)&&(y==ships3xFP[i].getCorY())) {ships3xFP[i].setLifeParts(ships3xFP[i].getLifeParts()-1); if(!ships3xFP[i].getLife()) {sounds(4); foundedShipsSP.ships3x++; if(ships3xFP[i].getRotate()) {for(int m=0; m<3; m++) *(vFieldSP+10*ships3xFP[i].getCorY()+ships3xFP[i].getCorX()+m)='W';} else {for(int m=0; m<3; m++) *(vFieldSP+10*ships3xFP[i].getCorY()+ships3xFP[i].getCorX()+10*m)='W';} return 1;} } } else {if((x==ships3xFP[i].getCorX())&&(y==ships3xFP[i].getCorY()+j)) {ships3xFP[i].setLifeParts(ships3xFP[i].getLifeParts()-1); if(!ships3xFP[i].getLife()) {sounds(4); foundedShipsSP.ships3x++; if(ships3xFP[i].getRotate()) {for(int m=0; m<3; m++) *(vFieldSP+10*ships3xFP[i].getCorY()+ships3xFP[i].getCorX()+m)='W';} else {for(int m=0; m<3; m++) *(vFieldSP+10*ships3xFP[i].getCorY()+ships3xFP[i].getCorX()+10*m)='W';} return 1;} } } } } }
		for(int i=0; i<3; i++) {if(ships2xFP[i].getLife()) {for(int j=0; j<2; j++) {if(ships2xFP[i].getRotate()) {if((x==ships2xFP[i].getCorX()+j)&&(y==ships2xFP[i].getCorY())) {ships2xFP[i].setLifeParts(ships2xFP[i].getLifeParts()-1); if(!ships2xFP[i].getLife()) {sounds(4); foundedShipsSP.ships2x++; if(ships2xFP[i].getRotate()) {for(int m=0; m<2; m++) *(vFieldSP+10*ships2xFP[i].getCorY()+ships2xFP[i].getCorX()+m)='W';} else {for(int m=0; m<2; m++) *(vFieldSP+10*ships2xFP[i].getCorY()+ships2xFP[i].getCorX()+10*m)='W';} return 1;} } } else {if((x==ships2xFP[i].getCorX())&&(y==ships2xFP[i].getCorY()+j)) {ships2xFP[i].setLifeParts(ships2xFP[i].getLifeParts()-1); if(!ships2xFP[i].getLife()) {sounds(4); foundedShipsSP.ships2x++; if(ships2xFP[i].getRotate()) {for(int m=0; m<2; m++) *(vFieldSP+10*ships2xFP[i].getCorY()+ships2xFP[i].getCorX()+m)='W';} else {for(int m=0; m<2; m++) *(vFieldSP+10*ships2xFP[i].getCorY()+ships2xFP[i].getCorX()+10*m)='W';} return 1;} } } } } } 
		for(int i=0; i<4; i++) {if(ships1xFP[i].getLife()) {if((x==ships1xFP[i].getCorX())&&(y==ships1xFP[i].getCorY())) {ships1xFP[i].setLifeParts(ships1xFP[i].getLifeParts()-1); if(!ships1xFP[i].getLife()) {sounds(4); foundedShipsSP.ships1x++; *(vFieldSP+10*ships1xFP[i].getCorY()+ships1xFP[i].getCorX())='W'; return 1;} } } }
	}
	else
	{
		if(ships4xSP.getLife()) {for(int i=0; i<4; i++) {if(ships4xSP.getRotate()) {if((x==ships4xSP.getCorX()+i)&&(y==ships4xSP.getCorY())) {ships4xSP.setLifeParts(ships4xSP.getLifeParts()-1); if(!ships4xSP.getLife()) {if(ships4xSP.getRotate()) {for(int m=0; m<4; m++) *(vFieldFP+10*ships4xSP.getCorY()+ships4xSP.getCorX()+m)='W'; sounds(4); foundedShipsFP.ships4x++;} else {for(int m=0; m<4; m++) *(vFieldFP+10*ships4xSP.getCorY()+ships4xSP.getCorX()+10*m)='W'; sounds(4); foundedShipsFP.ships4x++;} return 1;} } } else {if((x==ships4xSP.getCorX())&&(y==ships4xSP.getCorY()+i)) {ships4xSP.setLifeParts(ships4xSP.getLifeParts()-1); if(!ships4xSP.getLife()) {if(ships4xSP.getRotate()) {for(int m=0; m<4; m++) *(vFieldFP+10*ships4xSP.getCorY()+ships4xSP.getCorX()+m)='W'; sounds(4); foundedShipsFP.ships4x++;} else {for(int m=0; m<4; m++) *(vFieldFP+10*ships4xSP.getCorY()+ships4xSP.getCorX()+10*m)='W'; sounds(4); foundedShipsFP.ships4x++;} return 1;} } } } }
		for(int i=0; i<2; i++) {if(ships3xSP[i].getLife()) {for(int j=0; j<3; j++) {if(ships3xSP[i].getRotate()) {if((x==ships3xSP[i].getCorX()+j)&&(y==ships3xSP[i].getCorY())) {ships3xSP[i].setLifeParts(ships3xSP[i].getLifeParts()-1); if(!ships3xSP[i].getLife()) {sounds(4); foundedShipsFP.ships3x++; if(ships3xSP[i].getRotate()) {for(int m=0; m<3; m++) *(vFieldFP+10*ships3xSP[i].getCorY()+ships3xSP[i].getCorX()+m)='W';} else {for(int m=0; m<3; m++) *(vFieldFP+10*ships3xSP[i].getCorY()+ships3xSP[i].getCorX()+10*m)='W';} return 1;} } } else {if((x==ships3xSP[i].getCorX())&&(y==ships3xSP[i].getCorY()+j)) {ships3xSP[i].setLifeParts(ships3xSP[i].getLifeParts()-1); if(!ships3xSP[i].getLife()) {sounds(4); foundedShipsFP.ships3x++; if(ships3xSP[i].getRotate()) {for(int m=0; m<3; m++) *(vFieldFP+10*ships3xSP[i].getCorY()+ships3xSP[i].getCorX()+m)='W';} else {for(int m=0; m<3; m++) *(vFieldFP+10*ships3xSP[i].getCorY()+ships3xSP[i].getCorX()+10*m)='W';} return 1;} } } } } }
		for(int i=0; i<3; i++) {if(ships2xSP[i].getLife()) {for(int j=0; j<2; j++) {if(ships2xSP[i].getRotate()) {if((x==ships2xSP[i].getCorX()+j)&&(y==ships2xSP[i].getCorY())) {ships2xSP[i].setLifeParts(ships2xSP[i].getLifeParts()-1); if(!ships2xSP[i].getLife()) {sounds(4); foundedShipsFP.ships2x++; if(ships2xSP[i].getRotate()) {for(int m=0; m<2; m++) *(vFieldFP+10*ships2xSP[i].getCorY()+ships2xSP[i].getCorX()+m)='W';} else {for(int m=0; m<2; m++) *(vFieldFP+10*ships2xSP[i].getCorY()+ships2xSP[i].getCorX()+10*m)='W';} return 1;} } } else {if((x==ships2xSP[i].getCorX())&&(y==ships2xSP[i].getCorY()+j)) {ships2xSP[i].setLifeParts(ships2xSP[i].getLifeParts()-1); if(!ships2xSP[i].getLife()) {sounds(4); foundedShipsFP.ships2x++; if(ships2xSP[i].getRotate()) {for(int m=0; m<2; m++) *(vFieldFP+10*ships2xSP[i].getCorY()+ships2xSP[i].getCorX()+m)='W';} else {for(int m=0; m<2; m++) *(vFieldFP+10*ships2xSP[i].getCorY()+ships2xSP[i].getCorX()+10*m)='W';} return 1;} } } } } }
		for(int i=0; i<4; i++) {if(ships1xSP[i].getLife()) {if((x==ships1xSP[i].getCorX())&&(y==ships1xSP[i].getCorY())) {ships1xSP[i].setLifeParts(ships1xSP[i].getLifeParts()-1); if(!ships1xSP[i].getLife()) {sounds(4); foundedShipsFP.ships1x++; *(vFieldFP+10*ships1xSP[i].getCorY()+ships1xSP[i].getCorX())='W'; return 1;} } } }
	}
	return 2;
}

void playerSetShips(char *p, int player)
{
	setShip4x(p, player);
	for(int i=0; i<2; i++)
		setShip3x(p, player, i);
	for(int i=0; i<3; i++)
		setShip2x(p, player, i);
	for(int i=0; i<4; i++)
		setShip1x(p, player, i);
}

void cheat(void)
{
	system("cls");
	drawTwoTablesX(fieldSP, fieldFP, virtualField, 1, profiles[currentProfile], nameSP);
	getch();
	GetAsyncKeyState(49);
}

void drawChars(char *word)
{
	int p[8];
	int size=0;

	for(int i=0; i<8&&word[i]!='\0'; i++)
	{
		size++;
		p[i]=(int)(word[i]-'A');
	}

	for(int i=0; i<7; i++)
	{
		for(int j=0; j<size; j++)
		{
			if(word[j]==' ') cout << "          ";
			else cout << stringWords[p[j]][i] << "   ";
		}
		if(size!=8) cout << endl;
	}
}

void game(int player)
{
	while(true)
	{
		if(scoreFP==20) {system("cls"); clearVirtualField(); break;}
		if(scoreSP==20) {system("cls"); clearVirtualField(); break;}
		if(player==1) *(virtualField+10*curPosFP.y+curPosFP.x)='+';
		else *(virtualField+10*curPosSP.y+curPosSP.x)='+';
		drawTwoTablesX(vFieldFP, vFieldSP, virtualField, player, profiles[currentProfile], nameSP);
		getch();
		if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(player==1&&curPosFP.y>0) curPosFP.y--; else if(player==2&&curPosSP.y>0) curPosSP.y--;} // ^
		if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(player==1&&curPosFP.y<N-1) curPosFP.y++; else if(player==2&&curPosSP.y<N-1) curPosSP.y++;} // v
		if(GetAsyncKeyState(65)||GetAsyncKeyState(37)) {if(player==1&&curPosFP.x>0) curPosFP.x--; else if(player==2&&curPosSP.x>0) curPosSP.x--;} // <
		if(GetAsyncKeyState(68)||GetAsyncKeyState(39)) {if(player==1&&curPosFP.x<N-1) curPosFP.x++; else if(player==2&&curPosSP.x<N-1) curPosSP.x++;} // >
		if(GetAsyncKeyState(13)) {if(player==1) {if(*(vFieldFP+10*curPosFP.y+curPosFP.x)=='?') {if(*(fieldSP+10*curPosFP.y+curPosFP.x)=='X') {*(vFieldFP+10*curPosFP.y+curPosFP.x)='X'; scoreFP++; message(checkShips(curPosFP.x, curPosFP.y, 1), 1, curPosFP.x, curPosFP.y); Sleep(500); GetAsyncKeyState(13);} else {*(vFieldFP+10*curPosFP.y+curPosFP.x)='0'; sounds(3); message(0, 1, curPosFP.x, curPosFP.y); Sleep(500); GetAsyncKeyState(13); system("cls"); clearVirtualField(); break;} } } else {if(*(vFieldSP+10*curPosSP.y+curPosSP.x)=='?') {if(*(fieldFP+10*curPosSP.y+curPosSP.x)=='X') {*(vFieldSP+10*curPosSP.y+curPosSP.x)='X'; scoreSP++; message(checkShips(curPosSP.x, curPosSP.y, 2), 2, curPosSP.x, curPosSP.y); getch(); GetAsyncKeyState(13);} else {*(vFieldSP+10*curPosSP.y+curPosSP.x)='0'; sounds(3); message(0, 2, curPosSP.x, curPosSP.y); getch(); GetAsyncKeyState(13); system("cls"); clearVirtualField(); break;} } } } // Enter
		if(GetAsyncKeyState(32)) {if(player==1) {if(checkMiss(vFieldFP, curPosFP.x, curPosFP.y)) *(vFieldFP+10*curPosFP.y+curPosFP.x)=borderChar;} else {if(checkMiss(vFieldSP, curPosSP.x, curPosSP.y)) *(vFieldSP+10*curPosSP.y+curPosSP.x)=borderChar;} } // Space
		if(GetAsyncKeyState(49)) cheat(); // 1
		Sleep(70);
		system("cls");
		clearVirtualField();
	}
}

void askPlayerName(int player)
{
	int x=0, y=0, numberOfChar=0;
	for(int i=0; i<9; i++) nameFP[i]=0;
	if(player==1)
	{
		while(true)
		{
			cout << "Введите имя нового профиля:" << endl << nameFP << endl << endl;
			for(int i=0; i<6; i++)
			{
				for(int j=0; j<5; j++)
				{
					if(i==y&&j==x) cout << ">"; 
					else cout << " ";
					cout << *(charsForName+i*5+j);
					cout << " ";
				}
				cout << endl;
			}
			getch();
			if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(y>0) y--;} // ^
			if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(y<5) y++; if((x==4&&y==5)||(x==3&&y==5)) x--; if((x==4&&y==5)||(x==3&&y==5)) x--;} // v
			if(GetAsyncKeyState(65)||GetAsyncKeyState(37)) {if(x>0) x--;} // <
			if(GetAsyncKeyState(68)||GetAsyncKeyState(39)) {if(x<4) x++; if((x==4&&y==5)||(x==3&&y==5)) x--;} // >
			if(GetAsyncKeyState(13)) {if(y*5+x<26&&numberOfChar<8) {nameFP[numberOfChar]=charsForName[y*5+x][0]; numberOfChar++;} else if(y*5+x==26&&numberOfChar>0) {numberOfChar--; nameFP[numberOfChar]=0;} else if(y*5+x==27) {system("cls"); for(int i=numberOfChar; i<8; i++) nameFP[i]=' '; nameFP[8]='\0'; break;} } // Enter
			Sleep(70);
			system("cls");
		}
	}
	else
	{
		while(true)
		{
			cout << "Введите имя второго игрока:" << endl << nameSP << endl << endl;
			for(int i=0; i<6; i++)
			{
				for(int j=0; j<5; j++)
				{
					if(i==y&&j==x) cout << ">"; 
					else cout << " ";
					cout << *(charsForName+i*5+j);
					cout << " ";
				}
				cout << endl;
			}
			getch();
			if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(y>0) y--;} // ^
			if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(y<5) y++; if((x==4&&y==5)||(x==3&&y==5)) x--; if((x==4&&y==5)||(x==3&&y==5)) x--; } // v
			if(GetAsyncKeyState(65)||GetAsyncKeyState(37)) {if(x>0) x--;} // <
			if(GetAsyncKeyState(68)||GetAsyncKeyState(39)) {if(x<4) x++; if(x==4&&y==5) x--; if((x==4&&y==5)||(x==3&&y==5)) x--;} // >
			if(GetAsyncKeyState(13)) {if(y*5+x<26&&numberOfChar<8) {nameSP[numberOfChar]=charsForName[y*5+x][0]; numberOfChar++;} else if(y*5+x==26&&numberOfChar>0) {numberOfChar--; nameSP[numberOfChar]=0;} else if(y*5+x==27) {system("cls"); for(int i=numberOfChar; i<8; i++) nameSP[i]=' '; nameSP[8]='\0'; break;} } // Enter
			Sleep(70);
			system("cls");
		}
	}
}

void openFiles(void)
{
	int buf=0;
	profilesP=fopen("profiles.bin", "r+b");
	if(!profilesP) profilesP=fopen("profiles.bin", "w+b");
	fread(&buf, sizeof(int), 1, profilesP);
	if(buf<=0)
	{
		buf=1;
		askPlayerName(1);
		fseek(profilesP, 0, SEEK_SET);
		fwrite(&buf, sizeof(int), 1, profilesP);
		buf=0;
		fwrite(&buf, sizeof(int), 1, profilesP);
		fwrite(&buf, sizeof(int), 1, profilesP);
		for(int i=0; i<9; i++)
			fwrite(&nameFP[i], sizeof(char), 1, profilesP);
		fclose(profilesP);
		openFiles();
		return;
	}
	else
	{
		profilesAmount=0;
		for(int i=0; i<buf; i++)
		{
			profilesAmount++;
			fread(&playedGames[i], sizeof(int), 1, profilesP);
			fread(&wins[i], sizeof(int), 1, profilesP);
			for(int j=0; j<9; j++)
				fread(&profiles[i][j], sizeof(char), 1, profilesP);
		}
		strncpy(nameFP, profiles[0], 9);
	}
	if(profilesAmount==1) currentProfile=0;
	fclose(profilesP);
}

void saveChanges(void)
{
	profilesP=fopen("profiles.bin", "r+b");
	if(!profilesP) profilesP=fopen("profiles.bin", "w+b");

	if(newProfileB)
	{
		int buf=0;
		profilesAmount++;
		fwrite(&profilesAmount, sizeof(int), 1, profilesP);
		for(int i=0; i<(profilesAmount-1); i++)
		{
			fwrite(&playedGames[i], sizeof(int), 1, profilesP);
			fwrite(&wins[i], sizeof(int), 1, profilesP);
			for(int j=0; j<9; j++)
				fwrite(&profiles[i][j], sizeof(char), 1, profilesP);
		}
		fwrite(&buf, sizeof(int), 1, profilesP);
		fwrite(&buf, sizeof(int), 1, profilesP);
		for(int i=0; i<9; i++)
			fwrite(&nameFP[i], sizeof(char), 1, profilesP);
		newProfileB=false;
	}
	else if(deleteProfileB)
	{
		profilesAmount--;
		fwrite(&profilesAmount, sizeof(int), 1, profilesP);
		for(int i=0; i<(profilesAmount+1); i++)
		{
			if(numberOfDeletedProfile==i) continue;
			fwrite(&playedGames[i], sizeof(int), 1, profilesP);
			fwrite(&wins[i], sizeof(int), 1, profilesP);
			for(int j=0; j<9; j++)
				fwrite(&profiles[i][j], sizeof(char), 1, profilesP);
		}
		deleteProfileB=false;
	}
	else
	{
		fwrite(&profilesAmount, sizeof(int), 1, profilesP);
		for(int i=0; i<profilesAmount; i++)
		{
			fwrite(&playedGames[i], sizeof(int), 1, profilesP);
			fwrite(&wins[i], sizeof(int), 1, profilesP);
			for(int j=0; j<9; j++)
				fwrite(&profiles[i][j], sizeof(char), 1, profilesP);
		}
	}
	fclose(profilesP);
	openFiles();
}

void multGame(void)
{
	askPlayerName(2);
	playerSetShips(fieldFP, 1);
	settedShips4x=0;
	settedShips3x=0;
	settedShips2x=0;
	settedShips1x=0;
	playerSetShips(fieldSP, 2);
	while(true)
	{
		game(1);
		if(scoreFP==20) {drawChars(profiles[currentProfile]); wins[currentProfile]++; cout << endl; sounds(7); drawChars("  WIN"); Sleep(3000); saveLog(profiles[currentProfile], nameSP, true, scoreSP); system("cls"); break;}
		game(2);
		if(scoreSP==20) {drawChars(nameSP); cout << endl; sounds(7); drawChars("  WIN"); Sleep(3000); system("cls"); saveLog(profiles[currentProfile], nameSP, false, scoreFP); break;}
	}
	playedGames[currentProfile]++;
	saveChanges();
}

void computerSetShips(void)
{
	bool exitFromCicle=false;
	int curPos=0;
	while(true)
	{
		ships4xSP.setRotate(rand()%2);
		if(ships4xSP.getRotate())
			ships4xSP.setCoors(rand()%7, rand()%10);
		else ships4xSP.setCoors(rand()%10, rand()%7);
		if(checkPos(fieldSP, ships4xSP.getRotate(), ships4xSP.getCorX(), ships4xSP.getCorY(), 4)) {if(ships4xSP.getRotate()) {for(int i=0; i<4; i++) *(fieldSP+10*ships4xSP.getCorY()+ships4xSP.getCorX()+i)='X';} else {for(int i=0; i<4; i++) *(fieldSP+10*ships4xSP.getCorY()+ships4xSP.getCorX()+10*i)='X';} break;}
	}
	while(true)
	{
		for(int i=curPos; i<2; i++)
		{
			ships3xSP[i].setRotate(rand()%2);
			if(ships3xSP[i].getRotate())
				ships3xSP[i].setCoors(rand()%8, rand()%10);
			else ships3xSP[i].setCoors(rand()%10, rand()%8);
			if(checkPos(fieldSP, ships3xSP[i].getRotate(), ships3xSP[i].getCorX(), ships3xSP[i].getCorY(), 3)) {if(ships3xSP[i].getRotate()) {for(int j=0; j<3; j++) *(fieldSP+10*ships3xSP[i].getCorY()+ships3xSP[i].getCorX()+j)='X';} else {for(int j=0; j<3; j++) *(fieldSP+10*ships3xSP[i].getCorY()+ships3xSP[i].getCorX()+10*j)='X';} curPos++; if(i==1) exitFromCicle=true;}
			else break;
		}
		if(exitFromCicle) {exitFromCicle=false; curPos=0; break;}
	}
	while(true)
	{
		for(int i=curPos; i<3; i++)
		{
			ships2xSP[i].setRotate(rand()%2);
			if(ships2xSP[i].getRotate())
				ships2xSP[i].setCoors(rand()%9, rand()%10);
			else ships2xSP[i].setCoors(rand()%10, rand()%9);
			if(checkPos(fieldSP, ships2xSP[i].getRotate(), ships2xSP[i].getCorX(), ships2xSP[i].getCorY(), 2)) {if(ships2xSP[i].getRotate()) {for(int j=0; j<2; j++) *(fieldSP+10*ships2xSP[i].getCorY()+ships2xSP[i].getCorX()+j)='X';} else {for(int j=0; j<2; j++) *(fieldSP+10*ships2xSP[i].getCorY()+ships2xSP[i].getCorX()+10*j)='X';} curPos++; if(i==2) exitFromCicle=true;}
			else break;
		}
		if(exitFromCicle) {curPos=0; exitFromCicle=false; break;}
	}
	while(true)
	{
		for(int i=curPos; i<4; i++)
		{
			ships1xSP[i].setCoors(rand()%10, rand()%10);
			if(checkPos(fieldSP, false, ships1xSP[i].getCorX(), ships1xSP[i].getCorY(), 1)) {*(fieldSP+10*ships1xSP[i].getCorY()+ships1xSP[i].getCorX())='X'; curPos++; if(i==3) exitFromCicle=true;}
			else break;
		}
		if(exitFromCicle) {exitFromCicle=false; break;}
	}
}

void checkKilledShips(int n)
{
	int x, y;
	y=(n/10); x=(n%10);
	if(x>0&&y>0) if(checkMiss(vFieldSP, x-1, y-1)) *(vFieldSP+10*(y-1)+x-1)=borderChar;
	if(x>0) if(checkMiss(vFieldSP, x-1, y)) *(vFieldSP+10*y+x-1)=borderChar;
	if(x>0&&y<N-1) if(checkMiss(vFieldSP, x-1, y+1)) *(vFieldSP+10*(y+1)+x-1)=borderChar;
	if(y>0) if(checkMiss(vFieldSP, x, y-1)) *(vFieldSP+10*(y-1)+x)=borderChar;
	if(x<N-1&&y>0) if(checkMiss(vFieldSP, x+1, y-1)) *(vFieldSP+10*(y-1)+x+1)=borderChar;
	if(x<N-1) if(checkMiss(vFieldSP, x+1, y)) *(vFieldSP+10*y+x+1)=borderChar;
	if(x<N-1&&y<N-1) if(checkMiss(vFieldSP, x+1, y+1)) *(vFieldSP+10*(y+1)+x+1)=borderChar;
	if(y<N-1) if(checkMiss(vFieldSP, x, y+1)) *(vFieldSP+10*(y+1)+x)=borderChar;
}

void computerCheckKilledShips(void)
{
	for(int i=0; i<100; i++)
		if(vFieldSP[i]=='W') checkKilledShips(i);
}

void gameUI(void)
{
	int x, y, _x, _y, markPos;
	if(gameDificulty==0)
	{
		while(true)
		{
			drawTwoTablesX(vFieldFP, vFieldSP, virtualField, 2, profiles[currentProfile], nameSP);
			while(true) {x=rand()%10; y=rand()%10; if(*(vFieldSP+10*y+x)=='?') {if(*(fieldFP+10*y+x)=='X') {*(vFieldSP+10*y+x)='X'; scoreSP++; message(checkShips(x, y, 2), 2, x, y); Sleep(500); break;} else {*(vFieldSP+10*y+x)='0'; sounds(3); message(0, 2, x, y); Sleep(500); system("cls"); GetAsyncKeyState(13); return;} } }
			system("cls");
			if(scoreSP==20) {clearVirtualField(); break;}
		}
	}
	else if(gameDificulty==1)
	{
		while(true)
		{
			if(hunterMode)
			{
				for(int i=0; i<100; i++)
				{
					if(vFieldSP[i]=='X') {_y=i/10; _x=i%10; break;}
				}
				if(hunterMark==1)  // Vertical
				{
					drawTwoTablesX(vFieldFP, vFieldSP, virtualField, 2, profiles[currentProfile], nameSP);
					x=_x;
					if(_y>0&&*(vFieldSP+10*(_y-1)+_x)=='?') y=_y-1;
					else if(_y<N-1&&*(vFieldSP+10*(_y+1)+_x)=='?') y=_y+1;
					else if(_y<N-2&&*(vFieldSP+10*(_y+1)+_x)=='X'&&*(vFieldSP+10*(_y+2)+_x)=='?') y=_y+2;
					else if(_y<N-2&&*(vFieldSP+10*(_y+1)+_x)=='X'&&*(vFieldSP+10*(_y+2)+_x)=='X'&&*(vFieldSP+10*(_y+3)+_x)=='?') y=_y+3;
					while(true) {if(*(vFieldSP+10*y+x)=='?') {if(*(fieldFP+10*y+x)=='X') {*(vFieldSP+10*y+x)='X'; scoreSP++; if(checkShips(x, y, 2)==1) {message(1, 2, x, y); Sleep(500); computerCheckKilledShips(); hunterMode=false; hunterMark=0; break;} else {message(2, 2, x, y);} Sleep(500); break;} else {*(vFieldSP+10*y+x)='0'; sounds(3); message(0, 2, x, y); Sleep(500); system("cls"); return;} } }
				}
				else if(hunterMark==2)  // Horisontal
				{
					drawTwoTablesX(vFieldFP, vFieldSP, virtualField, 2, profiles[currentProfile], nameSP);
					y=_y;
					if(_x>0&&*(vFieldSP+10*_y+_x-1)=='?') x=_x-1;
					else if(_x<N-1&&*(vFieldSP+10*_y+_x+1)=='?') x=_x+1;
					else if(_x<N-2&&*(vFieldSP+10*_y+_x+1)=='X'&&*(vFieldSP+10*_y+_x+2)=='?') x=_x+2;
					else if(_x<N-2&&*(vFieldSP+10*_y+_x+1)=='X'&&*(vFieldSP+10*_y+_x+2)=='X'&&*(vFieldSP+10*_y+_x+3)=='?') x=_x+3;
					while(true) {if(*(vFieldSP+10*y+x)=='?') {if(*(fieldFP+10*y+x)=='X') {*(vFieldSP+10*y+x)='X'; scoreSP++; if(checkShips(x, y, 2)==1) {message(1, 2, x, y); Sleep(500); computerCheckKilledShips(); hunterMode=false; hunterMark=0; break;} else {message(2, 2, x, y);} Sleep(500); break;} else {*(vFieldSP+10*y+x)='0'; sounds(3); message(0, 2, x, y); Sleep(500); system("cls"); return;} } }
				}
				else  // Unknown
				{
					drawTwoTablesX(vFieldFP, vFieldSP, virtualField, 2, profiles[currentProfile], nameSP);
					if(_y>0&&*(vFieldSP+10*(_y-1)+_x)=='?') {y=_y-1; x=_x; markPos=1;}
					else if(_x>0&&*(vFieldSP+10*_y+_x-1)=='?') {x=_x-1; y=_y; markPos=2;}
					else if(_y<N-1&&*(vFieldSP+10*(_y+1)+_x)=='?') {y=_y+1; x=_x; markPos=1;}
					else if(_x<N-1&&*(vFieldSP+10*_y+_x+1)=='?') {x=_x+1; y=_y; markPos=2;}
					while(true) {if(*(vFieldSP+10*y+x)=='?') {if(*(fieldFP+10*y+x)=='X') {*(vFieldSP+10*y+x)='X'; scoreSP++; if(checkShips(x, y, 2)==1) {message(1, 2, x, y); Sleep(500); computerCheckKilledShips(); hunterMode=false; hunterMark=0; break;} else {hunterMark=markPos; message(2, 2, x, y);} Sleep(500); break;} else {*(vFieldSP+10*y+x)='0'; sounds(3); message(0, 2, x, y); Sleep(500); system("cls"); return;} } }
				}
			}
			else
			{
				drawTwoTablesX(vFieldFP, vFieldSP, virtualField, 2, profiles[currentProfile], nameSP);
				while(true) {x=rand()%10; y=rand()%10; if(*(vFieldSP+10*y+x)=='?') {if(*(fieldFP+10*y+x)=='X') {*(vFieldSP+10*y+x)='X'; scoreSP++; if(checkShips(x, y, 2)==1) {message(1, 2, x, y); Sleep(500); computerCheckKilledShips(); break;} else {hunterMode=true; message(2, 2, x, y);} Sleep(500); break;} else {*(vFieldSP+10*y+x)='0'; sounds(3); message(0, 2, x, y); Sleep(500); system("cls"); return;} } }
			}
			if(scoreSP==20) {system("cls"); clearVirtualField(); break;} 
			system("cls");
		}
	}
}

void singGame(void)
{
	nameSP[0]='C'; nameSP[1]='O'; nameSP[2]='M'; nameSP[3]='P'; nameSP[4]='U'; nameSP[5]='T'; nameSP[6]='E'; nameSP[7]='R'; nameSP[8]='\0';
	playerSetShips(fieldFP, 1);
	computerSetShips();
	sounds(STOP_SOUND);
	while(true)
	{
		game(1);
		if(scoreFP==20) {drawChars(profiles[currentProfile]); wins[currentProfile]++; cout << endl; sounds(7); drawChars("  WIN"); Sleep(3000); system("cls"); saveLog(profiles[currentProfile], nameSP, true, scoreSP); break;}
		gameUI();
		if(scoreSP==20) {drawChars(nameSP); cout << endl; drawChars("  WIN"); Sleep(3000); system("cls"); saveLog(profiles[currentProfile], nameSP, false, scoreFP); break;}
	}
	playedGames[currentProfile]++;
	saveChanges();
}

void newProfile(void)
{
	if(profilesAmount>=5) {cout << "\nВнимание, профилей не может быть больше 5!\n\nУдалите старый профиль чтобы создать новый."; getch(); return;}
	askPlayerName(1);
	newProfileB=true;
	saveChanges();
}

void chooseProfile(void)
{
	int curPos=0;
	while(true)
	{
		printf("\n               Выберите профиль     Количество профилей: %d\n\n\n", profilesAmount);
		for(int i=0; i<profilesAmount+1; i++)
		{
			cout << "       ";
			if(curPos==i) cout << ">>";
			else cout << "  ";
			if(i<profilesAmount) cout << profiles[i] << "  ->  Сыграно игр: " << playedGames[i] << "  Побед: " << wins[i] << endl << endl << endl;
			else cout << "Отмена";
		}
		getch();
		if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(curPos>0) curPos--;} // ^
		if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(curPos<profilesAmount) curPos++;} // v
		if(GetAsyncKeyState(13)) {if(curPos==profilesAmount) return; currentProfile=curPos; break;} // Enter
		Sleep(70);
		system("cls");
	}
}

void deleteProfile(void)
{
	int curPos=0;
	while(true)
	{
		cout << endl << "               Выберите профиль для удаления" << endl << endl << endl;
		for(int i=0; i<profilesAmount+1; i++)
		{
			cout << "       ";
			if(curPos==i) cout << ">>";
			else cout << "  ";
			if(i<profilesAmount) cout << profiles[i] << "  ->  Сыграно игр: " << playedGames[i] << "  Побед: " << wins[i] << endl << endl << endl;
			else cout << "Отмена";
		}
		getch();
		if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(curPos>0) curPos--;} // ^
		if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(curPos<profilesAmount) curPos++;} // v
		if(GetAsyncKeyState(13)) {if(curPos==profilesAmount) return; numberOfDeletedProfile=curPos; if(currentProfile>=(profilesAmount-1)) currentProfile--; deleteProfileB=true; system("cls"); saveChanges(); break;} // Enter
		Sleep(70);
		system("cls");
	}
}

void changeProfile(void)
{
	int curPos=0;
	while(true)
	{
		cout << endl << "               Изменение профиля" << "     Ваш текущий профиль: " << profiles[currentProfile] << endl << endl << endl;
		for(int i=0; i<4; i++)
		{
				cout << "       ";
				if(curPos==i) cout << ">>";
				else cout << "  ";
				cout << changeProfileStrings[i] << endl << endl << endl;
		}
		getch();
		if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(curPos>0) curPos--;} // ^
		if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(curPos<3) curPos++;} // v
		if(GetAsyncKeyState(13)) 
		{
			switch(curPos)
			{
				case 0: {system("cls"); newProfile(); break;}
				case 1: {system("cls"); chooseProfile(); break;}
				case 2: {system("cls"); deleteProfile(); break;}
				case 3: {return;}
			}
		} // Enter
		//Sleep(70);
		system("cls");
	}
}

void options(void)
{
	int curPos=0;
	while(true)
	{
		cout << endl << "               Настройки" << endl << endl << endl;
		cout << "       "; if(curPos==0) cout << ">>"; else cout << "  "; cout << "Сложность:   "; if(gameDificulty>0) cout << "< "; else cout << "  "; cout << dificultyStrings[gameDificulty]; if(gameDificulty<1) cout << " >"; cout << endl << endl << endl;
		cout << "       "; if(curPos==1) cout << ">>"; else cout << "  "; cout << "Тип разметки поля:   "; if(currentMarkField>0) cout << "< "; else cout << "  "; for(int i=0; i<10; i++) cout << fieldChars[currentMarkField][i] << " "; if(currentMarkField<17) cout << " >"; cout << endl << endl << endl;
		cout << "       "; if(curPos==2) cout << ">>"; else cout << "  "; cout << "Назад"; cout << endl << endl << endl;
		getch();
		if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(curPos>0) curPos--;} // ^
		if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(curPos<2) curPos++;} // v
		if(GetAsyncKeyState(65)||GetAsyncKeyState(37)) {if(curPos==1&&currentMarkField>0) currentMarkField--; if(curPos==0&&gameDificulty>0) gameDificulty--;} // <
		if(GetAsyncKeyState(68)||GetAsyncKeyState(39)) {if(curPos==1&&currentMarkField<17) currentMarkField++; if(curPos==0&&gameDificulty<1) gameDificulty++;} // >
		if(GetAsyncKeyState(13)) {if(curPos==2) return;} // Enter
		Sleep(70);
		system("cls");
	}
}

void statistic(void)
{
	while(true)
	{
		cout << endl << "               Статистика" << endl << endl << endl;
		cout << "         Имя профиля  : " << profiles[currentProfile] << endl << endl << endl;
		cout << "         Сыграно игр  : "; printf("%d\n\n\n", playedGames[currentProfile]);
		cout << "         Побед        : "; printf("%d\n\n\n", wins[currentProfile]);
		cout << "         Поражений    : "; printf("%d\n\n\n", playedGames[currentProfile]-wins[currentProfile]);
		cout << "         Процент побед: "; if(playedGames[currentProfile]) printf("%g%%\n\n\n", double(wins[currentProfile])/(playedGames[currentProfile])*100); else cout << "-\n\n\n";
		cout << "       >>Назад";
		getch();
		if(GetAsyncKeyState(13)) {return;} // Enter
		Sleep(70);
		system("cls");
	}
}

int menu(void)
{
	sounds(6);
	time(&start);
	int curPos=0;
	if(currentProfile==-1)
	{
		while(true)
		{
			printf("               Выберите профиль     Количество профилей: %d\n\n\n", profilesAmount);
			for(int i=0; i<profilesAmount; i++)
			{
				cout << "       ";
				if(curPos==i) cout << ">>";
				else cout << "  ";
				cout << profiles[i] << "  -> Сыграно игр: " << playedGames[i] << "  Побед: " << wins[i] << endl << endl << endl;
			}
			getch();
			if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(curPos>0) curPos--;} // ^
			if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(curPos<profilesAmount-1) curPos++;} // v
			if(GetAsyncKeyState(13)) {currentProfile=curPos; system("cls"); GetAsyncKeyState(13); break;} // Enter
			Sleep(70);
			time(&finish);
			if(difftime(finish, start)>=199) {time(&start); sounds(6);}
			system("cls");
		}
	}
	else
	{
		while(true)
		{
			cout << endl << "                                         Добро пожаловать, " << profiles[currentProfile] << endl << endl << endl;
			for(int i=0; i<6; i++)
			{
				cout << "       ";
				if(curPos==i) cout << ">>";
				else cout << "  ";
				cout << menuStrings[i] << endl << endl << endl;
			}
			getch();
			if(GetAsyncKeyState(87)||GetAsyncKeyState(38)) {if(curPos>0) curPos--;} // ^
			if(GetAsyncKeyState(83)||GetAsyncKeyState(40)) {if(curPos<5) curPos++;} // v
			if(GetAsyncKeyState(13)) {
				switch(curPos)
				{
					case 0: {system("cls"); sounds(STOP_SOUND); return GAME_SING;}
					case 1: {system("cls"); sounds(STOP_SOUND); return GAME_MULT;}
					case 2: {system("cls"); changeProfile(); curPos=0; break;}
					case 3: {system("cls"); options(); curPos=0; break;}
					case 4: {system("cls"); statistic(); curPos=0; break;}
					case 5: {sounds(STOP_SOUND); return GAME_EXIT;}
				}
			} // Enter
			Sleep(70);
			time(&finish);
			if(difftime(finish, start)>=199) {time(&start); sounds(6);}
			system("cls");
		}
	}
	return 0;
}

void drawLogo(void)
{
	time(&start);
	sounds(0);
	for(int i=1; true; i++)
	{
		cout<<"\n\n\n";
		drawChars("WARSHIPS");
		cout << "\n\n\n\n\n\n\n";
		if(i%2) cout << "                            Нажмите любую клавишу." << endl;
		else cout << endl;
		if(kbhit()) break;
		if(i>=100) i=0;
		Sleep(700);
		time(&finish);
		if(difftime(finish, start)>=235) {time(&start); sounds(0);}
		system("cls");
	}
	sounds(STOP_SOUND);
	//sounds(1);
	GetAsyncKeyState(13);
	system("cls");
}

void developerLogo(void)
{
	sounds(8);
	cout << "\n\n\n";
	for(int i=0; i<13; i++)
		cout << developerStrings[i];
	Sleep(5000);
	system("cls");
}

int main(void)
{
	srand(time(0));
	SetConsoleTitleW(title[rand()%4]);
	setlocale(LC_CTYPE, "rus");



	run(Bit1 | Bit2 | Bit10 | Bit22 | Bit17 | Bit32);
	getch();
	developerLogo();
	drawLogo();
	openFiles(); 

	while(stage!=GAME_EXIT)
	{
		switch(stage)
		{
			case GAME_MENU: {stage=menu(); break;}
			case GAME_SING: {init(); singGame(); reinit(); stage=GAME_MENU; break;}
		    case GAME_MULT: {init(); multGame(); reinit(); stage=GAME_MENU; break;}
			case GAME_EXIT: {return 0;}
		}
	}
}