void print(int) {}

void print(double) {}

int main() {
  print('a');  // promoted to match print(int)
  print(true); // promoted to match print(int)
  print(4.5f); // promoted to match print(double)

  return 0;
}
