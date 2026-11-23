//
#ifndef PTVInteractiveModal_Protocol_h
#define PTVInteractiveModal_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVInteractiveModal <NSObject>

@required

@optional

/* optional instance methods */
- (struct CGSize { double x0; double x1; })interactiveModalSizeThatFitsContainerSize:(struct CGSize { double x0; double x1; })size;
- (unsigned long long)interactiveModalAnimationStyle;
- (_Bool)interactiveModalShouldDismiss;
- (void)interactiveModalDidSelectDismiss;
- (id)interactiveModalDismissTransition;

@end

#endif /* PTVInteractiveModal_Protocol_h */
