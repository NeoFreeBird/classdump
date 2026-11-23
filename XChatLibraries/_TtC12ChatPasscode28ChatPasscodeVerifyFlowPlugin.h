//
#ifndef _TtC12ChatPasscode28ChatPasscodeVerifyFlowPlugin_h
#define _TtC12ChatPasscode28ChatPasscodeVerifyFlowPlugin_h
@import Foundation;

@class ChatKotlin.ObjectGraphProvider, ChatModels.ChatToastActionTriggerStream, ChatSyncState.ChatActionStream, Swift.Bool, _TtCs12_SwiftObject;

@interface ChatPasscode.ChatPasscodeVerifyFlowPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool isNativeRewrite;
    ChatKotlin.ObjectGraphProvider objectGraphProvider;
    ChatSyncState.ChatActionStream actionStream;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    Swift.Bool shouldGenerateSigningKey;
    Swift.Bool shouldRegister;
}

@end

#endif /* _TtC12ChatPasscode28ChatPasscodeVerifyFlowPlugin_h */
