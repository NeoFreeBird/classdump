//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
