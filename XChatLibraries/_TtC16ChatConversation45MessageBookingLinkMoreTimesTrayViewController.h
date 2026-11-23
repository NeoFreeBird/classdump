//
#ifndef _TtC16ChatConversation45MessageBookingLinkMoreTimesTrayViewController_h
#define _TtC16ChatConversation45MessageBookingLinkMoreTimesTrayViewController_h
@import Foundation;

@class ChatConversation.ConversationMessageListItemStream, ChatConversation.MessageBookingLinkMoreTimesTrayActions, ChatConversation.MessageBookingLinkScheduleView, ChatModels.ChatMessageBookingLink, ChatModels.ConversationMetadataStream, ChatModels.MessageBookingLinkSelection ?, ChatUI.ChatImageLoading ?, Swift.Bool, _$s10Foundation4DateVMn ?, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSS, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo7UILabelC, _$sSo7UILabelCSg;

@interface ChatConversation.MessageBookingLinkMoreTimesTrayViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    ChatConversation.MessageBookingLinkMoreTimesTrayActions actions;
    Swift.String? announcedRefusal;
    ChatModels.ChatMessageBookingLink bookingLink;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatUI.ChatImageLoading ? imageLoader;
    nominal type descriptor for Foundation.Date ? initialBookedStart;
    Swift.Bool isBookingEnabled;
    __C.UILabel loadingLabel;
    Swift.String messageID;
    ChatConversation.ConversationMessageListItemStream messageListItemStream;
    __C.UILabel noteLabel;
    __C.UILabel? refusalLabel;
    ChatConversation.MessageBookingLinkScheduleView scheduleView;
    ChatModels.MessageBookingLinkSelection ? selection;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC16ChatConversation45MessageBookingLinkMoreTimesTrayViewController_h */
