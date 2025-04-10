#ifndef CLASS_H
#define CLASS_H


#include <iostream>
#include <string>



class BST {

private:

  Node *pointer; 


public:
  
  //constructor
  BST();

  //destructor
  ~BST();

  void set(std::string& word, int num);

  void read(std::string& file); 

  int find(std::string& word);

  void print();

  std::string min();

  std::string max();

  void save_file();

  void del(std::string& word);

  void display(); 

 };


class Node {

public:

  Node(std::string word); 

private:
                                                                         
  Node *left, *right;                                                          
  std::string key;                                                             
  int data;    


};






#endif
