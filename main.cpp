#include <boost/text/line_break.hpp>
#include <boost/text/rope.hpp>
#include <range/v3/range/concepts.hpp>
#include <range/v3/view/drop.hpp>

#include <cstdlib>
#include <iostream>

int main(int, char **) {
  auto rope = boost::text::rope("Here's\nsome\ntext.");
  auto lines = boost::text::lines(rope);
  for (auto line : lines | ranges::views::drop(1)) std::cout << line;
  std::cout << std::endl;
  return EXIT_SUCCESS;
}
