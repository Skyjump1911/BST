/**
 * @file class.h
 * @author Noah Melton
 * @date 2025-04-11
 * @brief This is the header file for the BST assignment. 
 * 
 * This is where we declare the two classes that we will use in this assignment. "Node" is the class which comprises a nodule on our BST. "BST" is the Binary Search Tree itself. 
 */

#ifndef CLASS_H
#define CLASS_H


#include <iostream>
#include <string>



/**
 * This is the Node class- each BST entry is just an instance of this class. 
 *
 * @class Node class.h "BST/class.h"
 * @brief This class is simple-- It just holds a pointer to its left and right children, as well as a string for the word it holds and a int for the number of times that word has occurred. 
 *
 */
class Node {

  // Only the constructor is public here
public:

  Node(std::string word, int wordcount); 

  //Member variable declaration. 
                                                                         
  Node *left, *right;                                                          
  std::string key;                                                             
  int data;    


};



/**
 * This is the BST class -- it provides the basic structure and methods for the Binary Search Tree
 *
 * @class BST class.h "BST/class.h"
 * @brief The public methods are meant to be accessed publicly, however, the private methods are to be used by the BST class for its own internal operations/aiding other BST methods. 
 *
 */
class BST {

 
private:

  // The root pointer; this is the head of the BST
  Node *pointer; 


public:
  
 

/**
 * This is the constructor for the BST class
 *
 * @pre N/A
 * @post An instance of the BST class is created
 * 
 */
  BST();

  //destructor
  ~BST();



/**
 * This is the set function. 
 *
 * @param std::string& word This word is the word that we are inserting into the tree. 
 * @param int wordcount The number of times this word has occurred. 
 * @pre A BST needs to have been created already for this to work. 
 * @return void This funciton doesn't return anything, it just adds values to the tree. 
 * @post Any words that were passed into this function are added to the BST
 * 
 */
  void set(std::string& word, int wordcount);


/**
 * This is the helper function for the set funciton. 
 *
 * @param Node *pointer The starting point of the BST traversal
 * @param std::string word the word we are trying to insert
 * @param int wordcount  the number of times this word has shown up in the BST already
 * @pre in order for this to work, we need a valid BST
 * @return void No return type-- this function just inserts words. 
 * @post The word is inserted and the wordcount is updated accordingly. 
 * 
 */
  void setHelper(Node *pointer, std::string word, int wordcount); 

  

/**
 * This function reads from a file, and puts the words into a BST
 *
 * @pre We need a .txt file and a prexisting BST for this to work. 
 * @return void The function does not return anything, it only reads from a file and populates the BST accordingly. 
 * @post The file is read through, punctuation is separated from our word so that words at the end of sentences are not disregarded, and each word is fed into the BST. 
 * 
 */
  void read(); 


/**
 * The find function. This is where we see if a word has occurred, and if so, how often. 
 *
 * @param std::string& word the word we are inquiring about. 
 * @pre A populated BST 
 * @return int This function returns the number of times that a word has occurred, if any. 
 * @post This is an inquiry funciton - it doesn't change anything about the BST
 * 
 */
  int find(std::string& word);


/**
 * This is the helper function to the find function. This is what enables the find function to recursively search the BST
 *
 * @param Node *pointer This pointer serves as the starting point for the search. If there is a left path to take, the pointer to the left child is used in the recursion call, and so the left child becomes the starting point. 
 * @param std::string& word the word we are searching for
 * @pre A populated BST
 * @return int this returns the number of times the word has been entered into the BST
 * @post Nothing about the BST is changed, we only find out how many times a word has been entered into the BST
 * 
 */
  int findHelper(Node *pointer, std::string& word);
  

/**
 * This is the print function. 
 *
 * @pre Ideally, you need a populated BST. Printing an empty BST will lead to a predictably...boring... result. 
 * @return void No return type, this funciton only prints out the BST
 * @post The BST is printed, but nothing about its structure changes
 * 
 */
  void print();


/**
 * This is the helper function for the print function. Similar to the find function, this helper funciton aids in the recursive process, which is the only way we can successfully print out the entire BST
 *
 * @param Node *pointer This pointer is the starting point for the printing process
 * @pre a populated BST is needed
 * @return void This function doesn't return anything -- it only prints out the contents of the BST
 * @post the BST is printed but not changed. 
 * 
 */
  void printHelper(Node *pointer); 
  

/**
 * This function prints out the word which occurs the most often in the BST
 *
 * @pre A populated BST
 * @return std::string the word which occurs the most
 * @post Nothing about the BST changes, the only thing this function does it tell us which word was the most prevalent. 
 * 
 */
  std::string min();


/**
 * this is the helper function for the min funciton
 *
 * @param Node *pointer the pointer which we use as a starting point
 * @pre You just need an initialized BST
 * @return std::string the smallest key in the bST
 * @post the BST is traversed, and the smallest key value is returned
 * 
 */
  std::string minHelper(Node *pointer); 

/**
 * this funciton returns the rarest word in the BST
 *
 * @pre a populated BST
 * @return std::string the rarest word in the bst
 * @post the rarest word in the BST is printed out
 * 
 */
  std::string max();


/**
 * This funciton is the helper function for the max function
 *
 * @param Node *pointer the pointer which serves as a starting point for the search 
 * @pre You need an intialized BST
 * @return std::string the smallest value in the BST
 * @post the list is traversed, and the smallest value in it is returned
 * 
 */

  std::string maxHelper(Node *pointer);
  
/**
 * This function takes a file name and makes a new file which holds the contents of the BST (in order)
 *
 * @pre a populated BST
 * @return void No return type -- this function just creates and populates a file with the BST data
 * @post a new file is created and filled with the BST's data
 * 
 */
  void save_file();


/**
 * This function deletes the first instance of a specified word from the BST
 *
 * @param std::string& word the word to be deleted. 
 * @pre we need a populated bst or else it isn't going to be able to delete anything. 
 * @return void This function does not return anything, it just deletes the specified word from the BST
 * @post the word is deleted from the BST
 * 
 */
  void del(std::string& word);


/**
 * This function is for displaying the user interface menu
 *
 * @pre N/A
 * @return void This function doesn't do anything except display a menu
 * @post the menu is printed out for the user to see
 * 
 */
  void display();


/**
 * The helper function for our deconstructor
 *
 * @param Node *pointer a pointer the the node in question
 * @pre You need a populated BST
 * @return void No return type, this function only exixts to help us with the deconstructor
 * @post the node is destroyed
 * 
 */
  void deconHelper(Node *pointer); 

 };







#endif
