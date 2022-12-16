#include <iostream>
#include <glog/logging.h>
#include <fmt/core.h>
int main() {
    const char *tag = "spacecraftcc";
    google::InitGoogleLogging(tag);
    FLAGS_alsologtostderr = true;
    LOG(INFO) << "------conan test-----------------";
    google::ShutdownGoogleLogging();
    std::cout << "Hello, World!" << std::endl;
    std::string s = fmt::format("The answer is {}.", 42);
    fmt::print("I'd rather be {1} than {0}.", "right", "happy");
    return 0;
}
