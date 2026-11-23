//
#ifndef GADWebViewControllerDelegate_Protocol_h
#define GADWebViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADWebViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)webViewControllerDidStartLoad:(id)load;
- (void)webViewControllerDidFinishLoad:(id)load;
- (void)webViewController:(id)controller didFailLoadWithError:(id)error;
- (void)webViewControllerWebContentProcessDidTerminate:(id)terminate;
- (void)webViewController:(id)controller openNewTabWithRequest:(id)request;
- (_Bool)webViewController:(id)controller shouldStartLoadWithRequest:(id)request navigationType:(long long)type;

@optional

@end

#endif /* GADWebViewControllerDelegate_Protocol_h */
