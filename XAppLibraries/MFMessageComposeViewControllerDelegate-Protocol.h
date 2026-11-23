//
#ifndef MFMessageComposeViewControllerDelegate_Protocol_h
#define MFMessageComposeViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol MFMessageComposeViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)messageComposeViewController:(id)controller didFinishWithResult:(long long)result;

@optional

@end

#endif /* MFMessageComposeViewControllerDelegate_Protocol_h */
