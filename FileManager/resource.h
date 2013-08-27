#ifndef RESOURCE_H_
#define RESOURCE_H_

class AbstractResource {
	public:
		AbstractResource();
		const char* getPath() const;
		virtual const char* getName() const;
		const char* getUUID() const;
		virtual const size_t getSize() const;
		virtual const bool isDirty() const;
		virtual int getStart();
		virtual int getEnd();
	private:
		char* path;
		char* name;
		int uuid;
		size_t size;
		bool dirty;
		int start;
		int end;
}

#endif
