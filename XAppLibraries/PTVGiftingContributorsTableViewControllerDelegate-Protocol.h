//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
