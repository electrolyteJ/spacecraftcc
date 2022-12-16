#include <iostream>
#include <glog/logging.h>
int main() {
    const char *tag = "spacecraftcc";
    google::InitGoogleLogging(tag);
    FLAGS_alsologtostderr = true;
    LOG(INFO) << "------conan test-----------------";
    google::ShutdownGoogleLogging();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
