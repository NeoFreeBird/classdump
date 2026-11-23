//
#ifndef _TtC20ChatConversationList19TypingIndicatorView_h
#define _TtC20ChatConversationList19TypingIndicatorView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSaySo12CAShapeLayerCG, _$sSo11UIImageViewC;

@interface ChatConversationList.TypingIndicatorView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView imageView;
    [__C.CAShapeLayer] dotLayers;
    Swift.Bool isAnimating;
    Swift.Bool usesSymbolEffect;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC20ChatConversationList19TypingIndicatorView_h */
