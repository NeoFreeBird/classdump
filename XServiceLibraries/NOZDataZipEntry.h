//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NOZDataZipEntry_h
#define NOZDataZipEntry_h
@import Foundation;

#include "NOZAbstractZipEntry.h"
#include "NOZZippableEntry-Protocol.h"

@class NSData, NSString;

@interface NOZDataZipEntry : NOZAbstractZipEntry <NOZZippableEntry>

@property (readonly, nonatomic) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithName:(id)name;
- (id)initWithData:(id)data name:(id)name;
- (id)initWithEntry:(id)entry;
- (id)timestamp;
- (long long)sizeInBytes;
- (_Bool)canBeZipped;
- (id)inputStream;

@end

#endif /* NOZDataZipEntry_h */
