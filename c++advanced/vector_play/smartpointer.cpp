
#include <iostream>
#include <memory>
#include <memory>
using namespace std;

class Test {
public:
	Test() {
		cout << "created" << endl;
	}

	void greet() {
		cout << "Hello" << endl;
	}

	~Test() {
		cout << "destroyed" << endl;
	}
};

int main()
{
    unique_ptr<int>ptest(new int);
    *ptest=7;
    cout<<*ptest<<endl;
//smat pointer for test classes
	unique_ptr<Test>test_pt(new Test);
	test_pt->greet();
    cout<<"finished"<<endl;
// ######################################################
	// unique_ptr<Test>test_pt_2=make_unique<Test>;
	// ?>>>>>>>>>>>>>>>>>>>>>>>>
// this is the example of shared pointer
	shared_ptr<Test>test_shrpt(new Test);
	cout<<test_shrpt.use_count()<<endl;
	
		shared_ptr<Test>test_shrpt_1(test_shrpt);
		// shared_ptr<Test>test_shrpt_1(Test);

		cout<<test_shrpt_1.use_count()<<endl;
	
	test_shrpt->greet();
    return 0;
}









// class Temp {
// private:
// 	unique_ptr<Test[]> pTest;

// public:
// 	Temp(): pTest(new Test[2]) {

// 	}
// };

// int main() {

// 	Temp temp;

// 	unique_ptr<Test[]> pTest(new Test[2]);

// 	pTest[1].greet();

// 	cout << "Finished" << endl;

// 	return 0;
// }
