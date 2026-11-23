//
#ifndef _TtC16ChatConversation18CarvedOutBadgeView_h
#define _TtC16ChatConversation18CarvedOutBadgeView_h
@import Foundation;

@class UIView, _$sSSSg;

@interface ChatConversation.CarvedOutBadgeView : UIView { // (Swift)
    /* instance variables */
    Swift.String? text;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation18CarvedOutBadgeView_h */
