#include<iostream>;
#include<string>;
#include<vector>;
#include<stdio.h>;
#include<string.h>;
#include<stdexcept>;
#include"Chapter6.h";


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
//int* beg = std::begin(array), * last = std::end(array);
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

//E3.41
//int array[] = { 0,1,2,3,4 };
//std::vector<int> ivec(std::begin(array), std::end(array));
//for (auto& i : ivec) std::cout << i << " ";

//E3.42
//std::vector<int> ivec = { 0,1,2,3,4 };
//int array[5];
//for (int i = 0; i < ivec.size(); i++) {
//	array[i] = ivec[i];
//}
//for (auto& i : array) std::cout << i << " ";

//E3.43
//int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//for (int (&i)[4] : ia) {
//	for (int j: i) {
//		std::cout << j << " ";
//	}
//	std::cout << std::endl;
//}
//for (size_t i = 0; i < 3; ++i) {
//	for (size_t j = 0; j < 4; ++j) {
//		std::cout << ia[i][j] << " ";
//	}
//	std::cout << std::endl;
//}
//for (int (*i)[4] = ia; i < ia + 3; ++i) {
//	for (int *j = *i; j < *i + 4; ++j) {
//		std::cout << *j << " ";
//	}
//	std::cout << std::endl;
//}
//for (int (*i)[4] = std::begin(ia); i < std::end(ia); ++i) {
//	for (int *j = std::begin(*i); j < std::end(*i); ++j) {
//		std::cout<<*j<<" ";
//	}
//	std::cout << std::endl;
//}

//E3.44
//using int_array = int[4];
//using myint = int;
//using mysize_t = size_t;
//int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//for (int_array &i : ia) {
//	for (myint j : i) {
//		std::cout << j << " ";
//	}
//	std::cout << std::endl;
//}
//for (mysize_t i = 0; i < 3; ++i) {
//	for (mysize_t j = 0; j < 4; ++j) {
//		std::cout << ia[i][j] << " ";
//	}
//	std::cout << std::endl;
//}
//for (int_array (*i) = ia; i < ia + 3; ++i) {
//	for (myint* j = *i; j < *i + 4; ++j) {
//		std::cout << *j << " ";
//	}
//	std::cout << std::endl;
//}
//for (int_array (*i) = std::begin(ia); i < std::end(ia); ++i) {
//	for (myint* j = std::begin(*i); j < std::end(*i); ++j) {
//		std::cout << *j << " ";
//	}
//	std::cout << std::endl;
//}

//E3.45
//int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//for (auto &i : ia) {
//	for (auto j : i) {
//		std::cout << j << " ";
//	}
//	std::cout << std::endl;
//}
//for (auto i = 0; i < 3; ++i) {
//	for (auto j = 0; j < 4; ++j) {
//		std::cout << ia[i][j] << " ";
//	}
//	std::cout << std::endl;
//}
//for (auto (*i) = ia; i < ia + 3; ++i) {
//	for (auto* j = *i; j < *i + 4; ++j) {
//		std::cout << *j << " ";
//	}
//	std::cout << std::endl;
//}
//for (auto (*i) = std::begin(ia); i < std::end(ia); ++i) {
//	for (auto* j = std::begin(*i); j < std::end(*i); ++j) {
//		std::cout << *j << " ";
//	}
//	std::cout << std::endl;
//}

////E4.1
//105

////E4.2
//* (vec.begin())
//((* (vec.begin()))+1)

//E4.3
//I find that this is an acceptable trade-off.
//I believe that it is up to the programmer to make the statement explicit or not.
//If the programmer is not explicit about their code then they do not care of the outcome and so it is reflected in the output.

//E4.4
//std::cout << "Without parentheses: " << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << std::endl;
//std::cout << "With parentheses: " << ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2) << std::endl;

//E4.5
//std::cout << "(a) " << -30 * 3 + 21 / 5 << std::endl; // -86
//std::cout << "(b) " << -30 + 3 * 21 / 5 << std::endl; // -18
//std::cout << "(c) " << 30 / 3 * 21 % 5 << std::endl; // 0
//std::cout << "(d) " << -30 / 3 * 21 % 4 << std::endl; // -2

//E4.6
//int i;
//std::cin >> i;
//if (!(i % 2)) std::cout << "Even";
//else std::cout << "Odd";

//E4.7
//Overflow is when the physical memory of the computer can not hold he correct result of the expression.

//E4.10
//int input;
//while (std::cin >> input && input != 42) {
	//std::cout << input << std::endl;
//}

//E4.11
//int a, b, c, d;
//std::cin >> a >> b >> c >> d;
//if (a > b && b > c && c > d) {
	//std::cout << "Success" << std::endl;
//}
//else std::cout << "Failure" << std::endl;

//E4.21
//std::vector<int> ivec = {1,2,3,4,5,6,7,9};
//for (auto i : ivec) {
	//std::cout << i << " ";
//}
//std::cout << std::endl;
//for (auto &i : ivec) {
	//(i%2) ? i *= 2 : i = i;
//}
//for (auto i : ivec) {
	//std::cout << i << " ";
//}

//E4.22
//int grade;
//std::string finalgrade;
//while (std::cin >> grade) {
//	finalgrade = (grade > 90) ? "high pass"	: (grade > 75) ? "pass": (grade < 60) ? "fail" : "low pass";
//	std::cout << finalgrade << std::endl;
//}
//while (std::cin >> grade) {
//	if (grade > 90) {
//		finalgrade = "high pass";
//	}
//	else if (grade > 75) {
//		finalgrade = "pass";
//	}
//	else if (grade > 59) {
//		finalgrade = "low pass";
//	}
//	else finalgrade = "fail";
//	std::cout << finalgrade << std::endl;
//}

//E4.23
//std::string s = "word";
//std::string pl = (((s + (s[s.size() - 1])) == 's') ? "" : "s";

//E4.25
//01110001
//~q = 10001110
//~'q' << 6 = 1110 0011 1000 0000

//E4.26
// We would only have 16 bits or 16 students

//E4.27
//a. 0011 & 0111 = 0011
//b. 0011 | 0111 = 0111
//c. 0011 && 0111 = 1
//d. 0011 || 0111 = 1

//E4.28
//std::cout << sizeof(bool) << std::endl;
//std::cout << sizeof(char) << std::endl;
//std::cout << sizeof(int) << std::endl;
//std::cout << sizeof(float) << std::endl;
//std::cout << sizeof(double) << std::endl;

//E4.29 help
//int x[10];   int* p = x;
//std::cout << sizeof(x) / sizeof(*x) << std::endl;
//std::cout << sizeof(p) / sizeof(*p) << std::endl;

//E4.30
//a. sizeof(x)+y
//b. sizeof(p->(mem[i]))
//c. sizeof(a)<b
//d. sizeof(f())

//E4.31 help
//std::vector<int> ivec = {1,2,3,4,5,6,7,9};
//std::vector<int> ::size_type cnt = ivec.size();
//for (std::vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--) ivec[ix] = cnt;
//for (auto& i : ivec) {
	//std::cout << i << " ";
//}

//E4.34
//a. converts fval to bool
//b. converts ival to float and the solution of the addtion converts to double
//c. converts cval to int, then converts result of ival*cval to double

//E4.35
//a. 'a' is converted to a int then the result is converted to the char value
//b. ival is converted to double, the ui and result are converted dependent on which one is larger then converted to float
//c. ui or fval is converted to the larger one then the result is converted to double at the end
//d. ival converted to float, then result converted to double, then result converted to integer than char value

//E4.36
//i *= static_cast<int>(d)

//E4.37
//a. pv = static_cast<void>(const_cast<string*>(ps))
//b. i = static_cast<int>(*pc)
//c. pv = static_cast<void*>(&d)
//d. pc = static_cast<char*>(pv)

////E5.3
////original while loop
//int ival = 0, sum = 0;
//while (ival <= 10) {
//	sum += ival;
//	++ival;
//}
//std::cout << sum << " " << ival << '\n';
////Modified while loop
//ival = 0, sum = 0;
//while (ival <= 10) sum += ival++;
//std::cout << sum << " " << ival << '\n';
////Using comma operand
//for (ival = 0, sum = 0; ival <= 10; sum += ival, ++ival);
//std::cout << sum << " " << ival << '\n';

////E5.5
//std::string outputString = "";
//for (int grade = 0; grade <= 100; grade += 10) {
//	if (grade == 100) {
//		std::cout << "A++" << std::endl;
//	}
//	else if (grade > 89) {
//		std::cout << "A" << std::endl;
//	}
//	else if (grade > 79) {
//		std::cout << "B" << std::endl;
//	}
//	else if (grade > 69) {
//		std::cout << "C" << std::endl;
//	}
//	else if (grade > 59) {
//		std::cout << "D" << std::endl;
//	}
//	else std::cout << "F" << std::endl;

//	//E5.6
//	(grade == 100) ? outputString = "A++" : (grade > 89) ? outputString = "A" : (grade > 79) ? outputString = "B" : (grade > 69) ? outputString = "C" : (grade > 59) ? outputString = "D" : outputString = "F";
//	std::cout << outputString << std::endl;
//	std::cout << std::endl;
//}

//E5.9
//std::string input;
//int vowels = 0;
//while (std::cin >> input) {
//	for (auto& i : input) {
//		if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
//			++vowels;
//		}
//	}
//	std::cout << "Number of values: " << vowels << std::endl;
//}

//E5.10
//int aCnt, eCnt, iCnt, oCnt, uCnt;
//aCnt = eCnt = iCnt = oCnt = uCnt = 0;
//char ch;
//while (std::cin >> ch) {
//	// if ch is a vowel, increment the appropriate counter
//	switch (ch) {
//	case 'a':
//		++aCnt;
//		break;
//	case 'e':
//		++eCnt;
//		break;
//	case 'i':
//		++iCnt;
//		break;
//	case 'o':
//		++oCnt;
//		break;
//	case 'u':
//		++uCnt;
//		break;
//	case 'A':
//		++aCnt;
//		break;
//	case 'E':
//		++eCnt;
//		break;
//	case 'I':
//		++iCnt;
//		break;
//	case 'O':
//		++oCnt;
//		break;
//	case 'U':
//		++uCnt;
//		break;
//	}
//	std::cout << "a: " << aCnt << " e: " << eCnt << " i: " << iCnt << " o: " << oCnt << " u: " << uCnt<<std::endl;
//}

//E5.11
//std::string input;
////char ch;
//int vowelCnt = 0;
//int blankCnt = 0;
//int tabCnt = 0;
//int newlineCnt = 0;
//int otherCnt = 0;
//// if ch is a vowel, increment the appropriate counter
//while(getline(std::cin,input)){
//	for (auto& ch : input) {
//		switch (ch) {
//		case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
//			++vowelCnt;
//			break;
//		case ' ':
//			++blankCnt;
//			break;
//		case '\t':
//			++tabCnt;
//			break;
//		//case '\n':
//			//++newlineCnt;
//			//break;
//		default:
//			++otherCnt;
//			break;
//		}
//	}
//	++newlineCnt;
//	std::cout << "vowels: " << vowelCnt << " blanks: " << blankCnt << " tabs: " << tabCnt << " newline: " << newlineCnt << " others: " << otherCnt << std::endl;
//}

////E5.12
//std::string input;
////char ch;
//int vowelCnt = 0;
//int blankCnt = 0;
//int tabCnt = 0;
//int newlineCnt = 0;
//int otherCnt = 0;
//auto iBeg = input.begin();
//auto iEnd = input.end();
//int ff = 0;
//int fl = 0;
//int fi = 0;
//// if ch is a vowel, increment the appropriate counter
//while(getline(std::cin,input)){
//	//for (auto& ch : input) {
//	for (auto beg = input.begin(); beg < input.end()-1; ++beg){
//		char test = *beg;
//		char test1 = *(beg+1);
//		if (test == 'f') {
//			switch (test1) {
//			case 'f':
//				++ff;
//				break;
//			case 'l':
//				++fl;
//				break;
//			case 'i':
//				++fi;
//				break;
//			default:
//				break;
//			}
//		}
//	}
//	++newlineCnt;
//	std::cout << "ff: " << ff << " fl: " << fl << " fi: " << fi << std::endl;
//}

////E5.14
//std::string input;
//while (getline(std::cin, input)) {
//	std::vector<char> test;
//	auto ibeg = input.begin();
//	auto iend = input.end();
//	int count = 0;
//	int finalCount = 0;
//	std::vector<char> finalWord = { 'n','o',' ','w','o','r','d' };
//	for (; ibeg < iend; ++ibeg) {
//		if (*ibeg == ' ') {
//			++ibeg;
//			break;
//		}
//		else {
//			test.push_back(*ibeg);
//		}
//	}
//	while (ibeg!=iend) {
//		std::vector<char> test1;
//		for (; ibeg < iend; ++ibeg) {
//			if (*ibeg == ' ') {
//				++ibeg;
//				break;
//			}
//			else {
//				test1.push_back(*ibeg);
//			}
//		}
//		if (test == test1) {
//			++count;
//			if (count > finalCount) {
//				finalWord = test;
//				finalCount = count;
//			}
//		}
//		else {
//			count = 0;
//		}
//		test = test1;
//	}
//	for (auto& i : finalWord) {
//		std::cout << i;
//	}
//	std::cout << std::endl;
//}

////E5.16
//for (int i = 0; i < total; ++i) {
//	...
//}
//int i = 0;
//while (i < total) {
//	...
//	++i;
//}
//while (!done) {
	//;
//}
//for (; !done;) {
	//;
//}

//E5.17
//std::vector<int> ivec1 = {0,1,2,3,4};
//std::vector<int> ivec2 = {0,1,2,3};
//auto beg1 = ivec1.begin();
//auto beg2 = ivec2.begin();
//
//while (*beg1 == *beg2 && beg1 != ivec1.end()-1 && beg2 != ivec2.end()-1) {
//	++beg1;
//	++beg2;
//}
//if (beg1 == ivec1.end()-1) {
//	std::cout << "prefix" << std::endl;
//}
//else std::cout << "not prefix" << std::endl;

//E5.19
//std::string string1 = "empty", string2 = "empty";
//do {
//	switch (string1.compare(string2)) {
//	case 1:
//		std::cout << "string1 is greater than string2." << std::endl;
//		break;
//	case 0:
//		std::cout << "string1 is the same as string2." << std::endl;
//		break;
//	case -1:
//		std::cout << "string1 is less than string2." << std::endl;
//		break;
//	default:
//		std::cout << "ERROR";
//		break;
//	}
//	std::cout << "Give me two strings!" << std::endl;
//} while (std::cin >> string1 >> string2);

////E5.20
//std::string input;
//std::vector<std::string> inputs;
//while (std::cin >> input) {
//	inputs.push_back(input);
//}
//std::cin.clear();
//auto inputsBeg = inputs.begin();
//while (inputsBeg < inputs.end()) {
//	if (inputs.end() != (inputsBeg+1) && *inputsBeg == *(inputsBeg+1)) {
//		std::cout << *inputsBeg << std::endl;
//		break;
//	}
//	++inputsBeg;
//}
//if (inputsBeg == inputs.end()) {
//	std::cout << "no word was repeated" << std::endl;
//}

////E5.21
//std::string input;
//std::vector<std::string> inputs;
//while (std::cin >> input) {
//	inputs.push_back(input);
//}
//std::cin.clear();
//auto inputsBeg = inputs.begin();
//while (inputsBeg < inputs.end()) {
//	if (inputs.end() != (inputsBeg + 1) && *inputsBeg == *(inputsBeg + 1) && isupper((*inputsBeg)[0])) {
//		std::cout << *inputsBeg << std::endl;
//		break;
//	}
//	++inputsBeg;
//}
//if (inputsBeg == inputs.end()) {
//	std::cout << "no word was repeated" << std::endl;
//}

//E5.22
//begin:
//	int sz = get_size();
//	if (sz <= 0){
//		goto begin;
//}
//int sz = get_size();
//while (sz <= 0) {
//	sz = get_size();
//}

//E5.23
//int num1, num2;
//while (std::cin >> num1 >> num2) {
//	std::cout << (num1 / num2) << std::endl;
//}

//E5.24
//int num1, num2;
//std::string errormsg = "divide by zero";
//while (std::cin >> num1 >> num2) {
//	if (num2 == 0) {
//		throw std::runtime_error(errormsg);
//	}
//	else std::cout << (num1 / num2) << std::endl;
//}

//E5.25
//int num1, num2;
//while (std::cin >> num1 >> num2) {
//	try {
//		if (num2 == 0) {
//			throw num2;
//		}
//		else std::cout << (num1 / num2) << std::endl;
//	}
//	catch (int myError) {
//		std::cout << "Divide by zero. Input new numbers." << std::endl;
//	}
//}

////E6.3
int fact(int num) {
	int output = 1;
	for (int i = 1; i <= num; ++i) {
		output *= i;
	}
	return output;
}

////E6.4
void screen(int& number) {
	std::cout << "Number please: " << std::endl;
	std::cin >> number;
	return;
}
////within main function
//int number;
//screen(number);
//std::cout << fact(number) << std::endl;

////E6.5
void abs(double& number) {
	if (number < 0) number *= -1;
	return;
}

////E6.7
int counter() {
	static int number = 0;
	return number++;
}
////within main function
//for (int i = 0; i < 10; ++i) {
//	std::cout << counter() << std::endl;
//}

//E6.10
void swapValues(int *input1, int *input2) {
	int temp;
	temp = *input1;
	*input1 = *input2;
	*input2 = temp;
	return;
}

//E6.11
void reset(std::string &input) {
	input = "";
}

//E6.12
void swapValues2(int& input1, int& input2) {
	int temp;
	temp = input1;
	input1 = input2;
	input2 = temp;
	return;
}

//E6.16
bool is_empty(const std::string& s) {
	return s.empty();
}

//E6.17
bool anyCap(const std::string &input) {
	for (auto i : input) {
		if (isupper(i)) {
			return true;
		}
	}
	return false;
}
void convert2Lower(std::string &input) {
	for (auto &i : input) {
		if (isupper(i)) {
			i = tolower(i);
		}
	}
}

//E6.18
//a) bool compare(matrix&, matrix&);
//b) std::vector<int> change_val(int,std::vector<int>);

//E6.19
//a) illegal: not the right number of arguments
//b) legal
//c) legal
//d) illegal: last argument is not an integer

//E6.21
int biggerInt(int input1, int* input2) {
	if (input1 < *input2) {
		return *input2;
	}
	else return input1;
}

//E6.22
void swapPInts(int* &input1, int* &input2) {
	auto temp = input1;
	input1 = input2;
	input2 = temp;
}

//E6.23
void print(const int* ip, const int *end) {
	if (ip)
		while (ip != end)
			std::cout << *ip++;
}
void print(const int ip) {
	std::cout << ip;
}

////E6.25
//int main(int argc, char *argv[]) {
//	if (argc == 3) {
//		std::string outputString1 = argv[1];
//		std::string outputString2 = argv[2];
//		std::string output = outputString1 + outputString2;
//		std::cout << output << std::endl;
//	}
//	else std::cout << "Not the correct number of input parameters" << std::endl;
//	return 0;
//}

//E6.26
//int main(int argc, char* argv[]) {
//	for (auto i = 1; i < argc; ++i) {
//		std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
//	}
//	return 0;
//}

////E6.27
//double sumValues(std::initializer_list<double> li) {
//	auto liBeg = li.begin();
//	auto liEnd = li.end();
//	double total = 0.0;
//	for (; liBeg != liEnd; ++liBeg) {
//		total += *liBeg;
//	}
//	return total;
//}

////E6.30
//// incorrect return values, this code will not compile
//bool str_subrange(const std::string& str1, const std::string& str2)
//{
//	// same sizes: return normal equality test
//	if (str1.size() == str2.size())
//		return str1 == str2;   // ok: == returns bool
//	// find the size of the smaller string; conditional operator, see § 4.7 (p. 151)
//	auto size = (str1.size() < str2.size())
//		? str1.size() : str2.size();
//	// look at each element up to the size of the smaller string
//	for (decltype(size) i = 0; i != size; ++i) {
//		if (str1[i] != str2[i])
//			return str1 == str2; // error #1: no return value; compiler should detect this error
//	}
//	// error #2: control might flow off the end of the function without a return
//	// the compiler might not detect this error
//}

//E6.33
//void print(std::vector<int> input, int index, int sizeOfInput) {
//	if (index != sizeOfInput) {
//		std::cout << input[index] << " ";
//		print(input, ++index, sizeOfInput);
//	}
//	return;
//}

////E6.36
//std::string(*func(int i))[10];

////E6.37
////type alias
//std::string array[10];
//std::string* p1[10];
//std::string(*p2)[10] = &array;
////trailing return
//auto func(int i)->std::string(*)[10];
////decltype
//std::string array[10];
//decltype(array)* func(int i);

//E6.38
int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };
decltype(odd)& arrPtr(int i)
{
	return (i % 2) ? odd : even; // returns a pointer to the array
}




int main() {




	return 0;
}