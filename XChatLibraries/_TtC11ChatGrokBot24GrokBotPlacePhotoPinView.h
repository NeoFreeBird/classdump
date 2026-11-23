//
#ifndef _TtC11ChatGrokBot24GrokBotPlacePhotoPinView_h
#define _TtC11ChatGrokBot24GrokBotPlacePhotoPinView_h
@import Foundation;

@class ChatGrokBot.GrokBotShoppingPhotoView, UIView, _$sSo12CAShapeLayerC;

@interface ChatGrokBot.GrokBotPlacePhotoPinView : UIView { // (Swift)
    /* instance variables */
    __C.CAShapeLayer maskLayer;
    ChatGrokBot.GrokBotShoppingPhotoView photoView;
    __C.CAShapeLayer rimLayer;
    __C.CAShapeLayer rimMaskLayer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot24GrokBotPlacePhotoPinView_h */
