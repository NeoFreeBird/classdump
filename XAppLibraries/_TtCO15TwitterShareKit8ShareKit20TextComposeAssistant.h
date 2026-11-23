//
#ifndef _TtCO15TwitterShareKit8ShareKit20TextComposeAssistant_h
#define _TtCO15TwitterShareKit8ShareKit20TextComposeAssistant_h
@import Foundation;

#include "MFMessageComposeViewControllerDelegate-Protocol.h"

@class NSObject, TwitterShareKit.ShareResult _$scSg ->, _$sSo23TSCOffPlatformShareable_p, _$sSo30MFMessageComposeViewControllerC;

@interface TwitterShareKit.ShareKit.TextComposeAssistant : NSObject <MFMessageComposeViewControllerDelegate> { // (Swift)
    /* instance variables */
    __C.MFMessageComposeViewController messageComposeViewController;
    TwitterShareKit.ShareResult _$scSg -> completion;
    __C.TSCOffPlatformShareable shareable;
}

/* instance methods */
- (void)messageComposeViewController:(id)controller didFinishWithResult:(long long)result;
- (id)init;

@end

#endif /* _TtCO15TwitterShareKit8ShareKit20TextComposeAssistant_h */
