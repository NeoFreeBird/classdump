//
#ifndef _TtC9ChatInbox23InboxEnrollmentApprover_h
#define _TtC9ChatInbox23InboxEnrollmentApprover_h
@import Foundation;

@class ChatInbox.InboxPromptTriggerStream, ChatSyncState.ChatDeviceEnrolling, ChatUtilities.ChatInboxDialogProviding, Swift.Bool, _$s7Combine9PublishedVMn ChatInbox.InboxEnrollmentApprover.Stage ?, _$sScTyyt _$ss5NeverOMn ?, _TtCs12_SwiftObject;

@interface ChatInbox.InboxEnrollmentApprover : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published ChatInbox.InboxEnrollmentApprover.Stage ? _stage;
    ChatSyncState.ChatDeviceEnrolling deviceEnrollment;
    ChatUtilities.ChatInboxDialogProviding inboxDialogProvider;
    ChatInbox.InboxPromptTriggerStream inboxPromptTriggerStream;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? approvalTask;
    Swift.Bool isApprovalInFlight;
}

@end

#endif /* _TtC9ChatInbox23InboxEnrollmentApprover_h */
