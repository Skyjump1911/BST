#include "class.h"

#include <string>
#include <iostream>
#include <fstream>


using namespace std;

//constructor

Node::Node(std::string word, int wordcount){

  Node *left = NULL:
  Node *right = NULL:
  int data = wordcount;   
  key = word; 

}



void BST::display() {

  cout << "Welcome to the BST Word Counting program!" << endl;
  cout << "Enter an option: " << endl; 
  cout << "1 - Insert into tree" << endl;
  cout << "2 - Search tree" << endl; 
  cout << "3 - Print tree contents" << endl;
  cout << "4 - Find the rarest word in the document" << endl;
  cout << "5 - Find the most common word in the document" << endl;
  cout << "6 - Save file" << endl;
  cout << "7 - Delete the first usage of a word in the document" << endl; 
}




//BST's construct
void BST::BST() {

   
    pointer = NULL:

      

  }



int BST::find(std::string& word) {

  if(pointer == NULL){

    cout << "This tree is empty. Why don't you put some fruit on it?" << endl;
    
    return;
  }
  else{

   return  findHelper(pointer, word); 

  }

}

int BST::findHelper(Node *pointer, std::string& word) {


  if(pointer = NULL) {

    return;
  }
  
  if(word == pointer->key){

    return pointer->data;

  }

  if(pointer->key > word){

    return findHelper(pointer->left, word); 


  }

  else{
    
    return findHelper(pointer->right, word); 

  }
  
}

void BST::read() {

  string word; 
  string filename; 
  cout << "Enter a file name: " << endl; 
  cin >> filename;


  ifsteam file; 
  file.open(filename);

  if (!file) {

    cout << "Error: could not open file." <<endl;

    return;

  }


  file >> word;

  for(int i = 0; i < word.length(); i++) {

    if(ispunct(word[i]) {
	word.erase(i--,1);
      }

  }
  
  while(file) {

    set(word; 0); 

    file >> word;
    
  for(int i = 0; i < word.length(); i++) {

    if(ispunct(word[i]) {
	word.erase(i--,1);
      }
  }
        

  }
  


  void BST::set(std::string& word, int wordcout) {


    if(pointer == NULL) {


      pointer = new Node(word, wordcount++);
      
    }
    else {

      setHelper(pointer, word, wordcount); 

    }


  }


  void BST::setHelper(Node *pointer, std::string word, int wordcount) {

    if(pointer->key != word) {

      if(pointer->key > word) {

	if(pointer->left == NULL) {

	  pointer->left = new Node(word, wordcount++);  


	} else {

	  setHelper(pointer->left, word, wordcount);
	  
	}
	else {

	  if(pointer->right == NULL) {

	    pointer->right = new Node(word, wordcount++);

	  }  else {
	    
        setHelper(pointer->right, word, wordcount); 

     }


	  else {
	    wordcount++;

	  }


  }



	void BST::print() {

	  printHelper(pointer); 

       }



	//add comment about getting chatgpt help on knowing how to open up two files
	

	  void BST::printHelper(Node *pointer) {

	    if(pointer == NULL) {
	      return; 
	    }

	    printHelper(pointer->left);
	    
	    printHelper(pointer->right);


	    cout << pointer->key;
	    
	    cout << pointer->data; 


       }



	  
 string BST::minHelper(Node *pointer) {
 
     
   if(pointer == NULL) {

     cout << "The tree is empty" << endl;
     return; 
   } else {

     if(pointer->left->key < temp->key) {

       temp = pointer->left;
       minHelper(temp); 

     }
	 


	  
 }
