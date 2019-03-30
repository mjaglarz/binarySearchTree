#include <iostream>
#include "binarySearchTree.hpp"

using std::cout;
using std::endl;

int main(int argc, char* argv[]){
  try{
    BinarySearchTree<> bst;

    bst.insert(8);
    bst.insert(2);
    bst.insert(1);
    bst.insert(3);
    bst.insert(10);
    bst.insert(9);
    bst.insert(11);
    bst.insert(11);

    auto bst2 = bst;

    bst2.remove(2);
    bst2.remove(2);
    bst2.remove(11);

    BinarySearchTree<int> bst3;

    bst3 = bst;

    cout << "INORDER: ";
    bst.printInorder();
    cout << endl;

    cout << "PREORDER: ";
    bst.printPreorder();
    cout << endl;

    cout << "POSTORDER: ";
    bst.printPostorder();
    cout << endl;

    cout << "SIZE: " << bst.size() << endl;
    cout << "MINIMUM: " << bst.minimum() << endl;
    cout << "MAXIMUM: " << bst.maximum() << endl;
    cout << "DEPTH: " << bst.depth() << endl;

    cout << "BST2: ";
    cout << bst2;
    cout << "SIZE: " << bst2.size() << endl;

    cout << "BST3: ";
    cout << bst3;
    cout << "SIZE: " << bst3.size() << endl;
  }catch(std::exception const &e){
    std::cerr << e.what() << "\n";
  }

  return 0;
}
