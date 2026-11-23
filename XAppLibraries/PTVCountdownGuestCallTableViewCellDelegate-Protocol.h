//
#ifndef PTVCountdownGuestCallTableViewCellDelegate_Protocol_h
#define PTVCountdownGuestCallTableViewCellDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVCountdownGuestCallTableViewCellDelegate <NSObject>

@required

/* required instance methods */
- (void)countdownCellDidCompleteCountdown:(id)countdown;
- (void)countdownCellDidPressCancelButton:(id)button;

@optional

@end

#endif /* PTVCountdownGuestCallTableViewCellDelegate_Protocol_h */
