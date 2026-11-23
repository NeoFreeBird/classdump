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
