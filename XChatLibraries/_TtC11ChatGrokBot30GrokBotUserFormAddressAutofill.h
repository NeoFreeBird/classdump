//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot30GrokBotUserFormAddressAutofill_h
#define _TtC11ChatGrokBot30GrokBotUserFormAddressAutofill_h
@import Foundation;

@class ChatGrokBot.GrokBotAddressCompleter, ChatGrokBot.GrokBotUserFormValues, _$sSDyS2SG, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _$sySa -> ChatGrokBot.GrokBotAddressCompleter.Suggestion _$sGcSg, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotUserFormAddressAutofill : Swift._SwiftObject { // (Swift)
    /* instance variables */
     empty-list Swift.Array -> ChatGrokBot.GrokBotAddressCompleter.Suggestion _$sGcSg onSuggestions;
    ChatGrokBot.GrokBotAddressCompleter completer;
    ChatGrokBot.GrokBotUserFormValues values;
    Swift.Int pickGeneration;
    [Swift.String : Swift.String] previousValues;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? suggestionTask;
    [Swift.String : Swift.String] written;
}

@end

#endif /* _TtC11ChatGrokBot30GrokBotUserFormAddressAutofill_h */
