#include <iostream>
#include <glog/logging.h>
#include <fmt/core.h>
#include <folly/FBVector.h>
class A{
public:
    A(){
        std::cout << "A construct"<< std::endl;
    }
    ~A(){
        std::cout << "A deconstruct"<< std::endl;
    }
    void to(){
        std::cout << "A to"<< std::endl;
    }
};
void  d(A &a){
    a.to();
}


int main() {
    const char *tag = "spacecraftcc";
    google::InitGoogleLogging(tag);
    FLAGS_alsologtostderr = true;
    LOG(INFO) << "------conan test-----------------";
    google::ShutdownGoogleLogging();
    std::cout << "Hello, World!" << std::endl;
    std::string s = fmt::format("The answer is {}.", 42);
    fmt::print("I'd rather be {1} than {0}.", "right", "happy");
    A a;
    A& aa = a;
    d(aa);
    {
        a.to();
    }
    folly::fbvector<int> numbers({0, 1, 2, 3});
    numbers.reserve(10);
    for (int i = 4; i < 10; i++) {
        numbers.push_back(i * 2);
    }
    assert(numbers[6] == 12);
    LOG(INFO) << numbers[6];
    return 0;
}
