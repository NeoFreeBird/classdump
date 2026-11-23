//
#ifndef PTVGiftingContributorsTableViewControllerDelegate_Protocol_h
#define PTVGiftingContributorsTableViewControllerDelegate_Protocol_h
@import Foundation;

@protocol PTVGiftingContributorsTableViewControllerDelegate

@required

/* required instance methods */
- (void)giftingContributorsViewController:(id)controller didSelectContributor:(id)contributor;
- (_Bool)giftingContributorsViewControllerShouldShowFollowButtons:(id)buttons;

@optional

@end

#endif /* PTVGiftingContributorsTableViewControllerDelegate_Protocol_h */
