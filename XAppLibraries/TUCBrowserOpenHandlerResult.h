//
#ifndef TUCBrowserOpenHandlerResult_h
#define TUCBrowserOpenHandlerResult_h
@import Foundation;

@class NSObject, UIViewController;

@interface TUCBrowserOpenHandlerResult : NSObject // (Swift)

@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) _Bool deeplinkOpened;

/* instance methods */
- (id)initWithViewController:(id)controller deeplinkOpened:(_Bool)opened;
- (id)init;

@end

#endif /* TUCBrowserOpenHandlerResult_h */
