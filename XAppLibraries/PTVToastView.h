//
#ifndef PTVToastView_h
#define PTVToastView_h
@import Foundation;

#include "PTVBannerPresentableContentView.h"

@class NSAttributedString, UILabel;

@interface PTVToastView : PTVBannerPresentableContentView {
    /* instance variables */
    NSAttributedString *_attributedMessage;
    id /* block */ _actionBlock;
}

@property (retain, nonatomic) UILabel *messageLabel;

/* class methods */
+ (id)DefaultBackgroundColor;

/* instance methods */
- (id)initWithMessage:(id)message backgroundColor:(id)color frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame actionBlock:(id /* block */)block;
- (id)initWithAttributedMessage:(id)message backgroundColor:(id)color frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame actionBlock:(id /* block */)block;
- (void)bindLayoutSpec;
- (double)presentationDuration;
- (id)accessibilityContents;
- (void)didTap;

@end

#endif /* PTVToastView_h */
