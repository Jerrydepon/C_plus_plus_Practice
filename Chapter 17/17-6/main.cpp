#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
      LinkedList<string> list;

      list.appendNode("Alice");
      list.appendNode("Chuck");
      list.appendNode("Elaine");  

      cout << "Here are the initial names:\n";
      list.displayList();
      cout << endl;

      cout << "Now inserting the name \"David\" .\n";
      list.insertNode("David");
      cout << "Here are the nodes now.\n";
      list.displayList();
      cout << endl;

      cout << "Now deleting the last node.\n";
      list.deleteNode("Elaine");
      cout << "Here are the nodes left.\n";
      list.displayList();
      
      return 0;
}
