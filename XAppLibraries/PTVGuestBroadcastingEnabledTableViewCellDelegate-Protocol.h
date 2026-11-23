//
#ifndef PTVGuestBroadcastingEnabledTableViewCellDelegate_Protocol_h
#define PTVGuestBroadcastingEnabledTableViewCellDelegate_Protocol_h
@import Foundation;

#include "PTVChatTableViewCellDelegate-Protocol.h"

@protocol PTVGuestBroadcastingEnabledTableViewCellDelegate <PTVChatTableViewCellDelegate>

@required

/* required instance methods */
- (void)guestBroadcastingEnabledCellDidTapGuestBroadcastingButton:(id)button;

@optional

@end

#endif /* PTVGuestBroadcastingEnabledTableViewCellDelegate_Protocol_h */
