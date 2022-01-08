#include <iostream>
#include <math.h>
#include <time.h>

int main(){
std::string Hat[4] = {"gryffindor", "hefflepuff", "ravenclaw", "slytherin"};
srand(time(NULL));
for (int x = 0; x < 200; x++){
std::cout << "_____________________\n";
std::cout << Hat[rand() % 4] << "\n";
std::cout << x << "\n";
}
}
