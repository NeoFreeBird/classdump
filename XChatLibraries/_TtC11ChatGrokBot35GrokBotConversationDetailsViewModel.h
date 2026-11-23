//
#ifndef _TtC11ChatGrokBot35GrokBotConversationDetailsViewModel_h
#define _TtC11ChatGrokBot35GrokBotConversationDetailsViewModel_h
@import Foundation;

@class ChatGrokBot.GrokBotConversationDetailsHeaderActionPluginListener ?, ChatGrokBot.GrokBotConversationDetailsHeaderActionPluginPoint, ChatGrokBot.GrokBotScribing, GrokBotRelay.GrokBotRepository, Swift.Bool, _$s7Combine9PublishedVMn ChatGrokBot.GrokBotConversationDetailsPrimaryBot, _$s7Combine9PublishedVMn ChatGrokBot.GrokBotConversationDetailsTemplateSharing, _$s7Combine9PublishedVMn GrokBotRelay.SandAgentSummary, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSbSg, _$s7Combine9PublishedVMn _$sSo7UIImageCSg, _$s7Combine9PublishedVMn _$sySa -> GrokBotRelay.SandAgentSummary, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotConversationDetailsViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published Swift.Bool _isComputerActive;
    nominal type descriptor for Combine.Published Swift.Bool _isComputerAvailable;
    nominal type descriptor for Combine.Published Swift.Bool _isGone;
    nominal type descriptor for Combine.Published Swift.Bool? _isInContacts;
    nominal type descriptor for Combine.Published Swift.Bool _isWritingMembers;
    nominal type descriptor for Combine.Published __C.UIImage? _photoAvatar;
    nominal type descriptor for Combine.Published ChatGrokBot.GrokBotConversationDetailsPrimaryBot _primaryBot;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> GrokBotRelay.SandAgentSummary _roster;
    nominal type descriptor for Combine.Published Swift.Bool _saveFailed;
    nominal type descriptor for Combine.Published GrokBotRelay.SandAgentSummary _summary;
    nominal type descriptor for Combine.Published ChatGrokBot.GrokBotConversationDetailsTemplateSharing _templateSharing;
    ChatGrokBot.GrokBotConversationDetailsHeaderActionPluginListener ? listener;
    weak __C.UIViewController? presenter;
    Swift.Bool isAttachmentTabsEnabled;
    ChatGrokBot.GrokBotConversationDetailsHeaderActionPluginPoint headerActionPluginPoint;
    GrokBotRelay.GrokBotRepository repository;
    ChatGrokBot.GrokBotScribing scriber;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

@end

#endif /* _TtC11ChatGrokBot35GrokBotConversationDetailsViewModel_h */
