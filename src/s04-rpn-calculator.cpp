#include <iostream>
#include <algorithm>
#include <iterator>
#include <stack>
#include <stdexcept>
#include <vector>
#include <string>

auto pop_top(std::stack<double>& stack) -> double
{
   if (stack.empty()) {
       throw std::logic_error{"empty stack"};
   }
   auto element = std::move(stack.top());
   stack.pop();
   return element;
}

auto evaluate_addition(std::stack<double>& stack) -> void
{
   if (stack.size() < 2) {
       throw std::logic_error{"not enough operands for +"};
   }
   auto const b = pop_top(stack);
   auto const a = pop_top(stack);
   stack.push(a + b);
}

auto evaluate_substraction(std::stack<double>& stack) -> void
{
   if (stack.size() < 2) {
       throw std::logic_error{"not enough operands for -"};
   }
   auto const b = pop_top(stack);
   auto const a = pop_top(stack);
   stack.push(a - b);
}

auto evaluate_multiplication(std::stack<double>& stack) -> void
{
   if (stack.size() < 2) {
       throw std::logic_error{"not enough operands for -"};
   }
   auto const b = pop_top(stack);
   auto const a = pop_top(stack);
   stack.push(a - b);
}

auto evaluate_division(std::stack<double>& stack) -> void
{
   if (stack.size() < 2) {
       throw std::logic_error{"not enough operands for -"};
   }
   auto const b = pop_top(stack);
   auto const a = pop_top(stack);
   stack.push(a - b);
}
