//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SystemProfileAttachmentProvider_h
#define T1SystemProfileAttachmentProvider_h
@import Foundation;

#include "TDTBugReportAttachmentProvider-Protocol.h"

@class NSObject, NSString;

@interface T1SystemProfileAttachmentProvider : NSObject <TDTBugReportAttachmentProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)attachmentsWithContext:(id)context;

@end

#endif /* T1SystemProfileAttachmentProvider_h */
