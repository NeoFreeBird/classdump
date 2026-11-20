//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TabBottomSegmentViewControllerLayoutDelegate_Protocol_h
#define T1TabBottomSegmentViewControllerLayoutDelegate_Protocol_h
@import Foundation;

@protocol T1TabBottomSegmentViewControllerLayoutDelegate

@required

/* required instance methods */
- (void)didUpdateHostedViewWithShouldAnimate:(_Bool)animate completion:(id /* block */)completion;

@optional

@end

#endif /* T1TabBottomSegmentViewControllerLayoutDelegate_Protocol_h */
