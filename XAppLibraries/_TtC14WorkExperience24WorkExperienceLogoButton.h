//
#ifndef _TtC14WorkExperience24WorkExperienceLogoButton_h
#define _TtC14WorkExperience24WorkExperienceLogoButton_h
@import Foundation;

@class UIControl, WorkExperience.WorkExperienceLogoView, _$syyc;

@interface WorkExperience.WorkExperienceLogoButton : UIControl { // (Swift)
    /* instance variables */
    WorkExperience.WorkExperienceLogoView logoView;
    () -> () onTap;
}

@property (nonatomic) _Bool highlighted;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)isHighlighted;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14WorkExperience24WorkExperienceLogoButton_h */
