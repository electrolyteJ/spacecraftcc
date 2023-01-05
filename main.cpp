#include <iostream>
#include <glog/logging.h>
#include <fmt/core.h>
class A{
public:
    A(){
        std::count << "A construct"<< std::endl;
    }
    ~A(){
        std::count << "A deconstruct"<< std::endl;
    }
    void to(){
        std::count << "A to"<< std::endl;
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


    return 0;
}
