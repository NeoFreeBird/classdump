//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot30GrokBotPublishApprovalCardView_h
#define _TtC11ChatGrokBot30GrokBotPublishApprovalCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardHeaderRowView ?, ChatGrokBot.GrokBotPublishAccessPickerView, ChatGrokBot.GrokBotPublishActionRowView, ChatGrokBot.GrokBotPublishHostLineView, ChatGrokBot.GrokBotPublishPreviewView, ChatGrokBot.GrokBotPublishReviewView, ChatGrokBot.GrokBotPublishSlugFieldView, ChatGrokBot.GrokBotPublishStepsView, UIView, _$sSaySo7UILabelCG, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotPublishApprovalCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotPublishAccessPickerView accessPickerView;
    ChatGrokBot.GrokBotPublishActionRowView actionRowView;
    __C.UILabel bodyLabel;
    ChatGrokBot.GrokBotPublishHostLineView hostLineView;
    __C.UILabel newChangesLabel;
    [__C.UILabel] noteLabels;
    ChatGrokBot.GrokBotPublishPreviewView previewView;
    ChatGrokBot.GrokBotPublishReviewView reviewView;
    ChatGrokBot.GrokBotPublishSlugFieldView slugFieldView;
    __C.UILabel statusLabel;
    ChatGrokBot.GrokBotPublishStepsView stepsView;
    ChatGrokBot.GrokBotCardHeaderRowView ? $__lazy_storage_$_headerView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot30GrokBotPublishApprovalCardView_h */
