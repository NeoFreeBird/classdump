//
#ifndef _TtC11ChatGrokBot29GrokBotsInboxPromptShownStore_h
#define _TtC11ChatGrokBot29GrokBotsInboxPromptShownStore_h
@import Foundation;

@class ChatUtilities.ChatAccountUserDefaulting, Swift.Bool, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn ChatGrokBot.GrokBotsXChatPrompt ? _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySbSg _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotsInboxPromptShownStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatUtilities.ChatAccountUserDefaulting chatAccountDefaults;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never dismissalsSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool? nominal type descriptor for Swift.Never isEnabledInXChatSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isInboxRowTappedSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isTryGrokBotTappedSubject;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never promptTapsSubject;
    nominal type descriptor for Combine.CurrentValueSubject ChatGrokBot.GrokBotsXChatPrompt ? nominal type descriptor for Swift.Never xChatPromptSubject;
    Swift.Bool isGrokAccountCreationRequested;
}

@end

#endif /* _TtC11ChatGrokBot29GrokBotsInboxPromptShownStore_h */
