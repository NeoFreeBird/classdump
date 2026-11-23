//
#ifndef _TtC11ChatGrokBot24GrokBotComputerViewModel_h
#define _TtC11ChatGrokBot24GrokBotComputerViewModel_h
@import Foundation;

@class ChatGrokBot.GrokBotComputerPageController, ChatGrokBot.GrokBotScribing, ChatModels.ChatToastActionTriggerStream, GrokBotRelay.GrokBotRepository, _$s10Foundation4DateVMn, _$s10Foundation4DateVMn ?, _$s7Combine9PublishedVMn ChatGrokBot.GrokBotComputerPageMessage.ConnectionState, _$s7Combine9PublishedVMn ChatGrokBot.GrokBotComputerPointerMode, _$s7Combine9PublishedVMn ChatGrokBot.GrokBotComputerViewModel.Stage, _$s7Combine9PublishedVMn GrokBotRelay.SandAgentSummary, _$s7Combine9PublishedVMn Swift.Bool, _$sSSSg, _$sScTyyt _$ss5NeverOMn ?, _$sSi, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotComputerViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published ChatGrokBot.GrokBotComputerViewModel.Stage _stage;
    nominal type descriptor for Combine.Published ChatGrokBot.GrokBotComputerPageMessage.ConnectionState _connection;
    nominal type descriptor for Combine.Published Swift.Bool _isZoomed;
    nominal type descriptor for Combine.Published ChatGrokBot.GrokBotComputerPointerMode _pointerMode;
    nominal type descriptor for Combine.Published Swift.Bool _isKeyboardRequested;
    nominal type descriptor for Combine.Published GrokBotRelay.SandAgentSummary _summary;
    ChatGrokBot.GrokBotComputerPageController pageController;
    Swift.String? handoffAgentID;
    GrokBotRelay.GrokBotRepository repository;
    ChatGrokBot.GrokBotScribing scriber;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    Swift.Int descriptorGeneration;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? descriptorTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? refreshTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? statusTask;
    nominal type descriptor for Foundation.Date lastPasteAt;
    nominal type descriptor for Foundation.Date ? pendingCopyRequestedAt;
}

@end

#endif /* _TtC11ChatGrokBot24GrokBotComputerViewModel_h */
