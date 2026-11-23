//
#ifndef _TtC11ChatGrokBot27GrokBotCreateGroupViewModel_h
#define _TtC11ChatGrokBot27GrokBotCreateGroupViewModel_h
@import Foundation;

@class ChatGrokBot.GrokBotScribeSource, ChatGrokBot.GrokBotScribing, GrokBotRelay.GrokBotRepository, _$s7Combine9PublishedVMn ChatGrokBot.GrokBotCreateBotViewModel.Failure ?, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sShySSG, _$sSa -> GrokBotRelay.SandAgentSummary, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotCreateGroupViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published Swift.String _name;
    nominal type descriptor for Combine.Published Swift.String _searchText;
    nominal type descriptor for Combine.Published Swift.Set<Swift.String> _selectedIDs;
    nominal type descriptor for Combine.Published Swift.Bool _isCreating;
    nominal type descriptor for Combine.Published ChatGrokBot.GrokBotCreateBotViewModel.Failure ? _failure;
    Swift.Array -> GrokBotRelay.SandAgentSummary roster;
    GrokBotRelay.GrokBotRepository repository;
    ChatGrokBot.GrokBotScribing scriber;
    ChatGrokBot.GrokBotScribeSource source;
}

@end

#endif /* _TtC11ChatGrokBot27GrokBotCreateGroupViewModel_h */
