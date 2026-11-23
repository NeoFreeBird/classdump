//
#ifndef PTVFollowUnfollowButton_h
#define PTVFollowUnfollowButton_h
@import Foundation;

@class NSAttributedString, UIButton, UILabel;

@interface PTVFollowUnfollowButton : UIButton

@property (retain, nonatomic) UILabel *customTitleLabel;
@property (retain, nonatomic) NSAttributedString *blockedString;
@property (retain, nonatomic) NSAttributedString *followString;
@property (retain, nonatomic) NSAttributedString *followingString;
@property (nonatomic) struct CGSize { double x0; double x1; } largestPossibleStringSize;
@property (nonatomic) unsigned long long followingState;
@property (nonatomic) _Bool isBlocked;
@property (readonly, nonatomic) _Bool isFollowing;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })calculateLargestPossibleStringSizeWithFont:(id)font;
- (void)executeFollowingState;

@end

#endif /* PTVFollowUnfollowButton_h */
