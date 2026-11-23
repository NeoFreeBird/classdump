//
#ifndef _TtC6ChatUI19MessageExpandButton_h
#define _TtC6ChatUI19MessageExpandButton_h
@import Foundation;

@class UIControl, _$sSo11UIImageViewC, _$sSo7UIColorC, _$sSo7UILabelC;

@interface ChatUI.MessageExpandButton : UIControl { // (Swift)
    /* instance variables */
    __C.UILabel label;
    __C.UIImageView iconView;
    __C.UIColor tintColorValue;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)layoutSubviews;
- (_Bool)isHighlighted;

@end

#endif /* _TtC6ChatUI19MessageExpandButton_h */
