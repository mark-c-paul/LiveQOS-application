#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{ 
    for (int i=1; i<argc; ++i){
        cout << argv[i] << " -> ";
    	std::string str = argv[i];
   	for(int j=1; j<str.length(); j++){
	   if(str[j] + str[0]-48 <= 122) cout << static_cast<char>(str[j] + str[0]-48); //no wrap around
	   else cout << static_cast<char>((str[j] + str[0]-48)-26);			//wrap around
	}
	cout << std::endl;
    }
    return 0; 
}
