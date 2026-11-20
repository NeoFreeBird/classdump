//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
