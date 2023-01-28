#include <cmath>
#include <iostream>
#include <string>

auto counter = 1;

auto is_prime(int n) {
  for (int i = 2; i <= std::ceil(std::sqrt(n)); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

void print_next_prime() {
  auto found_next_prime = false;
  while (!found_next_prime) {
    std::string find_next;
    if (is_prime(counter)) {
      found_next_prime = true;
      std::cout << counter << '\n';
      counter++;

      std::cout << "Find next prime number? (y/N): ";
      std::cin >> find_next;
    } else {
      counter++;
    }

    if (find_next == "y" || find_next == "Y") {
      print_next_prime();
    }
  }
}

int main() {
  print_next_prime();
  return 0;
}