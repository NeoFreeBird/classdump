//
#ifndef PTVGuestCallButtonWithSubtitleTableViewCellDelegate_Protocol_h
#define PTVGuestCallButtonWithSubtitleTableViewCellDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestCallButtonWithSubtitleTableViewCellDelegate <NSObject>

@required

/* required instance methods */
- (void)guestCallButtonWithSubtitleTableViewCell:(id)cell didSelectButton:(id)button;

@optional

@end

#endif /* PTVGuestCallButtonWithSubtitleTableViewCellDelegate_Protocol_h */
