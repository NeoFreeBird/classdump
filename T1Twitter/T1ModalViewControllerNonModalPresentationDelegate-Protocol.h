//
#ifndef T1ModalViewControllerNonModalPresentationDelegate_Protocol_h
#define T1ModalViewControllerNonModalPresentationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ModalViewControllerNonModalPresentationDelegate <NSObject>

@required

/* required instance methods */
- (void)modalViewController:(id)controller nonModallyPresentViewControllerCreatedFromBlock:(id /* block */)block;

@optional

@end

#endif /* T1ModalViewControllerNonModalPresentationDelegate_Protocol_h */
