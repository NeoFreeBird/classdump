//
#ifndef PTVModerationModalView_h
#define PTVModerationModalView_h
@import Foundation;

#include "PTVTitleSubtitleModalView.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface PTVModerationModalView : PTVTitleSubtitleModalView {
    /* instance variables */
    UILabel *_exampleLabel;
    UIView *_exampleContainerView;
    UIView *_messageContainerView;
    UILabel *_messageLabel;
    UIImageView *_avatarImageView;
    UIView *_exampleDividingLine;
    UIButton *_abusiveButton;
    UIButton *_looksOKButton;
    UIButton *_notSureButton;
    UILabel *_settingsFooterLabel;
}

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithDelegate:(id)delegate headerBackgroundColor:(id)color headerImage:(id)image title:(id)title attributedSubtitle:(id)subtitle mainActionTitle:(id)title secondaryActionTitle:(id)title footerLabel:(id)label modalTheme:(long long)theme useConstrainedHeight:(_Bool)height;

@end

#endif /* PTVModerationModalView_h */
