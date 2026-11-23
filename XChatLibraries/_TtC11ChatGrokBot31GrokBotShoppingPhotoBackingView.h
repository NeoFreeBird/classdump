//
#ifndef _TtC11ChatGrokBot31GrokBotShoppingPhotoBackingView_h
#define _TtC11ChatGrokBot31GrokBotShoppingPhotoBackingView_h
@import Foundation;

@class ChatGrokBot.GrokBotShoppingPhotoFit, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewC, _$sSo15CAGradientLayerC, __C.CGSize ?;

@interface ChatGrokBot.GrokBotShoppingPhotoBackingView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView backdropView;
    __C.CAGradientLayer leftFillLayer;
    __C.CAGradientLayer rightFillLayer;
    ChatGrokBot.GrokBotShoppingPhotoFit fit;
    __C.CGSize ? imageSize;
    nominal type descriptor for CoreGraphics.CGFloat photoHeight;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC11ChatGrokBot31GrokBotShoppingPhotoBackingView_h */
