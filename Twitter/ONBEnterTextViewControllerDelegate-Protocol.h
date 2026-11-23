//
#ifndef ONBEnterTextViewControllerDelegate_Protocol_h
#define ONBEnterTextViewControllerDelegate_Protocol_h
@import Foundation;

@protocol ONBEnterTextViewControllerDelegate

@required

/* required instance methods */
- (void)enterTextViewController:(id)controller didTapNextWithText:(id)text;
- (void)enterTextViewControllerDidTapSkip:(id)skip;
- (void)enterTextViewController:(id)controller didReturnWithText:(id)text;

@optional

@end

#endif /* ONBEnterTextViewControllerDelegate_Protocol_h */
