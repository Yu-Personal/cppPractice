#include<iostream>;
#include<string>;
#include<vector>;
#include<stdio.h>
#include <string.h>


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
//if (values.size() % 2 == 1) {
//	std::cout << values[(values.size() / 2)];
//}

//E3.21
//vector<int> v1;
//vector<int> v2(10);
//vector<int> v3(10, 42);
//vector<int> v4{ 10 };
//vector<int> v5{ 10, 42 };
//vector<string> v6{ 10 };
//vector<string> v7{ 10, "hi" };
//std::cout << v1.size() << std::endl;
//for (auto it = v1.cbegin(); it != v1.cend(); ++it) {
//	std::cout << *it << " ";
//}
//std::cout << std::endl;
//std::cout << v2.size() << std::endl;
//for (auto it = v2.cbegin(); it != v2.cend(); ++it) {
//	std::cout << *it << " ";
//}
//std::cout << std::endl;
//std::cout << v3.size() << std::endl;
//for (auto it = v3.cbegin(); it != v3.cend(); ++it) {
//	std::cout << *it << " ";
//}
//std::cout << std::endl;
//std::cout << v4.size() << std::endl;
//for (auto it = v4.cbegin(); it != v4.cend(); ++it) {
//	std::cout << *it << " ";
//}
//std::cout << std::endl;
//std::cout << v5.size() << std::endl;
//for (auto it = v5.cbegin(); it != v5.cend(); ++it) {
//	std::cout << *it << " ";
//}
//std::cout << std::endl;
//std::cout << v6.size() << std::endl;
//for (auto it = v6.cbegin(); it != v6.cend(); ++it) {
//	std::cout << *it << " ";
//}
//std::cout << std::endl;
//std::cout << v7.size() << std::endl;
//for (auto it = v7.cbegin(); it != v7.cend(); ++it) {
//	std::cout << *it << " ";
//}
//std::cout << std::endl;

//E3.22
//vector<string> text;
//std::string phrase;
//while (std::getline(std::cin, phrase)) {
//	text.push_back(phrase);
//}
//std::cout << "Orignal print: " << std::endl;
//for (auto it = text.cbegin(); it != text.cend(); ++it) {
//	std::cout << *it << std::endl;
//}
//std::cout << "New print: " << std::endl;
//for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
//	for (auto& i : *it) {
//		i = std::toupper(i);
//	}
//}
//for (auto it = text.cbegin(); it != text.cend(); ++it) {
//	std::cout << *it << std::endl;
//}

//E3.23
//vector<int> ivec;
//for (int i = 0; i < 10; ++i) {
//	ivec.push_back(rand() % 10);
//}
//for (auto it : ivec) {
//	std::cout << it << " ";
//}
//std::cout << std::endl;
//for (auto it = ivec.begin(); it != ivec.end(); ++it) {
//	*it = 2 * *it;
//}
//for (auto it : ivec) {
//	std::cout << it << " ";
//}

//E3.24
//int integers;
//std::vector<int> vector;
//while (cin >> integers) {
//	vector.push_back(integers);
//}
//auto beg = vector.begin();
//auto end = vector.end();
//while (beg != end - 1) {
//	std::cout << *beg + *(beg + 1) << " ";
//	beg += 1;
//}
//std::cout << std::endl;
//beg = vector.begin();
//end = vector.end();
//while (beg < end) {
//	std::cout << *beg + *(end-1) << " ";
//	beg += 1;
//	end -= 1;
//}

//E3.25
//Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104) using iterators instead of subscripts.
//vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
//vector<unsigned> scores1(11, 0);
//unsigned grade;
//int bucketNumber;
//auto beg = scores1.begin();
//while (cin >> grade) {      // read the grades
//	if (grade <= 100) {       // handle only valid grades
//		++scores[grade / 10]; // increment the counter for the current cluster
//	}
//
//	bucketNumber = grade / 10;
//	if (bucketNumber < 11) {
//		*(beg + bucketNumber) += 1;
//	}
//}
//std::cout << "original code using subscripts: ";
//for (auto i : scores) {
//	std::cout << i << " ";
//}
//std::cout << std::endl << "new code using iterators: ";
//for (auto i : scores1) {
//	std::cout << i << " ";
//}

//E3.26
//Exercise 3.26 : In the binary search program on page 112, why did we write mid = beg + (end - beg) / 2; instead of mid = (beg + end) / 2; ?
//We can not add two iterators, but we can add an "iterator" and "difference_type".

//E3.31
//constexpr size_t array_size = 10;
//int array[array_size];
//for (int i = 0; i < array_size; i++) {
//	array[i] = i;
//}
//for (auto& i : array) {
//	std::cout << i << " ";
//}

//E3.32
//constexpr size_t array_size = 10;
//int array[array_size];
//for (int i = 0; i < array_size; i++) {
//	array[i] = i;
//}
//int array1[array_size];
//for (int i = 0; i < array_size; i++) {
//	array1[i] = array[i];
//}
//for (auto& i : array) {
//	std::cout << i << " ";
//}
//std::cout << std::endl;
//for (auto& i : array1) {
//	std::cout << i << " ";
//}
//std::cout << std::endl;
//vector<int> array2;
//for (int i = 0; i < array_size; i++) {
//	array2.push_back(i);
//}
//for (auto& i : array2) {
//	std::cout << i << " ";
//}

//E3.35
//constexpr size_t array_size = 10;
//int array[array_size];
//int* beg = begin(array), * last = end(array);
//while (beg != last) {
//	*beg = 0;
//	beg++;
//}
//for (auto& i : array) {
//	std::cout << i << " ";
//}
//std::cout << std::endl;
//

//E3.36
//constexpr size_t array_size1 = 10;
//constexpr size_t array_size2 = 10;
//int array1[array_size1] = {1};
//int array2[array_size2] = {};
//bool equal = true;
//if (array_size1 != array_size2) {
//	std::cout << "Both arrays are NOT the same.";
//}
//else{
//	for (size_t i = 0; i < array_size1; i++) {
//		if (array1[i] != array2[i]) {
//			equal = false;
//			std::cout << "Both arrays are NOT the same.";
//			break;
//		}
//	}
//}
//if (equal == true) {
//	std::cout << "Both arrays are the same.";
//}
//std::cout << std::endl;
//vector<int> vec1 = {1};
//vector<int> vec2 = {};
//if (vec1 == vec2) {
//	std::cout << "Both vectors are the same.";
//}
//else std::cout << "Both vectors are NOT the same.";

//E3.39
//std::string word1 = "Wei";
//std::string word2 = "Wei";
//if (word1 == word2) {
//	std::cout << "Word1 and Word2 are the same.";
//}
//else if (word1 < word2) {
//	std::cout << "Word1 is less than Word2.";
//}
//else{
//	std::cout << "Word2 is less than Word1.";
//}
//std::cout << std::endl;
//char word3[] = { 'W', 'e', 'i','\0'};
//char word4[] = { 'W', 'e', 'i','\0'};
//int answer = strcmp(word3, word4);
//if (answer == 0) {
//	std::cout << "Word3 and Word4 are the same.";
//}
//else if (answer < 0) {
//	std::cout << "Word3 is less than Word4.";
//}
//else {
//	std::cout << "Word4 is less than Word3.";
//}

//E3.40
//char word1[] = "Kevin";
//char word2[] = "Wei";
//char word3[9];
//strcpy_s(word3, word1);
//std::cout << word3 << std::endl;
//strcat_s(word3, word2);
//std::cout << word3;

int main() {

	


	

	return 0;
}