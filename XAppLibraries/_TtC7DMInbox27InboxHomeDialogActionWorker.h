//
#ifndef _TtC7DMInbox27InboxHomeDialogActionWorker_h
#define _TtC7DMInbox27InboxHomeDialogActionWorker_h
@import Foundation;

#include "_TtP14DMPasscodeFlow20PasscodeFlowListener_-Protocol.h"

@class DMInbox.InboxHomeDialogActionTriggerStream, DMInbox.InboxWorkerPluginContext, DMPasscodeFlow.PasscodeFlowBuilder, _$s11XFoundation13CombineWorkerCN, _$s9ChatInbox0B19PromptTriggerStreamCMn;

@interface DMInbox.InboxHomeDialogActionWorker : type metadata for XFoundation.CombineWorker <DMPasscodeFlow.PasscodeFlowListener> { // (Swift)
    /* instance variables */
    DMInbox.InboxWorkerPluginContext context;
    DMInbox.InboxHomeDialogActionTriggerStream inboxHomeDialogActionTriggerStream;
    nominal type descriptor for ChatInbox.InboxPromptTriggerStream inboxPromptTriggerStream;
    DMPasscodeFlow.PasscodeFlowBuilder passcodeFlowBuilder;
}

/* instance methods */
- (void)passcodeFlowDidFinishWithViewController:(id)controller;

@end

#endif /* _TtC7DMInbox27InboxHomeDialogActionWorker_h */
