//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot23GrokBotDiningHeaderView_h
#define _TtC11ChatGrokBot23GrokBotDiningHeaderView_h
@import Foundation;

@class ChatGrokBot.GrokBotShoppingPhotoView, ChatGrokBot.GrokBotYelpRatingView, UIControl, _$s10Foundation3URLVMn ?, _$s10Foundation3URLVMn _$scSg ->, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotDiningHeaderView : UIControl { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL _$scSg -> onOpenLink;
    __C.UILabel addressLabel;
    __C.UILabel factsLabel;
    __C.UILabel nameLabel;
    ChatGrokBot.GrokBotShoppingPhotoView photoView;
    ChatGrokBot.GrokBotYelpRatingView yelpRatingView;
    nominal type descriptor for Foundation.URL ? url;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)isHighlighted;

@end

#endif /* _TtC11ChatGrokBot23GrokBotDiningHeaderView_h */
