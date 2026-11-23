//
#ifndef T1AuthenticatedWebViewCardPresenter_Protocol_h
#define T1AuthenticatedWebViewCardPresenter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AuthenticatedWebViewCardPresenter <NSObject>

@required

/* required instance methods */
- (void)presentWebViewRootURL:(id)url model:(id)model context:(id)context;

@optional

@end

#endif /* T1AuthenticatedWebViewCardPresenter_Protocol_h */
