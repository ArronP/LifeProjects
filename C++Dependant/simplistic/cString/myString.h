/*
* Arron Pontbriand
* Final Project
* MyString Indexing
* 4.25.18
*/
static const int MAXSIZE= 25; //Initialization of MAXSIZE for usage with strings.

class MyString {
  public:
  
  MyString(char cstr[]); //Creates an obj of type MyString containing the C-string cstr.
  
  int getLen() const; //returns the number of chars in the MyString obj, not counting '\0'.
  int howMany(char ch) const; //returns number of times the parameter occurs in the obj.
  
  char getChar(int index) const; //Returns the character at pos'index.' If index>len returns '\0'.
  
  void add(char ch); //appends the parameter char to the end of the obj.
  void replaceChar(char oldChar, char newChar); //Replaces all occurences of oldChar with newChar
  
  bool operator==(const MyString& obj) const; //Returns true if this obj contains same amount of chars.
  bool operator!=(const MyString& obj) const; //Returns false if this obj contains different amount of chars.
  
  void display() const; //prints string contained in MyString obj.
  void display(int n) const; //Prints out the first 'n' characters contained in MyString (or all if len < n)
  
  private:
  
  char str[MAXSIZE]; //Storage for characters in the string. This array will contain a '\0'
                     //the end so that C-string functions can be used. MAXSIZE const defined
                     //pritor outside the class declaration, and is maximum size for string.
  
  int len;            //number of characters currently stored in str, not counting the '\0'.
};