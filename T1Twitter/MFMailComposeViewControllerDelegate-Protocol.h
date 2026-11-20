//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
