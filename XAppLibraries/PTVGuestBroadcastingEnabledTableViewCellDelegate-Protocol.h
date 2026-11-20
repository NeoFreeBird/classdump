//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
