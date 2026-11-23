//
#ifndef _TtC11ChatGrokBot27GrokBotShoppingSubscription_h
#define _TtC11ChatGrokBot27GrokBotShoppingSubscription_h
@import Foundation;

@class ChatGrokBot.GrokBotCartSubscriptionGate, Swift.Bool, _$syyycScMYcc, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotShoppingSubscription : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool requiresSubscription;
    ChatGrokBot.GrokBotCartSubscriptionGate gate;
    @Swift.MainActor (() -> ()) -> () subscribe;
    Swift.Bool didSubscribe;
}

@end

#endif /* _TtC11ChatGrokBot27GrokBotShoppingSubscription_h */
