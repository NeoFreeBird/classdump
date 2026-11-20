//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIViewController_UIResponderTFNAdditions_h
#define UIViewController_UIResponderTFNAdditions_h
@import Foundation;

@interface UIViewController (UIResponderTFNAdditions)

/* instance methods */
- (_Bool)tfn_becomeFirstResponderIfNotInResponderChain;

@end

#endif /* UIViewController_UIResponderTFNAdditions_h */
