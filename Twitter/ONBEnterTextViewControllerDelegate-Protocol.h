//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
