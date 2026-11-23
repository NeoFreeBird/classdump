//
#ifndef TDTBugReportAttachmentGenericProvider_h
#define TDTBugReportAttachmentGenericProvider_h
@import Foundation;

#include "TDTBugReportAttachmentProvider-Protocol.h"

@class NSObject, NSString;

@interface TDTBugReportAttachmentGenericProvider : NSObject <TDTBugReportAttachmentProvider> {
    /* instance variables */
    id /* block */ _attachmentBlock;
    _Bool _requiresPriorityExecution;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initRequiringPriorityExecution:(_Bool)execution withAttachmentBlock:(id /* block */)block;
- (id)initWithAttachmentBlock:(id /* block */)block;
- (id)init;
- (id)attachmentsWithContext:(id)context;
- (_Bool)requiresPriorityExecution;

@end

#endif /* TDTBugReportAttachmentGenericProvider_h */
