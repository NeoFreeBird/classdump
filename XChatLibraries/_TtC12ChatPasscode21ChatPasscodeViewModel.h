//
#ifndef _TtC12ChatPasscode21ChatPasscodeViewModel_h
#define _TtC12ChatPasscode21ChatPasscodeViewModel_h
@import Foundation;

@class ChatPasscode.ChatPasscodeBranch _$scSg ->, ChatPasscode.ChatPasscodeFlowPlugin, ChatPasscode.ChatPasscodeFlowStream, Swift.Bool, _$sScTyyt _$ss5NeverOMn ?, _$sSi, _$syycSg, _TtCs12_SwiftObject;

@interface ChatPasscode.ChatPasscodeViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Int stepIndex;
    ChatPasscode.ChatPasscodeFlowPlugin flowPlugin;
    ChatPasscode.ChatPasscodeFlowStream flowStream;
    Swift.Bool isTrayRoot;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? completionTask;
    Swift.Bool isSubmitting;
    (() -> ())? onPasscodeRejected;
    (() -> ())? onPasscodeMismatch;
    (() -> ())? onSubmissionStateChange;
    (() -> ())? onSubmissionFailed;
    ChatPasscode.ChatPasscodeBranch _$scSg -> onBranch;
    (() -> ())? onFlowFinished;
    (() -> ())? onFlowRestarted;
    (() -> ())? onStepAccepted;
    (() -> ())? onStepChange;
}

@end

#endif /* _TtC12ChatPasscode21ChatPasscodeViewModel_h */
