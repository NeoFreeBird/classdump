//
#ifndef NOZZipEntry_Protocol_h
#define NOZZipEntry_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@protocol NOZZipEntry <NSObject, NSCopying>

@required

/* required instance methods */
- (id)name;
- (id)comment;
- (float)compressionLevel;
- (unsigned short)compressionMethod;
- (id)copy;

@optional

@end

#endif /* NOZZipEntry_Protocol_h */
