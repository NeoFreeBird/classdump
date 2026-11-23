//
#ifndef T1OnboardingUserFacepileViewActionButton_h
#define T1OnboardingUserFacepileViewActionButton_h
@import Foundation;

@class TFNButton;

@interface T1OnboardingUserFacepileViewActionButton : TFNButton

@property (nonatomic) _Bool internalSelected;
@property (nonatomic) _Bool matchesFollowButtonSize;

/* instance methods */
- (void)setSelected:(_Bool)selected;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* T1OnboardingUserFacepileViewActionButton_h */
