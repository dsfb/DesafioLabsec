#include "utils/FileIo.h"
#include <vector>

FileIo::~FileIo() {}

ByteArray FileIo::readFile(const char* filePath)
{
    /**
     * DOING(milestone1)
     */
    ByteArray ret;
    fstream file (filePath, ios::in|ios::binary|ios::ate);
    if (file.is_open()) {
        vector<unsigned char> mDataBuffer;

	while (file.good()) {
	    mDataBuffer.push_back(file.get());
	}

	ret = ByteArray(reinterpret_cast<char*>( &mDataBuffer[0] ));
        file.close();
    } else {
        TRACE(NOT_IMPLEMENTED);
    }
	return ret;
}

void FileIo::writeToFile(const char* filePath, ByteArray& data)
{
    /**
     * TODO(milestone2)
     */
    fstream file (filePath, ios::out|ios::binary|ios::trunc);
    if (file.is_open()) {
        TRACE(NOT_IMPLEMENTED);
        file.close();
    } else {
        TRACE(NOT_IMPLEMENTED);
    }
}
