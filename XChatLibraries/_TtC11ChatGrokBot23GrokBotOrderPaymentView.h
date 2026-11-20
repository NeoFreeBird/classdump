//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot23GrokBotOrderPaymentView_h
#define _TtC11ChatGrokBot23GrokBotOrderPaymentView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC, __C.CGSize;

@interface ChatGrokBot.GrokBotOrderPaymentView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView glyphView;
    __C.UIView markView;
    __C.UILabel markLabel;
    __C.UILabel nameLabel;
    __C.UIImageView networkImageView;
    __C.UILabel textLabel;
    __C.CGSize glyphSize;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC11ChatGrokBot23GrokBotOrderPaymentView_h */
