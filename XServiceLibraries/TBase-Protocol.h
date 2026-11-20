//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TBase_Protocol_h
#define TBase_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TBase <NSObject>

@required

/* required instance methods */
- (void)read:(id)read;
- (void)write:(id)write;

@optional

@end

#endif /* TBase_Protocol_h */
