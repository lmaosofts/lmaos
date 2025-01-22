#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include "colors.h"
#define START "\x1b[0m\x1b[33m\\ ☺ /\x1b[0m lmaos package manager\x1b[33m\n ×-× \x1b[0m   made by \x1b[3mlmaoso\x1b[41;1m\x1b[37;1mft\x1b[0m\x1b[3ms\x1b[0m\x1b[33m\n +-+ \x1b[0m \n"

#ifdef _WIN32
#error "h"
char* pkgmgr = "winget";
#else
char* pkgmgr = "apt";
#endif

// bool turnOffANSI = false;

/*
	// WINDOWS BULLSHIT INCOMING
	#ifdef _WIN32
	#include <windows.h> // include wondows
	bool canANSI() {
		HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
		DWORD mode;
		if (GetConsoleMode(hwnd,&mode)) {
			return(bool)(mode&ENABLE_VIRTUAL_TERMINAL_PROCESSING);
		}
		return false;
	}
	
	void enableANSI() {
		turnOffANSI = true;
		HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
		DWORD mode;
		GetConsoleMode(hwnd,&mode);
		SetConsoleMode(hwnd,mode|ENABLE_VIRTUAL_TERMINAL_PROCESSING);
	}
	
	void disableANSI() {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		DWORD mode;
		GetConsoleMode(hConsole, &mode);
		SetConsoleMode(hConsole, mode & ~ENABLE_VIRTUAL_TERMINAL_PROCESSING);
	}
	#else
	bool canANSI() {
		return true;
	}
	
	void enableANSI() {}
	
	void disableANSI() {}
	#endif
	// no more windows bullshit, yipe!
*/

// fuck windows console tbh

int iprintf(const char * __restrict f, ...) { // int printf(const char * __restrict, ...);
	printf("\x20\x20\x20\x20\x20\x20");
	va_list args;
	va_start(args, f);
	int res = vprintf(f, args);
	va_end(args);
	return res;
}

int main(int ac, char* args[]) {
	/*
		if (!(canANSI())) {
			enableANSI();
		}
	*/
	printf(START);
	if (ac==1) {
		char *multiline_string[] = {
"hallo welkommen to lmaos, the lmaosofts winget!",
"in C using an array of strings.",
"Each line can be accessed individually."
		};
		for (int i = 0; i < 3; i++) {
			iprintf("%s\n", multiline_string[i]);
		}
		return 0;
	}
	iprintf("");
	// if (turnOffANSI) disableANSI();
	return 0;
}