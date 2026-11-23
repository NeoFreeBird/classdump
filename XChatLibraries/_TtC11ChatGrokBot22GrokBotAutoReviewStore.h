//
#ifndef _TtC11ChatGrokBot22GrokBotAutoReviewStore_h
#define _TtC11ChatGrokBot22GrokBotAutoReviewStore_h
@import Foundation;

@class ChatGrokBot.GrokBotAutoReviewState, ChatUtilities.UnfairLock, GrokBotRelay.GrokBotRepository _$sSgyYac, GrokBotRelay.SandAutoReviewInstructions ?, _$s7Combine19CurrentValueSubjectCMn ChatGrokBot.GrokBotAutoReviewState _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySi _$ss5NeverOMn, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotAutoReviewStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatUtilities.UnfairLock lock;
    GrokBotRelay.GrokBotRepository _$sSgyYac repositoryWhenReady;
    nominal type descriptor for Combine.CurrentValueSubject ChatGrokBot.GrokBotAutoReviewState nominal type descriptor for Swift.Never stateSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Int nominal type descriptor for Swift.Never writesInFlightSubject;
    GrokBotRelay.SandAutoReviewInstructions ? boxCopy;
    ChatGrokBot.GrokBotAutoReviewState currentState;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    Swift.Int writesInFlight;
}

@end

#endif /* _TtC11ChatGrokBot22GrokBotAutoReviewStore_h */
