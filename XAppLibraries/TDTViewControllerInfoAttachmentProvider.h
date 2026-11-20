//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TDTViewControllerInfoAttachmentProvider_h
#define TDTViewControllerInfoAttachmentProvider_h
@import Foundation;

#include "TDTBugReportAttachmentProvider-Protocol.h"

@class NSObject, NSString, UIViewController;

@interface TDTViewControllerInfoAttachmentProvider : NSObject <TDTBugReportAttachmentProvider>

@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)attachmentsWithContext:(id)context;

@end

#endif /* TDTViewControllerInfoAttachmentProvider_h */
