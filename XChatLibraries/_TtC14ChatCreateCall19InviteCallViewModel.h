//
#ifndef _TtC14ChatCreateCall19InviteCallViewModel_h
#define _TtC14ChatCreateCall19InviteCallViewModel_h
@import Foundation;

@class CallModels.CallInviteListening ?, CallModels.CallUserID, ChatCreateCall.CreateCallQueryStream, ChatCreateCall.CreateCallSuggestionsStream, ChatCreateCall.CreateCallWorkerPluginPoint, _$s7Combine9PublishedVMn _$sySa -> ChatCreateCall.CreateCallSuggestion ?, _$sSh -> CallModels.CallUserID, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface ChatCreateCall.InviteCallViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> ChatCreateCall.CreateCallSuggestion ? _suggestions;
    weak __C.UIViewController? presenter;
    CallModels.CallUserID owner;
    Swift.Set -> CallModels.CallUserID excludedUserIDs;
    CallModels.CallInviteListening ? listener;
    ChatCreateCall.CreateCallQueryStream queryStream;
    ChatCreateCall.CreateCallSuggestionsStream suggestionsStream;
    ChatCreateCall.CreateCallWorkerPluginPoint workerPluginPoint;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@end

#endif /* _TtC14ChatCreateCall19InviteCallViewModel_h */
