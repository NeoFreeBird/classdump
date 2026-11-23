//
#ifndef T1HashflagsAttachmentProvider_h
#define T1HashflagsAttachmentProvider_h
@import Foundation;

#include "TDTBugReportAttachmentProvider-Protocol.h"

@class NSObject, NSString;

@interface T1HashflagsAttachmentProvider : NSObject <TDTBugReportAttachmentProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)attachmentsWithContext:(id)context;

@end

#endif /* T1HashflagsAttachmentProvider_h */
