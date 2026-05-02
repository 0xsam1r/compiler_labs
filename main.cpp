#include <cctype>
#include <cstdio>
#include <iostream>

using namespace std;

int lookahead = getchar();

void error() {
	cout << "Syntax Error\n";
	exit(1);
}

// ------- moves to the next charcter -----
void match(int t) {
	if (lookahead == t )
		lookahead = getchar();
	else
		error();
}

void term() {
	if(isdigit(lookahead))
	{
		putchar(lookahead);
		match(lookahead);
	}
	else 
		error();

}

// --------- reading all expresions ----------------------------------------------------------
void rest() {
	while (true) {
		if (lookahead == '+') {
			match('+');
			term();
			putchar('+');
		}
		else if (lookahead == '-') {
			match('-');
			term();
			putchar('-');
		}
		else 
			break;
	}
}

void expr(){
	term();
	rest();
}

int main() {
	cout<<"Start Parsing now...\n";
	expr();
}
