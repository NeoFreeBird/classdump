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
