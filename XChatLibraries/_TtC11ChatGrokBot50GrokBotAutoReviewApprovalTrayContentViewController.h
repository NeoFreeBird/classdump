//
#ifndef _TtC11ChatGrokBot50GrokBotAutoReviewApprovalTrayContentViewController_h
#define _TtC11ChatGrokBot50GrokBotAutoReviewApprovalTrayContentViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotAutoReviewAsk ?, ChatGrokBot.GrokBotAutoReviewCodeSectionView, ChatGrokBot.GrokBotAutoReviewFieldView, ChatGrokBot.GrokBotAutoReviewFieldsGroupView, ChatGrokBot.GrokBotAutoReviewFooterNoteView, ChatGrokBot.GrokBotAutoReviewPause _$scSg ->, ChatGrokBot.GrokBotAutoReviewRequestSectionView, ChatGrokBot.GrokBotAutoReviewTrayPager ?, ChatGrokBot.GrokBotAutoReviewUnavailableView, GrokBotRelay.ArgsResolveAutoReviewApprovalResolution ?, GrokBotRelay.ArgsResolveAutoReviewApprovalResolution _$scSg ->, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSS, _$sSSSg, _$sySScSg;

@interface ChatGrokBot.GrokBotAutoReviewApprovalTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    GrokBotRelay.ArgsResolveAutoReviewApprovalResolution _$scSg -> onAnswer;
    ChatGrokBot.GrokBotAutoReviewPause _$scSg -> onOpenPause;
    ((Swift.String) -> ())? onPage;
    ChatGrokBot.GrokBotAutoReviewAsk ? ask;
    GrokBotRelay.ArgsResolveAutoReviewApprovalResolution ? busyResolution;
    ChatGrokBot.GrokBotAutoReviewCodeSectionView codeSectionView;
    Swift.String? failureText;
    ChatGrokBot.GrokBotAutoReviewFieldsGroupView fieldsGroupView;
    ChatGrokBot.GrokBotAutoReviewFooterNoteView footerNoteView;
    Swift.String headerTitle;
    ChatGrokBot.GrokBotAutoReviewTrayPager ? pager;
    ChatGrokBot.GrokBotAutoReviewRequestSectionView requestSectionView;
    ChatGrokBot.GrokBotAutoReviewFieldView ruleNoteFieldView;
    ChatGrokBot.GrokBotAutoReviewUnavailableView unavailableView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot50GrokBotAutoReviewApprovalTrayContentViewController_h */
