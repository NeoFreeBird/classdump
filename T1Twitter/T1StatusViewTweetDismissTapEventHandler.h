//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusViewTweetDismissTapEventHandler_h
#define T1StatusViewTweetDismissTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewTweetDismissTapEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;
- (void)_dataViewController:(id)controller dismissItemIfNeeded:(id)needed withInfo:(id)info inCell:(id)cell;

@end

#endif /* T1StatusViewTweetDismissTapEventHandler_h */
