//
#ifndef UIViewController_UIResponderTFNAdditions_h
#define UIViewController_UIResponderTFNAdditions_h
@import Foundation;

@interface UIViewController (UIResponderTFNAdditions)

/* instance methods */
- (_Bool)tfn_becomeFirstResponderIfNotInResponderChain;

@end

#endif /* UIViewController_UIResponderTFNAdditions_h */
