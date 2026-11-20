//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEntityURLProvider_Protocol_h
#define TFSTwitterEntityURLProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterEntityURLProvider <NSObject>

@required

/* required instance methods */
- (id)entityForURL:(id)url;

@optional

@end

#endif /* TFSTwitterEntityURLProvider_Protocol_h */
