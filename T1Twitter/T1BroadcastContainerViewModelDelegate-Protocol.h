//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
