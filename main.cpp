#include <iostream>
#include <string>

int main() {
  std::string input_string;
  std::getline(std::cin, input_string);
  size_t number;
  std::cin >> number;
  std::string result;
  if (number < input_string.size()) {
    const size_t number_to_cut =  input_string.size() - number;
    result = input_string.substr(number_to_cut);
  } else if (number > input_string.size())
  {
    const size_t number_of_spaces =  number-input_string.size();
    std::string spaces(number_of_spaces, ' ');
    result = spaces + input_string;
  } else
  {
    result = input_string;
  }
  std::cout << result;
}
