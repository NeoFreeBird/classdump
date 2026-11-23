//
#ifndef _TtC11XLiveChatUI31LiveChatAutocompleteCoordinator_h
#define _TtC11XLiveChatUI31LiveChatAutocompleteCoordinator_h
@import Foundation;

@class Swift.Bool, XLiveChatUI.LiveChatAutocompleteService, XLiveChatUI.LiveChatAutocompleteTextUpdateStream, XLiveChatUI.LiveChatInputView ?, _$s13XAutocomplete23AutocompleteStateStreamCMn, _$s13XAutocomplete32AutocompleteWorkerPluginPointingMp, _$s13XAutocomplete35AutocompleteResultsContainerBuilderCMn, _$s8Dispatch0A8WorkItemCMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UIViewControllerCSg, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface XLiveChatUI.LiveChatAutocompleteCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool alwaysDark;
    XLiveChatUI.LiveChatAutocompleteService autocompleteService;
    nominal type descriptor for XAutocomplete.AutocompleteStateStream autocompleteStateStream;
    XLiveChatUI.LiveChatAutocompleteTextUpdateStream autocompleteTextUpdateStream;
    protocol descriptor for XAutocomplete.AutocompleteWorkerPluginPointing autocompleteWorkers;
    nominal type descriptor for XAutocomplete.AutocompleteResultsContainerBuilder autocompleteResultsContainerBuilder;
    __C.UIViewController? resultsViewController;
    nominal type descriptor for Dispatch.DispatchWorkItem ? pendingDismissWorkItem;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    weak __C.UIViewController? hostViewController;
    XLiveChatUI.LiveChatInputView ? chatInput;
}

@end

#endif /* _TtC11XLiveChatUI31LiveChatAutocompleteCoordinator_h */
