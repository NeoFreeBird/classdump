//
#ifndef _TtC11ChatGrokBot30GrokBotAutoReviewBatchCardView_h
#define _TtC11ChatGrokBot30GrokBotAutoReviewBatchCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotApprovalCardView, ChatGrokBot.GrokBotCardReceiptLineView, UIView, _$sSS7groupID_SS07requestB0tSg, _$sSo9UIControlC, _$syycSg;

@interface ChatGrokBot.GrokBotAutoReviewBatchCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotApprovalCardView approvalView;
    __C.UIControl openControl;
    (() -> ())? onReopen;
    ChatGrokBot.GrokBotCardReceiptLineView receiptLineView;
    (groupID: Swift.String, requestID: Swift.String)? shownPage;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTapReopen;

@end

#endif /* _TtC11ChatGrokBot30GrokBotAutoReviewBatchCardView_h */
