#include<iostream>;
using namespace std;
//#include<vector>;
#include<string>;
#include<vector>;

//E3.2
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

//E3.4
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
//string word;
//cin >> word;
//for (auto &c : word){
//	c = 'X';
//}
//cout << word << endl;

//E3.7
//string word;
//cin >> word;
//for (char &c : word){
//	c = 'X';
//}
//cout << word << endl;

//E3.8
//while loop
//string word, temp;
//cin >> word;
//temp = word;
//int n=0;
//while (n < word.size()) {
//	word[n] = 'X';
//	n++;
//	cout << n <<endl;
//}
//cout << "while: " << word << endl;
//
////tranditional for loop
//word = temp;
//for (int i = 0; i < word.size(); i++) {
//	word[i] = 'X';
//	cout << i << endl;
//
//}
//cout << "tranditional for: " << word << endl;
//
//
//string s;
//cout << s[0] << "s is:" << s << ";haha"<< endl; //doesn't give error but s will not cout anything
//cout << s[1] << "s1 is:" << s << ";haha"<< endl; //

//E3.9 It is invalid because of undefined behavior but it won't give an error if you run it . s is not initiated.

//E3.10
//string phrase, newPhrase;
//int i=0;
//getline(cin, phrase);
//for (int n=0; n < phrase.size(); n++){
//	//if (!ispunct(phrase[n])) newPhrase += phrase[n]; //Method 1
//	if (ispunct(phrase[n])) {
//		phrase.erase(phrase.begin()+n);
//		n--;
//	} //Method 2
//	cout << n << endl;
//}
//	cout << phrase << ":is phrase" << endl << newPhrase << ": is newphrase" <<endl;

//E3.13
//vector <int> v1;
//vector <int> v2(10);
//vector<int> v3(10, 42);
//vector<int> v4{ 10 };
//vector<int> v5{ 10, 42 };
//vector<string> v6{ 10 };
//vector<string> v7{ 10, "hi" };

//E3.14
//vector<int> inputVector;
//int value;
//while (cin >> value) {
//	if (value == -1) {
//		break;
//	}
//	inputVector.push_back(value);
//}
//for (auto i: inputVector) {
//	std::cout << i << std::endl;
//}

//E3.15
//vector<std::string> inputVector;
//std::string value;
//while (cin >> value) {
//	if (value == "exit") {
//		break;
//	}
//	inputVector.push_back(value);
//}
//
//for (auto i: inputVector) {
//	std::cout << i << std::endl;
//}

//E3.16
//vector<int> v1;
//vector<int> v2(10);
//vector<int> v3(10, 42);
//vector<int> v4{ 10 };
//vector<int> v5{ 10, 42 };
//vector<string> v6{ 10 };
//vector<string> v7{ 10, "hi" };
//std::cout << v1.size() << std::endl;
//for (auto i : v1)
//	std::cout << i << " ";
//std::cout << std::endl;
//std::cout << v2.size() << std::endl;
//for (auto i : v2)
//	std::cout << i << " ";
//std::cout << std::endl;
//std::cout << v3.size() << std::endl;
//for (auto i : v3)
//	std::cout << i << " ";
//std::cout << std::endl;
//std::cout << v4.size() << std::endl;
//for (auto i : v4)
//	std::cout << i << " ";
//std::cout << std::endl;
//std::cout << v5.size() << std::endl;
//for (auto i : v5)
//	std::cout << i << " ";
//std::cout << std::endl;
//std::cout << v6.size() << std::endl;
//for (auto i : v6)
//	std::cout << i << " ";
//std::cout << std::endl;
//std::cout << v7.size() << std::endl;
//for (auto i : v7)
//	std::cout << i << " ";
//std::cout << std::endl;

////E3.17
//std::string word;
//vector<std::string> words;
//while (std::cin >> word) {
//	words.push_back(word);
//	if (word == "exit") {
//		break;
//	}
//}
//for (auto &c : words) {
//	for (auto &i : c) {
//		i = toupper(i);
//	}
//}
//for (int i = 0; i < words.size(); i++) {
//	std::cout << words[i] << " ";
//	if (!((i+1) % 8)) {
//		std::cout << std::endl;
//	}
//}

//E3.18
//vector<int> ivec;
//ivec[0] = 42; // This is not legal because vectors can not be initialized using []
////legal ways
//vector<int> ivec = { 42 };
//vector<int> ivec{ 42 };
//vector<int> ivec;
//ivec.push_back(42);

//E3.19
//vector<int> ivec1(10,42);
//vector<int> ivec2{42,42,42,42,42,42,42,42,42,42 };
//vector<int> ivec3 = { 42,42,42,42,42,42,42,42,42,42 };
//std::cout << "test1" << std::endl;
//for (auto i : ivec1) std::cout << i << " ";
//std::cout << std::endl << "test2" << std::endl;
//for (auto i : ivec2) std::cout << i << " ";
//std::cout << std::endl << "test3" << std::endl;
//for (auto i : ivec3) std::cout << i << " ";

//E3.20
//int val;
//vector<int> values;
//while (cin >> val) {
//	values.push_back(val);
//}
//std::cout << "Adding adjacent values: ";
//for (decltype(values.size()) i = 0; i < values.size()-1; i++) {
//	std::cout << values[i] + values[i + 1] << " ";
//}
//std::cout << std::endl << "Sum of the first and last elements and so on: ";
//for (decltype(values.size()) i = 0; i < values.size()/2; i++) {
//	std::cout << values[i] + values[values.size() - i - 1] << " ";
//}

int main() {







	return 0;
}