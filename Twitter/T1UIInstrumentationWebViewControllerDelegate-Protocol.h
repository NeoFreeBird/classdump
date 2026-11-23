//
#ifndef T1UIInstrumentationWebViewControllerDelegate_Protocol_h
#define T1UIInstrumentationWebViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1UIInstrumentationWebViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)instrumentationWebViewController:(id)controller didFinishLoadingWithResult:(id)result;

@optional

@end

#endif /* T1UIInstrumentationWebViewControllerDelegate_Protocol_h */
