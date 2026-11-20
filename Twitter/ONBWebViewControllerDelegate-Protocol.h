//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
