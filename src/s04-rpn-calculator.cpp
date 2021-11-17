#include <iostream>
#include <algorithm>
#include <iterator>
#include <stack>
#include <stdexcept>
#include <vector>
#include <string>
#include <cmath>

auto pop_top(std::stack<double> &stack) -> double
{
   if (stack.empty()) {
      throw std::logic_error{"empty stack"};
   }
   auto element = std::move(stack.top());
   stack.pop();
  return element;
}

auto evaluate_addition(std::stack<double> &stack) -> void
{
   if (stack.size() < 2) {
      throw std::logic_error{"not enough operands for +"};
   }
   auto const b = pop_top(stack);
   auto const a = pop_top(stack);
   stack.push(a + b);
}

auto evaluate_substraction(std::stack<double> &stack) -> void
{
   if (stack.size() < 2) {
      throw std::logic_error{"not enough operands for -"};
   }
   auto const b = pop_top(stack);
   auto const a = pop_top(stack);
   stack.push(a - b);
}

auto evaluate_multiplication(std::stack<double> &stack) -> void
{
   if (stack.size() < 2) {
      throw std::logic_error{"not enough operands for *"};
   }
   auto const b = pop_top(stack);
   auto const a = pop_top(stack);
   stack.push(a * b);
}

auto evaluate_division(std::stack<double> &stack) -> void
{
   if (stack.size() < 2) {
      throw std::logic_error{"not enough operands for /"};
   }
   auto const b = pop_top(stack);
   auto const a = pop_top(stack);
   stack.push(a / b);
}

auto evaluate_int_division(std::stack<double> &stack) -> void
{
   if (stack.size() < 2) {
      throw std::logic_error{"not enough operands for //"};
   }
   auto const b = pop_top(stack);
   auto const a = pop_top(stack);
   stack.push(floor(a / b));
}

auto evaluate_remainder(std::stack<double> &stack) -> void
{
   if (stack.size() < 2) {
      throw std::logic_error{"not enough operands for %"};
   }
   auto const b = pop_top(stack);
   auto const a = pop_top(stack);
   stack.push(std::remainder(a, b));
}

auto evaluate_power(std::stack<double> &stack) -> void
{
   if (stack.size() < 2) {
      throw std::logic_error{"not enough operands for **"};
   }
   auto const b = pop_top(stack);
   auto const a = pop_top(stack);
   stack.push(pow(a, b));
}

auto evaluate_square(std::stack<double> &stack) -> void
{
   if (stack.size() < 1) {
      throw std::logic_error{"not enough operands for sqrt"};
   }
   auto const a = pop_top(stack);
   stack.push(sqrt(a));
}

auto evaluate_logarithm(std::stack<double> &stack) -> void //returns the common logarithm of a
{
   if (stack.size() < 1) {
      throw std::logic_error{"not enough operands for log"};
   }
   auto const a = pop_top(stack);
   stack.push(log10(a));
}

auto make_args(int argc, char *argv[]) -> std::vector<std::string>
{
   auto args = std::vector<std::string>{};
   std::copy_n(argv, argc, std::back_inserter(args));
   return args;
}

auto main(int argc, char *argv[]) -> int
{
   auto const args = make_args(argc - 1, argv + 1);
   auto stack = std::stack<double>{};
   for (auto const each : args) {
      try {
         if (each == "p") {
            std::cout << pop_top(stack) << "\n";
         } else if (each == "+") {
            evaluate_addition(stack);
         } else if (each == "-") {
            evaluate_substraction(stack);
         } else if (each == "*") {
            evaluate_multiplication(stack);
         } else if (each == "/") {
            evaluate_division(stack);
         } else if (each == "//") {
            evaluate_int_division(stack);
         } else if (each == "%") {
            evaluate_remainder(stack);
         } else if (each == "**") {
            evaluate_power(stack);
         } else if (each == "sqrt") {
            evaluate_square(stack);
         } else if (each == "log") {
            evaluate_logarithm(stack);
         } else {
            stack.push(std::stod(each));
         }

      } catch (std::logic_error const &e) {
      std::cerr << "error: " << each << ":" << e.what() << "\n";
      }
   }

  return 0;
}
