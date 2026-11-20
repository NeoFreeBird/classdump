//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7DMInbox34InboxHomeDialogConfigurationWorker_h
#define _TtC7DMInbox34InboxHomeDialogConfigurationWorker_h
@import Foundation;

@class DMInbox.InboxHomeDialogActionTriggerStream, _$s11XFoundation13CombineWorkerCN, _$s13ChatUtilities0A20InboxDialogProvidingMp, _$s9ChatInbox0B16HomeDialogStreamCMn, _$s9ChatInbox0B18EnrollmentApproverCMn, _$s9ChatInbox0B29HomeDialogConfigurationStreamCMn;

@interface DMInbox.InboxHomeDialogConfigurationWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for ChatInbox.InboxEnrollmentApprover enrollmentApprover;
    protocol descriptor for ChatUtilities.ChatInboxDialogProviding inboxDialogProvider;
    DMInbox.InboxHomeDialogActionTriggerStream inboxHomeDialogActionTriggerStream;
    nominal type descriptor for ChatInbox.InboxHomeDialogConfigurationStream inboxHomeDialogConfigurationStream;
    nominal type descriptor for ChatInbox.InboxHomeDialogStream inboxHomeDialogStream;
}

@end

#endif /* _TtC7DMInbox34InboxHomeDialogConfigurationWorker_h */
