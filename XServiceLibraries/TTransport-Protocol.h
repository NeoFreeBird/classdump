//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTransport_Protocol_h
#define TTransport_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTransport <NSObject>

@required

/* required instance methods */
- (int)readAll:(char *)all offset:(int)offset length:(int)length;
- (void)write:(const char *)write offset:(unsigned int)offset length:(unsigned int)length;
- (void)flush;

@optional

@end

#endif /* TTransport_Protocol_h */
