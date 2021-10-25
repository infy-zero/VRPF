#include <iostream>

#include "glog/logging.h"

int main(int argv, char** args) {
	std::string home = "../log/";  //要先创建此目录,否则运行报错.
	google::InitGoogleLogging(args[0]);
	std::string info_log = home + "master_info_";
	google::SetLogDestination(google::INFO, info_log.c_str());
	std::string warning_log = home + "master_warning_";
	google::SetLogDestination(google::WARNING, warning_log.c_str());
	std::string error_log = home + "master_error_";
	google::SetLogDestination(google::ERROR, error_log.c_str());
	std::string fatal_log = home + "master_fatal_";
	google::SetLogDestination(google::FATAL, fatal_log.c_str());
	LOG(ERROR) << "Hello World!";
	return 0;
}
