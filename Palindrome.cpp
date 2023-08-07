#include <iostream>
bool is_palindrome(std::string text){
  std::string rev_text="";
  for (int i=text.size()-1;i>=0;i--){
    rev_text+=text[i];
  }
  if (rev_text==text){
    return true;
  }
  return false;
}

int main(){
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
}
