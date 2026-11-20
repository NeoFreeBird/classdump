//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVFollowUnfollowAccessoryButton_h
#define PTVFollowUnfollowAccessoryButton_h
@import Foundation;

#include "PTVExtendedButton.h"

@class UIImage, UIImageView;

@interface PTVFollowUnfollowAccessoryButton : PTVExtendedButton {
    /* instance variables */
    UIImage *_unfollowImage;
    UIImage *_unfollowImageHighlighted;
    UIImage *_followImage;
    UIImage *_followImageHighlighted;
    UIImageView *_muteImage;
}

@property (nonatomic) unsigned long long followingState;

/* class methods */
+ (id)UnfollowAccessoryImage;

/* instance methods */
- (id)init;
- (void)layoutSubviews;
- (void)executeFollowingState;

@end

#endif /* PTVFollowUnfollowAccessoryButton_h */
