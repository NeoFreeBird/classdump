//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot27GrokBotListenerConnectStore_h
#define _TtC11ChatGrokBot27GrokBotListenerConnectStore_h
@import Foundation;

@class ChatGrokBot.GrokBotScribing, GrokBotRelay.GrokBotRepository, _$s10Foundation4DateVMn ?, _$s7Combine19CurrentValueSubjectCMn ChatGrokBot.GrokBotListenerConnectState _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn ChatGrokBot.GrokBotListenerConnectStore.BrowserRequest ? _$ss5NeverOMn, _$sSD -> ChatGrokBot.GrokBotListenerConnectStore.AttemptKey ChatGrokBot.GrokBotListenerConnectStore.PendingSignIn, _$sSD -> ChatGrokBot.GrokBotListenerConnectStore.AttemptKey _$sScTyyt _$ss5NeverOMn, _$sSD -> ChatGrokBot.GrokBotListenerConnectStore.AttemptKey _$sSi, _$sSS, _$sScTyyt _$ss5NeverOMn ?, _$sSi, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotListenerConnectStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String agentID;
    nominal type descriptor for Combine.CurrentValueSubject ChatGrokBot.GrokBotListenerConnectStore.BrowserRequest ? nominal type descriptor for Swift.Never browserRequestSubject;
    Swift.String redirectURI;
    GrokBotRelay.GrokBotRepository repository;
    ChatGrokBot.GrokBotScribing scriber;
    nominal type descriptor for Combine.CurrentValueSubject ChatGrokBot.GrokBotListenerConnectState nominal type descriptor for Swift.Never stateSubject;
    Swift.Dictionary -> ChatGrokBot.GrokBotListenerConnectStore.AttemptKey Swift.Int attemptGenerations;
    Swift.Dictionary -> ChatGrokBot.GrokBotListenerConnectStore.AttemptKey Swift.Task empty-list () nominal type descriptor for Swift.Never attemptTasks;
    Swift.Int loadGeneration;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    Swift.Dictionary -> ChatGrokBot.GrokBotListenerConnectStore.AttemptKey ChatGrokBot.GrokBotListenerConnectStore.PendingSignIn pendingSignIns;
    nominal type descriptor for Foundation.Date ? settledAt;
}

@end

#endif /* _TtC11ChatGrokBot27GrokBotListenerConnectStore_h */
