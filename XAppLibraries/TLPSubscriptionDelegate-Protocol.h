//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLPSubscriptionDelegate_Protocol_h
#define TLPSubscriptionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLPSubscriptionDelegate <NSObject>

@required

/* required instance methods */
- (void)subscription:(id)subscription didReceiveEvent:(id)event;

@optional

/* optional instance methods */
- (void)subscription:(id)subscription didChangeState:(long long)state;

@end

#endif /* TLPSubscriptionDelegate_Protocol_h */
