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
