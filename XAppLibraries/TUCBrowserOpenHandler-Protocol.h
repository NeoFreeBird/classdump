//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCBrowserOpenHandler_Protocol_h
#define TUCBrowserOpenHandler_Protocol_h
@import Foundation;

@class UIViewController;

@protocol TUCBrowserOpenHandler

@required

@property (nonatomic, readonly) UIViewController *viewController;

/* required instance methods */
- (void)openWithCompletion:(id /* block */)completion;

@optional

@end

#endif /* TUCBrowserOpenHandler_Protocol_h */
