#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>
#include <curses.h>

struct winsize w;

void loop_with_window_size() {
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
  sleep(1);
  //std::system("clear");
  std::cout << "\ntesting 123\n";
  std::printf("Row Size: %i\n", w.ws_row);
  std::cout << w.ws_row;
}

int main() {
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
  while (true) {
    loop_with_window_size();
  }
  return 0;
}
