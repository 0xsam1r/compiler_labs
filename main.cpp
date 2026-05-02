#include <iostream>
void term() {std::cout<<"this is a term\n";}
void rest() {std::cout<<"this is a rest of code\n";}

void expr(){
	term();
	rest();
}

int main() {
	expr();
}
