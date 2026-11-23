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
