//
#ifndef T1AltTextViewControllerDelegate_Protocol_h
#define T1AltTextViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AltTextViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)altTextViewControllerDidCancel:(id)cancel;
- (void)altTextViewController:(id)controller didCompleteWithAltText:(id)text;

@optional

@end

#endif /* T1AltTextViewControllerDelegate_Protocol_h */
