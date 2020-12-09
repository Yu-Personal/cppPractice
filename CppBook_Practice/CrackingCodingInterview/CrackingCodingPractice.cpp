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


int main() {



	return 0;
}