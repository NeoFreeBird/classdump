//
#ifndef _TtC11ChatGrokBot28GrokBotShoppingCardPhotoView_h
#define _TtC11ChatGrokBot28GrokBotShoppingCardPhotoView_h
@import Foundation;

@class ChatGrokBot.GrokBotShoppingPhotoView, UIView, _$sSa -> _$s10Foundation3URLVMn, _$sSh -> _$s10Foundation3URLVMn, _$sSi, _$sSo11UIImageViewC;

@interface ChatGrokBot.GrokBotShoppingCardPhotoView : UIView { // (Swift)
    /* instance variables */
    Swift.Int shownIndex;
    ChatGrokBot.GrokBotShoppingPhotoView photoView;
    __C.UIImageView placeholderIconView;
    Swift.Set -> nominal type descriptor for Foundation.URL failedURLs;
    Swift.Array -> nominal type descriptor for Foundation.URL urls;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot28GrokBotShoppingCardPhotoView_h */
