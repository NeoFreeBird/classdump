//
#ifndef ONBShowCodeViewControllerDelegate_Protocol_h
#define ONBShowCodeViewControllerDelegate_Protocol_h
@import Foundation;

@protocol ONBShowCodeViewControllerDelegate

@required

/* required instance methods */
- (void)showCodeViewControllerDidTapNext:(id)next;
- (void)showCodeViewControllerDidTapSkip:(id)skip;

@optional

@end

#endif /* ONBShowCodeViewControllerDelegate_Protocol_h */
