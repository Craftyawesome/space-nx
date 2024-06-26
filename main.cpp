extern "C" {
#include "program.h"
unsigned char title[100][200];
unsigned char rotated_ship[36][36];
unsigned char orig_ship[36][36];
}

int main(int argc, char *argv[])
{
  return program_start();
}