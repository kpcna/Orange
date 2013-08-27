#ifndef FILEMANAGER_H_
#define FILEMANAGER_H_

class AbstractResource;
struct uuid_t;

/**
 * @brief Project manager interface
 */

class AbstractFileManager {
	public:
		virtual int loadProject (const char* path)=0;
		virtual int createProject  (const char* path)=0;
		virtual AbstractResource* getResource (uuid_t uuid)=0;
		virtual int addResource (AbstractResource &resource)=0;
		virtual int removeResource (AbstractResource &resource)=0;
}

#endif
