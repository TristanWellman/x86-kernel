void printV(const char *string, int color) {

  char *VMEM = (char *)0xb8000;

  unsigned int j = 0;
  unsigned int i = 0;

  while(j < 80 * 25 * 2) {

    VMEM[j] = ' ';

    VMEM[j + 1] = color;

    j = j + 2;

  }

  j = 0;

  while(string[j] != '\0') {

    VMEM[i] = string[j];
    VMEM[i + 1] = color;

    j++;
    i = i + 2;

  }

  return;

}

void printC(char character, int color){
  
  char *VMEM = (char *)0xb8000;

  unsigned int j = 0;
  unsigned int i = 0;

  while(j < 80 * 25 * 2) {

    VMEM[j] = ' ';

    VMEM[j + 1] = color;

    j = j + 2;

  }

  j = 0;

  while(character != '\0') {

    VMEM[i] = character;
    VMEM[i + 1] = color;

    j++;
    i = i + 2;

  }

  return;

}
