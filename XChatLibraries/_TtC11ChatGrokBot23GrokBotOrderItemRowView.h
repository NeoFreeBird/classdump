//
#ifndef _TtC11ChatGrokBot23GrokBotOrderItemRowView_h
#define _TtC11ChatGrokBot23GrokBotOrderItemRowView_h
@import Foundation;

@class ChatGrokBot.GrokBotOrderThumbnailView, UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotOrderItemRowView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel amountLabel;
    __C.UILabel detailLabel;
    ChatGrokBot.GrokBotOrderThumbnailView thumbnailView;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot23GrokBotOrderItemRowView_h */
