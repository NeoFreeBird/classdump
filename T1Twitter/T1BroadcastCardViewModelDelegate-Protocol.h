//
#ifndef T1BroadcastCardViewModelDelegate_Protocol_h
#define T1BroadcastCardViewModelDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1BroadcastCardViewModelDelegate <NSObject>

@required

/* required instance methods */
- (void)broadcastCardViewModelDidUpdate:(id)update;

@optional

@end

#endif /* T1BroadcastCardViewModelDelegate_Protocol_h */
