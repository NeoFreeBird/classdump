//
#ifndef TFNNavigationController_OCFNavigationStack_h
#define TFNNavigationController_OCFNavigationStack_h
@import Foundation;

@interface TFNNavigationController (OCFNavigationStack) <OCFNavigationStack>

/* instance methods */
- (_Bool)shouldPushViewController:(id)controller fromPresentationType:(long long)type toPresentationType:(long long)type;

@end

#endif /* TFNNavigationController_OCFNavigationStack_h */
