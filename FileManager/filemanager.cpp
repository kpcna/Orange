#include "filemanager.h"
#include <QStandardItemModel>
#include <sys/stat.h>
#include <sys/errno.h>


FileManager::FileManager(){
	projectFiles = new std::map<int,Element>();
}

FileManager::~FileManager(){}


/**
 * @brief Initiate Project dir structure
 * Create or Load a project from path
 */
int FileManager::init(char* path){
	int err = mkdir (path, 0x744);
	if(err = -1){
		if(errno == EEXIST){
			// load Project
		}
		else{
			std::cerr << "Invalid project path" << endl;
			return -1;
		}
	}
	// initiate new Project
	
	return 0;
}

//TODO: Any better data-structure?
void FileManager::addResource(Element* e){
	static int count = 0;
	e->setId(count);
	projectFiles->insert (std::pair<int,Element*>(count, e))
}

void FileManager::removeResource(int id){}
