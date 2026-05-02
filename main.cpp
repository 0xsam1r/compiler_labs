#include <cctype>
#include <cstdio>
#include <iostream>

using namespace std;

int lookahead = getchar();

void error() {
	cout << "Syntax Error\n";
	exit(1);
}

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

void rest() {
	while (true) {
		if (lookahead == '+') {
			match(lookahead);
			term();
			putchar(lookahead);
		}
		else if (lookahead == '-') {
			match(lookahead);
			term();
			putchar(lookahead);
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
