#include <iostream>

int main(void) {

  unsigned int image_height = 256;
  unsigned int image_width = 256;

  // std::cout << "Starting the PPM Image rendere!" << std::endl;

  std::cout << "P3\n" << image_height << " " << image_width << "\n255\n";

  unsigned int z = 0;

  for (auto i = 0; i < image_height; i++) {
    for (auto j = 0; j < image_width; j++) {
      for (auto k = 0; k < 256; k++) {
        std::cout << i << " " << j << " " << k << std::endl;
      }
    }
  }
}