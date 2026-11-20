//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot29GrokBotForwardPickerViewModel_h
#define _TtC11ChatGrokBot29GrokBotForwardPickerViewModel_h
@import Foundation;

@class ChatGrokBot.GrokBotForwardPickerListener ?, ChatGrokBot.GrokBotHostSettingsStore, ChatGrokBot.GrokBotScribing, ChatGrokBot.GrokBotSession, Swift.Bool, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sySa -> ChatGrokBot.GrokBotRowViewModel, _$sSS, _$sSa -> GrokBotRelay.SandAgentSummary, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotForwardPickerViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> ChatGrokBot.GrokBotRowViewModel _rows;
    nominal type descriptor for Combine.Published Swift.String _searchText;
    ChatGrokBot.GrokBotForwardPickerListener ? listener;
    Swift.String excludedAgentID;
    ChatGrokBot.GrokBotHostSettingsStore hostSettingsStore;
    ChatGrokBot.GrokBotScribing scriber;
    ChatGrokBot.GrokBotSession session;
    Swift.Bool isImpressionPending;
    Swift.Array -> GrokBotRelay.SandAgentSummary roster;
    Swift.Array -> GrokBotRelay.SandAgentSummary summaries;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

@end

#endif /* _TtC11ChatGrokBot29GrokBotForwardPickerViewModel_h */
