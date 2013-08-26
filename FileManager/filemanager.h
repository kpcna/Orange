#ifndef FILEMANAGER_H_
#define FILEMANAGER_H_

/**
 * @brief Orange Project's file manager
 */

#include <map>
#include "Element.h"
class QStandardItemModel;

struct PROJECT_CONF {};

class FileManager {
	public:
		// Project
		FileManager();
		~FileManager();
		int init(char* path);
		
		// Project Metadata
		//void readMetafile(char* path);
		//void writeMetafile(char* path);
		
		// Elements
		void addResource(Element* e);
		void addResource(char* path);
		void removeResource(Element* e);
		void removeResource(int id);
		Element* getResource(int id);
		
		// Visualization
		QStandardItemModel* getProjectModel ();
	private:
		std::map<int,Element>* projectFiles;
		char* rootFolder;
}

#endif //FILEMANAGER_H_
