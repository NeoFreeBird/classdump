//
#ifndef _TtC11ChatGrokBot33GrokBotShoppingProductPreviewView_h
#define _TtC11ChatGrokBot33GrokBotShoppingProductPreviewView_h
@import Foundation;

@class ChatGrokBot.GrokBotShoppingPhotoView, UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotShoppingProductPreviewView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel nameLabel;
    ChatGrokBot.GrokBotShoppingPhotoView photoView;
    __C.UILabel priceLabel;
    __C.UILabel ratingLabel;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot33GrokBotShoppingProductPreviewView_h */
