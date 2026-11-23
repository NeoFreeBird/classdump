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
