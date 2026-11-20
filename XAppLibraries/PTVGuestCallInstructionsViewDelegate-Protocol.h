//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestCallInstructionsViewDelegate_Protocol_h
#define PTVGuestCallInstructionsViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestCallInstructionsViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)guestCallInstructionsViewDidTapOnSubtitleLabel:(id)label;

@end

#endif /* PTVGuestCallInstructionsViewDelegate_Protocol_h */
