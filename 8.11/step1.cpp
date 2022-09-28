void print(int) {}

void print(double) {}

int main() {
  print(0);   // exact match with print(int)
  print(3.4); // exact match with print(double)

  return 0;
}
