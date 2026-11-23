//
#ifndef _TtC11ChatGrokBot31GrokBotAutoReviewFooterNoteView_h
#define _TtC11ChatGrokBot31GrokBotAutoReviewFooterNoteView_h
@import Foundation;

@class ChatGrokBot.GrokBotAutoReviewBatchPagerView, GrokBotRelay.ArgsResolveAutoReviewApprovalResolution _$scSg ->, Swift.Bool, UIView, _$s13XDesignSystem6ButtonCMn, _$sSo7UILabelC, _$sySScSg;

@interface ChatGrokBot.GrokBotAutoReviewFooterNoteView : UIView { // (Swift)
    /* instance variables */
    GrokBotRelay.ArgsResolveAutoReviewApprovalResolution _$scSg -> onAnswer;
    ((Swift.String) -> ())? onPage;
    Swift.Bool hasContent;
    nominal type descriptor for XDesignSystem.Button allowOnceButton;
    nominal type descriptor for XDesignSystem.Button alwaysButton;
    nominal type descriptor for XDesignSystem.Button denyButton;
    ChatGrokBot.GrokBotAutoReviewBatchPagerView pagerView;
    __C.UILabel failureLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* _TtC11ChatGrokBot31GrokBotAutoReviewFooterNoteView_h */
