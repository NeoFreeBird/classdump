//
#ifndef ONBWebViewControllerDelegate_Protocol_h
#define ONBWebViewControllerDelegate_Protocol_h
@import Foundation;

@protocol ONBWebViewControllerDelegate

@required

/* required instance methods */
- (void)webViewControllerDidAppear:(id)appear;
- (void)webViewController:(id)controller didReceiveDeepLink:(id)link;

@optional

@end

#endif /* ONBWebViewControllerDelegate_Protocol_h */
