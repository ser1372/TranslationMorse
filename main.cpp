#include <iostream>
#include <string>


const char* symbols(char a)
{
    if (a == 'a' || a == 'A') return ".-";
	if (a == 'b' || a == 'B') return "-...";
	if (a == 'c' || a == 'C') return "-.-.";
	if (a == 'd' || a == 'D') return "-..";
	if (a == 'e' || a == 'E') return ".";
	if (a == 'f' || a == 'F') return "..-.";
	if (a == 'g' || a == 'G') return "--.";
	if (a == 'h' || a == 'H') return "....";
	if (a == 'i' || a == 'I') return "..";
	if (a == 'j' || a == 'J') return ".---";
	if (a == 'k' || a == 'K') return "-.-";
	if (a == 'l' || a == 'L') return ".-..";
	if (a == 'm' || a == 'M') return "--";
	if (a == 'n' || a == 'N') return "-.";
	if (a == 'o' || a == 'O') return "---";
	if (a == 'p' || a == 'P') return ".--.";
	if (a == 'q' || a == 'Q') return "--.-";
	if (a == 'r' || a == 'R') return ".-.";
	if (a == 's' || a == 'S') return "...";
	if (a == 't' || a == 'T') return "-";
	if (a == 'u' || a == 'U') return "..-";
	if (a == 'v' || a == 'V') return "...-";
	if (a == 'w' || a == 'W') return ".--";
	if (a == 'x' || a == 'X') return "-..-";
	if (a == 'y' || a == 'Y') return "-.--";
	if (a == 'z' || a == 'Z') return "--..";
	if (a == ' ') return "|";


}




int main()
{
    
    
    std::string mes;
	
    std::cout << "Enter a word:";
    std::cin >> mes;


    std::string codedMes;


    for(int i = 0; i < mes.size();i++)
    {

        codedMes += symbols(mes[i]);
        codedMes += " ";
    }


    std::cout << "Code asbuka:" << codedMes << std::endl;
    

    system("pause");


}