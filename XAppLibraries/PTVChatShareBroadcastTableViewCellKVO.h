//
#ifndef PTVChatShareBroadcastTableViewCellKVO_h
#define PTVChatShareBroadcastTableViewCellKVO_h
@import Foundation;

#include "PTVChatShareBroadcastTableViewCell.h"
#include "PTVChatShareBroadcastTableViewCellDelegate-Protocol.h"
#include "PTVMessage.h"

@interface PTVChatShareBroadcastTableViewCellKVO : PTVChatShareBroadcastTableViewCell

@property (weak, nonatomic) id <PTVChatShareBroadcastTableViewCellDelegate> shareDelegate;
@property (retain, nonatomic) PTVMessage *message;
@property (nonatomic) _Bool fromBroadcasterAction;

/* instance methods */
- (void)executeState;
- (void)handleTap;

@end

#endif /* PTVChatShareBroadcastTableViewCellKVO_h */
