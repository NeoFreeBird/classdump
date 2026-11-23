//
#ifndef _TtC16ChatConversation15ChatSpanScriber_h
#define _TtC16ChatConversation15ChatSpanScriber_h
@import Foundation;

@class ChatUtilities.UnfairLock, _$sSDySSSdG, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p, _TtCs12_SwiftObject;

@interface ChatConversation.ChatSpanScriber : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
    ChatUtilities.UnfairLock lock;
    [Swift.String : Swift.Double] startTimes;
}

@end

#endif /* _TtC16ChatConversation15ChatSpanScriber_h */
