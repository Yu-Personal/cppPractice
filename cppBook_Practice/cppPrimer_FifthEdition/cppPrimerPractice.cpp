#include<iostream>;
using namespace std;
//#include<vector>;
#include<string>;


//c++ Primer 3.2
//std::string line;
//while (std::getline(cin, line)) {
//	std::cout << line << endl;
//	if (line == "exit") {
//		break;
//	}
//}
//
//std::cout << "Moving on to reading only word." << endl;
//std::string phrase;
//while (cin >> line) {
//	std::cout << line << endl;
//	phrase += " " + line;
//	std::cout << phrase << std::endl;
//	if (line == "exit") {
//		break;
//	}
//}
//std::cout << "Done!";

//c++ Primer 3.4
//string input1;
//string input2;
//std::cout << "Input 1 please: "; std::cin >> input1; std::cout << endl;
//std::cout << "Input 2 please: "; std::cin >> input2; std::cout << endl;
//if (input1 == input2) std::cout << "They are the same string." << std::endl;
//else {
//	if (input1 > input2) std::cout << "Input1 is greater." << std::endl;
//	else std::cout << "Input2 is greater." << std::endl;
//}
//if (input1.size() == input2.size()) std::cout << "They are the same length." << std::endl;
//else {
//	if (input1.size() > input2.size()) std::cout << "Input1 is longer." << std::endl;
//	else std::cout << "Input2 is longer." << std::endl;
//}
int main() {
/*
//E3.5
	//string word;
	//string phrase;
	//string spacePhrase;
	//while (std::cin >> word) {
	//	phrase += word;
	//	spacePhrase += word + " ";
	//}
	//std::cout << phrase << std::endl;
	//std::cout << spacePhrase << std::endl;

//E3.6
string word;
cin >> word;
for (auto &c : word){
	c = 'X';
}
cout << word << endl;

//E3.7
string word;
cin >> word;
for (char &c : word){
	c = 'X';
}
cout << word << endl;
*/
//E3.8
//while loop
string word, temp;
cin >> word;
temp = word;
int n=0;
while (n < word.size()) {
	word[n] = 'X';
	n++;
	cout << n <<endl;
}
cout << "while: " << word << endl;

//tranditional for loop
word = temp;
for (int i = 0; i < word.size(); i++) {
	word[i] = 'X';
	cout << i << endl;

}
cout << "tranditional for: " << word << endl;
	return 0;

}