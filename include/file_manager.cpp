#include "file_manager.h"
#include <iostream>
#include <filesystem>
#include <string>
#define CONFIG_PATH  "/home/kaldwin/.config/"

std::string shorten_config_path(std::string path, std::string config_path) {
    std::string shortened_path;
    int difference = path.length() - config_path.length();
    shortened_path.reserve(difference);

    for (int i = config_path.length(); i < path.length(); i++){
        shortened_path.push_back(path[i]);
    }
    return shortened_path;
}

void print_config_items() { 
    std::string path_string = CONFIG_PATH;
    std::cout << "CONFIG FILES AVAILABLE:" << std::endl << std::endl; 

    for(const auto &entry : std::filesystem::directory_iterator(path_string)) { 
        std::string current_path = shorten_config_path(entry.path(), CONFIG_PATH);
        std::cout << current_path << std::endl; 
    }    
}



