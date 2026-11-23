//
#ifndef PTVGuestCalledInTableViewCellDelegate_Protocol_h
#define PTVGuestCalledInTableViewCellDelegate_Protocol_h
@import Foundation;

#include "PTVChatTableViewCellDelegate-Protocol.h"

@protocol PTVGuestCalledInTableViewCellDelegate <PTVChatTableViewCellDelegate>

@required

/* required instance methods */
- (void)guestCalledInCell:(id)cell didSelectAddGuestButton:(id)button;
- (void)guestCalledInCell:(id)cell addGuestButtonDidCompleteCountdown:(id)countdown;

@optional

@end

#endif /* PTVGuestCalledInTableViewCellDelegate_Protocol_h */
