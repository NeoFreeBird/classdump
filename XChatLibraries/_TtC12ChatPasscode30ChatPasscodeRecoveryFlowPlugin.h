//
#ifndef _TtC12ChatPasscode30ChatPasscodeRecoveryFlowPlugin_h
#define _TtC12ChatPasscode30ChatPasscodeRecoveryFlowPlugin_h
@import Foundation;

@class ChatModels.ChatToastActionTriggerStream, ChatPasscode.ChatPasscodeRecoveryReason, ChatSyncState.ChatActionStream, _TtCs12_SwiftObject;

@interface ChatPasscode.ChatPasscodeRecoveryFlowPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatPasscode.ChatPasscodeRecoveryReason reason;
    ChatSyncState.ChatActionStream actionStream;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
}

@end

#endif /* _TtC12ChatPasscode30ChatPasscodeRecoveryFlowPlugin_h */
