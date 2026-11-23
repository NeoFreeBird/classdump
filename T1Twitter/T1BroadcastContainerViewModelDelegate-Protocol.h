//
#ifndef T1BroadcastContainerViewModelDelegate_Protocol_h
#define T1BroadcastContainerViewModelDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1BroadcastContainerViewModelDelegate <NSObject>

@required

/* required instance methods */
- (void)broadcastContainerViewModelDidUpdate:(id)update;

@optional

@end

#endif /* T1BroadcastContainerViewModelDelegate_Protocol_h */
