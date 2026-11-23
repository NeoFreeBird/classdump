//
#ifndef T1BugReportAttachmentUploadOperationDelegate_Protocol_h
#define T1BugReportAttachmentUploadOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1BugReportAttachmentUploadOperationDelegate <NSObject>

@required

/* required instance methods */
- (void)bugReportAttachmentUploadOperation:(id)operation didCompleteWith:(id)with;

@optional

@end

#endif /* T1BugReportAttachmentUploadOperationDelegate_Protocol_h */
