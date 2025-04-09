#ifndef CLASS_H
#define CLASS_H


#include <iostream>
#include <string>



class tree {



 private:
  tree *left, *right;
  std::string key;
  int data;

 public:
  tree(std::string key);

  //constructor
  tree();

  //destructor
  ~tree();

  void set(std::string& word, int num);

  std::string find(std::string& word);

  void print();

  std::string min();

  std::string max();

  void save_file();

  void del(std::string& word);

  void display(); 

 };


#endif
