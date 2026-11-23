//
#ifndef _TtC11ChatGrokBot22GrokBotCredentialStore_h
#define _TtC11ChatGrokBot22GrokBotCredentialStore_h
@import Foundation;

@class ChatGrokBot.GrokBotCredentialStore.LoadState, GrokBotRelay.GrokBotRepository, _$s10Foundation4DateVMn ?, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$sSDySS ChatGrokBot.GrokBotCredentialAsk.Answer, _$sSDySS ChatGrokBot.GrokBotCredentialResolution ?, _$sSDySSSiG, _$sSS, _$sScTyyt _$ss5NeverOMn ?, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotCredentialStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String agentID;
    GrokBotRelay.GrokBotRepository repository;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never revisionSubject;
    [Swift.String : Swift.Int] answerGenerations;
    Swift.Dictionary empty-list Swift.String ChatGrokBot.GrokBotCredentialAsk.Answer answers;
    ChatGrokBot.GrokBotCredentialStore.LoadState loadState;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    nominal type descriptor for Foundation.Date ? settledAt;
    Swift.Dictionary empty-list Swift.String ChatGrokBot.GrokBotCredentialResolution ? stamps;
}

@end

#endif /* _TtC11ChatGrokBot22GrokBotCredentialStore_h */
