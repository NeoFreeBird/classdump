//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TDLLoggingRollingFileOutputStream_h
#define TDLLoggingRollingFileOutputStream_h
@import Foundation;

#include "TDTBugReportAttachmentProvider-Protocol.h"

@class NSSet, NSString, TLSRollingFileOutputStream;

@interface TDLLoggingRollingFileOutputStream : TLSRollingFileOutputStream <TDTBugReportAttachmentProvider>

@property (readonly, copy, nonatomic) NSSet *filteredChannels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFilteredChannels:(id)channels error:(id *)error;
- (id)attachmentsWithContext:(id)context;
- (id)_tdl_filteredSummaryForAttachments:(id)attachments withFilename:(id)filename usingPattern:(id)pattern;
- (long long)tls_shouldFilterLevel:(long long)level channel:(id)channel contextObject:(id)object;

@end

#endif /* TDLLoggingRollingFileOutputStream_h */
