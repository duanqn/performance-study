#include <iostream>
#include <chrono>

int main(){
    auto start = std::chrono::high_resolution_clock::now();
    int sum = 0;
    int count = 0x7FFFFFFF;
    for(int i = 0; i < count; i++){
        sum += i;
    }

    auto end = std::chrono::high_resolution_clock::now();

    std::cout << sum << std::endl;
    std::cout << "Time elapsed: " << std::chrono::duration_cast<std::chrono::duration<double, std::milli>>(end - start).count() << " ms" << std::endl;
    return 0;
}
