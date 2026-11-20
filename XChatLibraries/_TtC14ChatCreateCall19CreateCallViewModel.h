//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14ChatCreateCall19CreateCallViewModel_h
#define _TtC14ChatCreateCall19CreateCallViewModel_h
@import Foundation;

@class ChatCreateCall.CreateCallQueryStream, ChatCreateCall.CreateCallSuggestionsStream, ChatCreateCall.CreateCallWorkerPluginPoint, ChatModels.ConversationCallActionTriggerStream, Swift.Bool, _$s7Combine9PublishedVMn _$sySa -> ChatCreateCall.CreateCallSuggestion ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface ChatCreateCall.CreateCallViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> ChatCreateCall.CreateCallSuggestion ? _suggestions;
    weak __C.UIViewController? presenter;
    ChatModels.ConversationCallActionTriggerStream conversationCallActionTriggerStream;
    ChatCreateCall.CreateCallQueryStream queryStream;
    ChatCreateCall.CreateCallSuggestionsStream suggestionsStream;
    ChatCreateCall.CreateCallWorkerPluginPoint workerPluginPoint;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Bool isStartingCall;
}

@end

#endif /* _TtC14ChatCreateCall19CreateCallViewModel_h */
