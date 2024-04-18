#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {}
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const { return m_Name; }
};

int main()
{
	int a = 2; // 'a' is allocated 4 bytes on the stack
	int* b = new int; // 'b' is storing the memory address of the 4 byte integer allocated on the heap
	int* c = new int[50]; // 'c' is an array of 200 bytes (4 bytes per integer for 50 integers)

	Entity* e = new Entity;
	Entity* e = new Entity(); // these are the same, with or without parentheses

	Entity* e1 = new Entity[50]; //if we wanted an array of entities instead we could do that, just using square brackets instead 
	std::cin.get();
}