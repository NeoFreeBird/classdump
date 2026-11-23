//
#ifndef _TtC6ChatUI35MessageListScrollToBottomButtonView_h
#define _TtC6ChatUI35MessageListScrollToBottomButtonView_h
@import Foundation;

@class Swift.Bool, UIControl, _$sSo11UIImageViewC, _$sSo13UILayoutGuideCSg, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC;

@interface ChatUI.MessageListScrollToBottomButtonView : UIControl { // (Swift)
    /* instance variables */
    Swift.Bool isVisible;
    __C.UIView contentView;
    __C.UIImageView imageView;
    __C.UILayoutGuide? bottomChromeLayoutGuide;
    __C.NSLayoutConstraint? bottomConstraint;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)tintColorDidChange;
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6ChatUI35MessageListScrollToBottomButtonView_h */
