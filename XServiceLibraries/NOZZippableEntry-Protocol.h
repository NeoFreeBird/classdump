//
#ifndef NOZZippableEntry_Protocol_h
#define NOZZippableEntry_Protocol_h
@import Foundation;

#include "NOZZipEntry-Protocol.h"

@protocol NOZZippableEntry <NOZZipEntry>

@required

/* required instance methods */
- (id)timestamp;
- (long long)sizeInBytes;
- (_Bool)canBeZipped;
- (id)inputStream;

@optional

@end

#endif /* NOZZippableEntry_Protocol_h */
