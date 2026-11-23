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
