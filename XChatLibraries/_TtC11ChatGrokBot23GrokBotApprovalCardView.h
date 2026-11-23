//
#ifndef _TtC11ChatGrokBot23GrokBotApprovalCardView_h
#define _TtC11ChatGrokBot23GrokBotApprovalCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotApprovalCardBatch ?, ChatGrokBot.GrokBotAutoReviewBatchPagerView, ChatGrokBot.GrokBotAutoReviewPauseTextView, ChatGrokBot.GrokBotCardHeaderRowView ?, ChatGrokBot.GrokBotCardReceiptLineView, ChatGrokBot.GrokBotCardSplitButton, GrokBotRelay.ArgsResolveAutoReviewApprovalResolution _$scSg ->, Swift.Bool, UIView, _$s13XDesignSystem6ButtonC13ConfigurationCMn, _$s13XDesignSystem6ButtonCMn, _$sSSSg, _$sSo11UIImageViewC, _$sSo7UILabelC, _$sSo9UIControlC, _$syycSg;

@interface ChatGrokBot.GrokBotApprovalCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardSplitButton allowButton;
    nominal type descriptor for XDesignSystem.Button backButton;
    ChatGrokBot.GrokBotApprovalCardBatch ? batch;
    nominal type descriptor for XDesignSystem.Button denyButton;
    nominal type descriptor for XDesignSystem.Button.Configuration denyConfiguration;
    __C.UIImageView moreView;
    __C.UILabel descriptionLabel;
    ChatGrokBot.GrokBotCardHeaderRowView ? $__lazy_storage_$_headerRowView;
    __C.UIControl openControl;
    nominal type descriptor for XDesignSystem.Button outcomeButton;
    nominal type descriptor for XDesignSystem.Button.Configuration outcomeConfiguration;
    ChatGrokBot.GrokBotAutoReviewBatchPagerView pagerView;
    ChatGrokBot.GrokBotAutoReviewPauseTextView pauseTextView;
    __C.UILabel quoteLabel;
    ChatGrokBot.GrokBotCardReceiptLineView receiptLineView;
    Swift.String? alwaysAllowRequestID;
    Swift.Bool isResolved;
    GrokBotRelay.ArgsResolveAutoReviewApprovalResolution _$scSg -> onApproval;
    (() -> ())? onOpen;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTapOpen;

@end

#endif /* _TtC11ChatGrokBot23GrokBotApprovalCardView_h */
