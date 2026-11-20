//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BuildInfoAttachmentProvider_h
#define T1BuildInfoAttachmentProvider_h
@import Foundation;

#include "TDTBugReportAttachmentProvider-Protocol.h"

@class NSObject, NSString;

@interface T1BuildInfoAttachmentProvider : NSObject <TDTBugReportAttachmentProvider>

@property (readonly, copy, nonatomic) NSString *train;
@property (readonly, copy, nonatomic) NSString *buildExtendedVersion;
@property (readonly, copy, nonatomic) NSString *buildShortVersion;
@property (readonly, copy, nonatomic) NSString *buildNumber;
@property (readonly, copy, nonatomic) NSString *buildTime;
@property (readonly, copy, nonatomic) NSString *buildGitSHA;
@property (readonly, copy, nonatomic) NSString *buildInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)attachmentsWithContext:(id)context;

@end

#endif /* T1BuildInfoAttachmentProvider_h */
