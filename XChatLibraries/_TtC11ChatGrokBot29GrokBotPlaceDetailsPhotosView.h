//
#ifndef _TtC11ChatGrokBot29GrokBotPlaceDetailsPhotosView_h
#define _TtC11ChatGrokBot29GrokBotPlaceDetailsPhotosView_h
@import Foundation;

@class UIView, _$sSa -> ChatGrokBot.GrokBotShoppingPhotoView, _$sSo12UIScrollViewC;

@interface ChatGrokBot.GrokBotPlaceDetailsPhotosView : UIView { // (Swift)
    /* instance variables */
    __C.UIScrollView scrollView;
    Swift.Array -> ChatGrokBot.GrokBotShoppingPhotoView photoViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot29GrokBotPlaceDetailsPhotosView_h */
