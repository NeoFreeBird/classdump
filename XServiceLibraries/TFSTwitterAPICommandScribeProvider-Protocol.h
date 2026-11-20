//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPICommandScribeProvider_Protocol_h
#define TFSTwitterAPICommandScribeProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterAPICommandScribeProvider <NSObject>

@required

/* required instance methods */
- (id)accountScribeForCommand:(id)command;
- (id)guestScribeForCommand:(id)command;

@optional

@end

#endif /* TFSTwitterAPICommandScribeProvider_Protocol_h */
