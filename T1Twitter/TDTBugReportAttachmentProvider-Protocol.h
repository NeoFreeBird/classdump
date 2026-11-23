//
#ifndef TDTBugReportAttachmentProvider_Protocol_h
#define TDTBugReportAttachmentProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TDTBugReportAttachmentProvider <NSObject>

@required

/* required instance methods */
- (id)attachmentsWithContext:(id)context;
- (id)attachmentsWithContext:(id)context;

@optional

/* optional instance methods */
- (_Bool)requiresPriorityExecution;

@end

#endif /* TDTBugReportAttachmentProvider_Protocol_h */
