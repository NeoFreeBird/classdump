//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation26MessageBookingLinkCardView_h
#define _TtC16ChatConversation26MessageBookingLinkCardView_h
@import Foundation;

@class ChatConversation.MessageBookingLinkAction ?, ChatConversation.MessageBookingLinkAction _$scSg ->, ChatConversation.MessageBookingLinkOwnerView, ChatConversation.MessageBookingLinkScheduleView, ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardTitleBarView, ChatModels.MessageBookingLinkSelection ?, ChatModels.MessageBookingLinkSelection _$sSgcSg ->, Swift.Bool, UIView, _$s13XDesignSystem5InputCMn, _$sSS, _$sSSSg, _$sSo22UITapGestureRecognizerCSg, _$sSo7UILabelC;

@interface ChatConversation.MessageBookingLinkCardView : UIView { // (Swift)
    /* instance variables */
    ChatConversation.MessageBookingLinkAction _$scSg -> onAction;
    ChatModels.MessageBookingLinkSelection _$sSgcSg -> onSelectionChange;
    ChatGrokBot.GrokBotCardButton bookButton;
    __C.UILabel bookedTitleLabel;
    __C.UILabel bookedWhenLabel;
    __C.UILabel bookedWithLabel;
    ChatGrokBot.GrokBotCardButton continueButton;
    ChatGrokBot.GrokBotCardButton joinButton;
    ChatGrokBot.GrokBotCardButton moreTimesButton;
    __C.UILabel noteLabel;
    ChatConversation.MessageBookingLinkOwnerView ownerView;
    nominal type descriptor for XDesignSystem.Input pinInput;
    __C.UILabel refusalLabel;
    ChatGrokBot.GrokBotCardButton retryButton;
    ChatConversation.MessageBookingLinkScheduleView scheduleView;
    ChatGrokBot.GrokBotCardTitleBarView titleBarView;
    __C.UITapGestureRecognizer? $__lazy_storage_$_loadTimesTapRecognizer;
    __C.UITapGestureRecognizer? $__lazy_storage_$_ownerCardTapRecognizer;
    __C.UITapGestureRecognizer? $__lazy_storage_$_titleBarTapRecognizer;
    Swift.String? announcedRefusal;
    Swift.String? bookingLinkID;
    Swift.Bool isAskingForPIN;
    Swift.Bool isCheckingPIN;
    Swift.Bool isPINEntryEnabled;
    Swift.Bool isShowingBookedCall;
    Swift.Bool isShowingOwnerCard;
    ChatConversation.MessageBookingLinkAction ? moreTimesAction;
    ChatConversation.MessageBookingLinkAction ? ownerCardAction;
    Swift.String pinDraft;
    ChatModels.MessageBookingLinkSelection ? selection;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)accessibilityActivate;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTapOwnerCard;
- (void)loadTimes;
- (void)toggleBookedCall;

@end

#endif /* _TtC16ChatConversation26MessageBookingLinkCardView_h */
