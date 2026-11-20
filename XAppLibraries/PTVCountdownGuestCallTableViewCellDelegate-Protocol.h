//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
