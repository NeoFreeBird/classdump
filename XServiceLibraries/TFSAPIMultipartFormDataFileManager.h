//
#ifndef TFSAPIMultipartFormDataFileManager_h
#define TFSAPIMultipartFormDataFileManager_h
@import Foundation;

@class NSObject;

@interface TFSAPIMultipartFormDataFileManager : NSObject

/* class methods */
+ (id)multipartDataDirectory;
+ (id)uniqueTemporaryFilePath;

@end

#endif /* TFSAPIMultipartFormDataFileManager_h */
