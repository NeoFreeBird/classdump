//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot30GrokBotAddParticipantViewModel_h
#define _TtC11ChatGrokBot30GrokBotAddParticipantViewModel_h
@import Foundation;

@class _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sShySSG, _$sSa -> GrokBotRelay.SandAgentSummary, _$sSbSaySSGYac, _$sSi, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotAddParticipantViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published Swift.String _searchText;
    nominal type descriptor for Combine.Published Swift.Set<Swift.String> _selectedIDs;
    nominal type descriptor for Combine.Published Swift.Bool _isAdding;
    Swift.Array -> GrokBotRelay.SandAgentSummary candidates;
    Swift.Int freeSlots;
    ([Swift.String]) async -> Swift.Bool onAdd;
}

@end

#endif /* _TtC11ChatGrokBot30GrokBotAddParticipantViewModel_h */
