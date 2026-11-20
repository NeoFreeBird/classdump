//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatFollowBroadcasterTableViewCellKVO_h
#define PTVChatFollowBroadcasterTableViewCellKVO_h
@import Foundation;

#include "PTVChatFollowBroadcasterTableViewCell.h"
#include "PTVChatFollowBroadcasterTableViewCellKVODelegate-Protocol.h"
#include "PTVMessage.h"

@interface PTVChatFollowBroadcasterTableViewCellKVO : PTVChatFollowBroadcasterTableViewCell {
    /* instance variables */
    PTVMessage *_message;
}

@property (weak, nonatomic) id <PTVChatFollowBroadcasterTableViewCellKVODelegate> followDelegate;

/* instance methods */
- (void)executeState;
- (void)handleTap;
- (void)setMessage:(id)message isFollowing:(_Bool)following;

@end

#endif /* PTVChatFollowBroadcasterTableViewCellKVO_h */
