#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <stdlib.h>

class file {
private:
    std::string fileType;
    std::string name;
    std::string consoleMessage;
public:
    void setFileType(std::string newFileType) {
        this->fileType = newFileType;
    }
    void setName(std::string newName) {
        this->name = newName;
    }
    void setConsoleMessage(std::string newConsoleMessage = "Hello World!") {
        this->consoleMessage = newConsoleMessage;
    }
    std::string getFileType() {
        return this->fileType;
    }
    std::string getName() {
        return this->name;
    }
    std::string getConsoleMessage() {
        return this->consoleMessage;
    }
};

int main() {
    file File;
    
    system("clear");
    std::cout << "\t -- Script File Generator --" << "\n";
    std::cout << "Please select a language: " << "\n";
    std::cout << "1) HTML \n";
    std::cout << "2) Node.JS \n";
    std::cout << "3) C++ \n";
    std::cout << "4) Java \n";
    std::cout << "5) C \n";
    
    int fileId;
    std::cin >> fileId;
    
    switch(fileId) {
        case 1:
            File.setFileType("html");
            break;
        case 2:
            File.setFileType("js");
            break;
        case 3:
            File.setFileType("cpp");
            break;
        case 4:
            File.setFileType("java");
            break;
        case 5:
            File.setFileType("c");
            break;
        default:
            std::cout << "error: not a valid number";
            return -1;
    }
    
    std::cout << "Enter a name for the file: \n";
    
    std::string name;
    std::cin >> name;
    
    File.setName(name);
    
    std::string example = "";
    
    std::cout << "Enter an example message: (default: Hello world) \n For default message type 0 \n";
    std::cin >> example;
    if(example == "0") {
        File.setConsoleMessage();
    } else {
        File.setConsoleMessage(example);
    }
    
    std::string fileName = name + "." + File.getFileType();
    
    std::ofstream outfile(fileName);
    
    example = File.getConsoleMessage();
    
    switch(fileId) {
        case 1:
            outfile << "<html> \n";
            outfile << "<head> \n";
            outfile << "<title>Application</title>";
            outfile << "</head> \n";
            outfile << "<body> \n\n";
            outfile << "<h1>" + example + "</h1> \n\n";
            outfile << "</body> \n";
            outfile << "</html>";
            break;
        case 2:
            outfile << "// Node.JS / Plain Javascript generated file";
            outfile << "\n let message = " + example;
            outfile << "\n\n console.log(\" " + example + "\") // Logs the message to the console";
            break;
        case 3:
            outfile << "#include <iostream>\n\n";
            outfile << "int main() { \n";
            outfile << "    std::cout <<\" " + example + "\"; \n";
            outfile << "    return 0; \n";
            outfile << "}";
            break;
        case 4:
            outfile << "public class app { \n";
            outfile << "    public static void main(String[] args) { \n";
            outfile << "        System.out.println(\"" + example + "\"); \n";
            outfile << "    } \n";
            outfile << "}";
            break;
        case 5:
            outfile << "#include <stdio.h>\n\n";
            outfile << "int main() { \n";
            outfile << "    printf(\"" + example + "\"); \n";
            outfile << "    return 0; \n";
            outfile << "}";
            break;
        default:
            std::cout << "an error has occured while generating the file";
            return -1;
            break;
    }
    
    outfile.close();
    
    std::cout << "file generated succesfully \n";
    
}
