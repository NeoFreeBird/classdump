//
#ifndef _TtC23ChatConversationDetails34ParticipantSheetTrayViewController_h
#define _TtC23ChatConversationDetails34ParticipantSheetTrayViewController_h
@import Foundation;

@class ChatConversationDetails.ParticipantSheetActionButtonRowView, ChatConversationDetails.ParticipantSheetHeroView, ChatConversationDetails.ParticipantSheetNameView, ChatConversationDetails.ParticipantSheetNavigation, ChatConversationDetails.ParticipantSheetViewModel, ChatConversationDetails.ParticipantSheetWorkerPluginPoint, ChatUI.ChatImageLoading, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem9ListItemsCMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatConversationDetails.ParticipantSheetTrayViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    ChatUI.ChatImageLoading imageLoader;
    ChatConversationDetails.ParticipantSheetNavigation participantSheetNavigation;
    ChatConversationDetails.ParticipantSheetViewModel viewModel;
    ChatConversationDetails.ParticipantSheetWorkerPluginPoint workerPluginPoint;
    ChatConversationDetails.ParticipantSheetHeroView heroView;
    ChatConversationDetails.ParticipantSheetNameView nameView;
    ChatConversationDetails.ParticipantSheetActionButtonRowView actionButtonRowView;
    nominal type descriptor for XDesignSystem.ListItems list;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC23ChatConversationDetails34ParticipantSheetTrayViewController_h */
