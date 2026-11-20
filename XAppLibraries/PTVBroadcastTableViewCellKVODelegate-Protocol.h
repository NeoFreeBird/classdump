//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastTableViewCellKVODelegate_Protocol_h
#define PTVBroadcastTableViewCellKVODelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastTableViewCellKVODelegate <NSObject>

@required

/* required instance methods */
- (void)broadcastFeaturedStatusDidChangeForCell:(id)cell;

@optional

/* optional instance methods */
- (void)broadcastTableViewCell:(id)cell didSelectBroadcasterProfileWithID:(id)id;

@end

#endif /* PTVBroadcastTableViewCellKVODelegate_Protocol_h */
