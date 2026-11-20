//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGiftingContributorTableViewCellDelegate_Protocol_h
#define PTVGiftingContributorTableViewCellDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGiftingContributorTableViewCellDelegate <NSObject>

@required

/* required instance methods */
- (void)giftingContributorTableViewCellDidTapFollowButton:(id)button;

@optional

@end

#endif /* PTVGiftingContributorTableViewCellDelegate_Protocol_h */
