#include "class.h"

#include <string>
#include <iostream>
#include <fstream>


using namespace std;

//constructor


Node::Node(std::string word, int wordcount){

  Node *left = nullptr;
    Node *right = nullptr;
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
     BST::BST() {

   
       pointer = NULL;

      

  }

    BST::~BST() {


  deconHelper(pointer);
  


}

void BST::deconHelper(Node *pointer) {


  if(pointer == NULL) {

    return;
  }

  deconHelper(pointer->left);
  deconHelper(pointer->right);

  delete pointer; 


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



	/**I got some help on the print/printhelper function from Justin and the youtube channel PaulProgramming
	
	 **/
	void BST::print() {

	  printHelper(pointer); 

       }



	//I got some help from chatgpt on remembering how to open up side panels so that I can have the .h file and the .cpp file open at the same time
	

	  void BST::printHelper(Node *pointer) {

	    if(pointer == NULL) {
	      return; 
	    }

	    printHelper(pointer->left);
	    
	    printHelper(pointer->right);


	    cout << pointer->key;
	    
	    cout << pointer->data; 


       }



string BST::min() {

    minHelper(pointer);
	    
 }

	  
 string BST::minHelper(Node *pointer) {
 
     
   if(pointer == NULL) {

     cout << "The tree is empty" << endl;
     return; 
   }

   if(pointer->left != NULL) {
     
   minHelper(pointer->left);

   }
   else {
     
   cout << "The smallest Key is: " << pointer->key; 

   }	  
 }

 string BST::max() {


   maxHelper(pointer); 

 }

 string BST::maxHelper(Node *pointer) {


   if(pointer == NULL) {

     return; 
   }

   if(pointer->right != NULL) {

        maxHelper(pointer->right);
   }
   else {
     
   cout << "The largest key is: " << pointer->key; 

   }

 }


 void BST::del(std::string& word) {









 }


 void BST::delHelper(std::string& word, Node *pointer) {


   if(pointer == NULL) {

     return; 
     
   }

   if(word < pointer->data) {

     delHelper(word, pointer->left); 

   }
   else if(word > pointer->data) {

     delHelper(word, pointer->right); 

   }

   else {

     Node *temp;

     if(pointer->left == NULL) {

       temp = pointer->right;
       delete pointer;
       pointer = temp;

     }
     else if(pointer->right == NULL) {

       temp = pointer->left;
       delete pointer;
       pointer = temp; 
     }


   } else {

     //code for handling both 



   }

 }
