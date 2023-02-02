#include <iostream>
#include <cstdlib>

int main () {

std::cout << "Magic 8-Ball: \n";

 srand(time(NULL));
 int x = std::rand() % 20;

 if (x == 0) {
   std::cout << "It is certain.\n";
} else if (x == 1){
    std::cout << "Outlook good.\n";
} else if (x == 2){
    std::cout << "Reply hazy, try again.\n";
}  else if (x == 3){
    std::cout << "Don't count on it.\n";
}  else if (x == 4){
    std::cout << "Outlook not so good.\n";
}  else if (x == 5){
    std::cout << "Signs point to yes.\n";
}  else if (x == 6){
    std::cout << "Yes.\n";
}  else if (x == 7){
    std::cout << "My reply is no.\n";
}  else if (x == 8){
    std::cout << "Don't count on it.\n";
} else {
   std::cout << "Very doubtful.\n";
 }

  
}
