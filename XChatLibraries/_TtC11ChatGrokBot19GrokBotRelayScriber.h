//
#ifndef _TtC11ChatGrokBot19GrokBotRelayScriber_h
#define _TtC11ChatGrokBot19GrokBotRelayScriber_h
@import Foundation;

@class ChatGrokBot.GrokBotOnboardingTimingScriber, ChatGrokBot.GrokBotScribing, ChatUtilities.UnfairLock, Swift.Bool, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotRelayScriber : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatUtilities.UnfairLock lock;
    ChatGrokBot.GrokBotOnboardingTimingScriber onboardingTiming;
    ChatGrokBot.GrokBotScribing scriber;
    Swift.Bool isOnRefusalSchedule;
}

@end

#endif /* _TtC11ChatGrokBot19GrokBotRelayScriber_h */
