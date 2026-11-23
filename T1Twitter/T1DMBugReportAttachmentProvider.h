//
#ifndef T1DMBugReportAttachmentProvider_h
#define T1DMBugReportAttachmentProvider_h
@import Foundation;

#include "TDTBugReportAttachmentProvider-Protocol.h"

@class NSObject;

@interface T1DMBugReportAttachmentProvider : NSObject <TDTBugReportAttachmentProvider> // (Swift)

/* instance methods */
- (id)attachmentsWithContext:(id)context;
- (id)init;

@end

#endif /* T1DMBugReportAttachmentProvider_h */
