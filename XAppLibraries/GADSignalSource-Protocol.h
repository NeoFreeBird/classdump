//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADSignalSource_Protocol_h
#define GADSignalSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADSignalSource <NSObject>

@required

@optional

/* optional instance methods */
- (void)getSignalUpdateQueue:(id *)queue signalCreationBlock:(id /* block */ *)block;
- (void)getAsynchronousSignalCreationBlock:(id /* block */ *)block;

@end

#endif /* GADSignalSource_Protocol_h */
