//
#ifndef T1TaggingViewControllerDelegate_Protocol_h
#define T1TaggingViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TaggingViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)taggingViewControllerDidCancel:(id)cancel;
- (void)taggingViewControllerDidComplete:(id)complete;

@end

#endif /* T1TaggingViewControllerDelegate_Protocol_h */
