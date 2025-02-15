#pragma once
#include <stdio.h>

struct FileMetadata {
	char* fileName;
	int fileSize;
	int crc32;
	int chunkCount;
};

class fileHandler
{
public:
	void loadAndSendFileMetadata(char* fileName, int fileSize); // client
	void receiveMetaData(); // server
	void loadFile(); // client
	void storeFile(); // server
	void sendFile(); // client
	void recieveFile(); // server
	void verifyFile(); // server
	void sendFilePackege(); // client 

};

