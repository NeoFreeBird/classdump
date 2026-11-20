//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
