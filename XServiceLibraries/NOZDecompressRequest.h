//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NOZDecompressRequest_h
#define NOZDecompressRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface NOZDecompressRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *destinationDirectoryPath;
@property (readonly, copy, nonatomic) NSString *sourceFilePath;

/* instance methods */
- (id)initWithSourceFilePath:(id)path;
- (id)initWithSourceFilePath:(id)path destinationDirectoryPath:(id)path;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* NOZDecompressRequest_h */
