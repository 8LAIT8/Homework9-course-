/*1)
#include <iostream>
using namespace std;

int main() {

    int mycats = 4;
    int& ref = mycats;
    int* ptr = &mycats;

    ref = 8;
    cout << "Value1 after: " << mycats << endl;

    *ptr = 10;
    cout << "Value2 after: " << mycats << endl;

    return 0;
}
*/
/*4)
#include <iostream>
using namespace std;

int* DanglingPointer() {
    int а = 27; 
    return &а;  
}

int main() {
    int* Pointer = DanglingPointer();

    
    cout << "DanglingPointer: " << Pointer << endl;
    cout << "DanglingPointer: " << *Pointer << endl; 

    return 0;
}
*/
/*5)
#include <iostream>
using namespace std;

int* Pointer() {
    int* a = new int(27);
    return a;
}
int main() {
    int* b = Pointer();

    
    cout << "Address of b: " << b << endl;
    cout << "b: " << *b << endl;

    delete b;  
    b = nullptr; return 0;
}
*/
/*6)
#include <iostream>
using namespace std;

void MemoryLeak() {
    int* a = new int(100); 
    cout << "Memory for a: " << *a << endl;
    
}

int main() {
    MemoryLeak(); 
    return 0;
}
*/
/*7)
#include <iostream>
using namespace std;

void MemoryLeak() {
    int* a = new int(100); 
    cout << "Memory for a: " << *a << endl;
    delete a; 
    a = nullptr; 
}

int main() {
    MemoryLeak(); 
    return 0;
}
*/
/*9)
#include <iostream>

using namespace std;

class Cat
{
public:
    Cat(int age) { itsAge = age; }
    ~Cat() {}
    int GetAge() const { return itsAge; }

private:
    int itsAge;
};

Cat* MakeCat(int age); 

int main()
{
    int age = 7;
    Cat* Boots = MakeCat(age); 
    cout << "Boots: " << Boots->GetAge() << " years old" << endl;

    delete Boots; 
    return 0;
}

Cat* MakeCat(int age)
{
    Cat* pCat = new Cat(age); 
    return pCat; 
}
*/