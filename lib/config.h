
#ifndef CPT_180_27_ASSIGNMENT_3_LIBRARIES_CONFIG_H
#define CPT_180_27_ASSIGNMENT_3_LIBRARIES_CONFIG_H
#endif //CPT_180_27_ASSIGNMENT_3_LIBRARIES_CONFIG_H
#include <iostream>
#include <fstream>
#include <./config.h>

namespace config_reader{

    std::string* read_config(std::string config_file_path);
}