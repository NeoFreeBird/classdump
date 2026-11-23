//
#ifndef PTVReadOnlyModalViewControllerDelegate_Protocol_h
#define PTVReadOnlyModalViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVReadOnlyModalViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)readOnlyModalViewControllerDidSelectDismiss:(id)dismiss;

@end

#endif /* PTVReadOnlyModalViewControllerDelegate_Protocol_h */
