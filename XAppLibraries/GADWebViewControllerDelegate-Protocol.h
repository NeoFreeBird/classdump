//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
