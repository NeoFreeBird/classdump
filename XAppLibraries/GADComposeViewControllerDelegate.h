//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADComposeViewControllerDelegate_h
#define GADComposeViewControllerDelegate_h
@import Foundation;

#include "MFMailComposeViewControllerDelegate-Protocol.h"
#include "MFMessageComposeViewControllerDelegate-Protocol.h"

@class NSObject, NSString;

@interface GADComposeViewControllerDelegate : NSObject <MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)messageComposeViewController:(id)controller didFinishWithResult:(long long)result;
- (void)mailComposeController:(id)controller didFinishWithResult:(long long)result error:(id)error;

@end

#endif /* GADComposeViewControllerDelegate_h */
