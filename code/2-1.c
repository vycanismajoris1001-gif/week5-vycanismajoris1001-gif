#include <stdio.h>

int main() {
  char* alpha[] = {"abc", "def", "hij"};

  int size = sizeof(alpha) / sizeof(alpha[0]);

  for (int i=0; i < size; i++) {
      printf("%s\n", alpha[i]);
  }

return 0;
}
