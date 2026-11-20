//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNNavigationController_OCFNavigationStack_h
#define TFNNavigationController_OCFNavigationStack_h
@import Foundation;

@interface TFNNavigationController (OCFNavigationStack) <OCFNavigationStack>

/* instance methods */
- (_Bool)shouldPushViewController:(id)controller fromPresentationType:(long long)type toPresentationType:(long long)type;

@end

#endif /* TFNNavigationController_OCFNavigationStack_h */
