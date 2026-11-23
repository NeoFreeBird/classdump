//
#ifndef MFMailComposeViewControllerDelegate_Protocol_h
#define MFMailComposeViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol MFMailComposeViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)mailComposeController:(id)controller didFinishWithResult:(long long)result error:(id)error;

@end

#endif /* MFMailComposeViewControllerDelegate_Protocol_h */
