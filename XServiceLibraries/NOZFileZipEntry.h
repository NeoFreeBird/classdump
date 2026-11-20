//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NOZFileZipEntry_h
#define NOZFileZipEntry_h
@import Foundation;

#include "NOZAbstractZipEntry.h"
#include "NOZZippableEntry-Protocol.h"

@class NSString;

@interface NOZFileZipEntry : NOZAbstractZipEntry <NOZZippableEntry>

@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithName:(id)name;
- (id)initWithFilePath:(id)path name:(id)name;
- (id)initWithFilePath:(id)path;
- (id)initWithEntry:(id)entry;
- (long long)sizeInBytes;
- (id)timestamp;
- (_Bool)canBeZipped;
- (id)inputStream;

@end

#endif /* NOZFileZipEntry_h */
