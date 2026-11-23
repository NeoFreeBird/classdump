//
#ifndef T1ComposePresenterDelegate_Protocol_h
#define T1ComposePresenterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ComposePresenterDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)composePresenterDidBeginSession:(id)session;
- (void)composePresenterDidEndSession:(id)session;

@end

#endif /* T1ComposePresenterDelegate_Protocol_h */
