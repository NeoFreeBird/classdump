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
- (void)subscription:(id)subscription didChangeState:(long long)state;

@end

#endif /* TLPSubscriptionDelegate_Protocol_h */
