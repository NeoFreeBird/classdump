//
#ifndef _TtCO15TwitterShareKit8ShareKit20MailComposeAssistant_h
#define _TtCO15TwitterShareKit8ShareKit20MailComposeAssistant_h
@import Foundation;

#include "MFMailComposeViewControllerDelegate-Protocol.h"

@class NSObject, TwitterShareKit.ShareResult _$scSg ->, _$sSo27MFMailComposeViewControllerC;

@interface TwitterShareKit.ShareKit.MailComposeAssistant : NSObject <MFMailComposeViewControllerDelegate> { // (Swift)
    /* instance variables */
    __C.MFMailComposeViewController mailComposeViewController;
    TwitterShareKit.ShareResult _$scSg -> completion;
}

/* instance methods */
- (void)mailComposeController:(id)controller didFinishWithResult:(long long)result error:(id)error;
- (id)init;

@end

#endif /* _TtCO15TwitterShareKit8ShareKit20MailComposeAssistant_h */
