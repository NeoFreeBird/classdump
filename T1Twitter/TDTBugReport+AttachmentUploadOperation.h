//
#ifndef TDTBugReport_AttachmentUploadOperation_h
#define TDTBugReport_AttachmentUploadOperation_h
@import Foundation;

@interface TDTBugReport (AttachmentUploadOperation) <T1BugReportAttachmentUploadOperationDelegate>

/* instance methods */
- (void)bugReportAttachmentUploadOperation:(id)operation didCompleteWith:(id)with;

@end

#endif /* TDTBugReport_AttachmentUploadOperation_h */
