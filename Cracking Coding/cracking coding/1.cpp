#include<iostream>;
using namespace std;
#include<vector>;
#include<string>;
//https://github.com/careercup/CtCI-6th-Edition-cpp

string uniqueCharacters(string input) { //1.1
	for (int i = 0; i < input.size()-1; i++) {
		for (int j = i+1; j < input.size(); j++) {
			if (input.at(i) == input.at(j)) {
				return "False";
			}
		}
	}
	return "True";
}

bool uniqueCharactersBool(string input) { //1.1
	if (input.size() > 128) return false;
	vector<bool> asciiTable(128);
	int intInput;
	for (int i = 0; i < input.size(); i++) {
		intInput = input.at(i);
		if (asciiTable.at(intInput)) {
			return false;
		}
		else asciiTable.at(intInput) = true;
	}
	return true;
}

bool permutation(string input1, string input2) { //1.2
	if (input1.size() != input2.size() || input1 == input2) return false;
	for (int i = 0; i < input1.size(); i++) {
		for (int j = 0; j < input2.size(); j++) {
			if (input1.at(i) == input2.at(j)) {
				input2.erase(input2.begin()+j);
				j--;
				break;
			}
		}
		//for (int k = 0; k < input2.size(); k++) {
			//cout << input2.at(k);
		//}
		//cout << endl;
	}
	//cout<<input2.size();
	if (input2.size()) return false;
	else return true;
	if (input2.size() == 0) return true;
	else return false;
}

//string URLify(string input) {
//	string output;
//	for (int i = 0; input.size(); i++) {
//		if (input.at(i) == ' ') {
//			output.push_back('0');
//		}
//		else output.push_back('2');
//	}
//	return input;
//}

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

	string word;
	string phrase;
	string spacePhrase;
	while (std::cin >> word) {
		phrase += word;
		spacePhrase += word + " ";
	}
	std::cout << phrase << std::endl;
	std::cout << spacePhrase << std::endl;

	return 0;
}