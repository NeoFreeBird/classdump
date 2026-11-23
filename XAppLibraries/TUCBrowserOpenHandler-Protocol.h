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
