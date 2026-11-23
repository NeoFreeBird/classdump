//
#ifndef T1AuthenticatedWebViewCardPresenter_h
#define T1AuthenticatedWebViewCardPresenter_h
@import Foundation;

#include "T1AuthenticatedWebViewCardPresenter-Protocol.h"

@class NSObject, NSString;

@interface T1AuthenticatedWebViewCardPresenter : NSObject <T1AuthenticatedWebViewCardPresenter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)presentWebViewRootURL:(id)url model:(id)model context:(id)context;

@end

#endif /* T1AuthenticatedWebViewCardPresenter_h */
