#ifndef CLASS_H
#define CLASS_H


#include <iostream>
#include <string>



class BST {



public:
  
  //constructor
  BST();

  //destructor
  ~BST();

  void set(std::string& word, int num);

  std::string find(std::string& word);

  void print();

  std::string min();

  std::string max();

  void save_file();

  void del(std::string& word);

  void display(); 

 };


class tree {

public:

  tree(std::string key); 

private:
                                                                         
  tree *left, *right;                                                          
  std::string key;                                                             
  int data;    


};






#endif
