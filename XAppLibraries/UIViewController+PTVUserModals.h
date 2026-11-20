//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIViewController_PTVUserModals_h
#define UIViewController_PTVUserModals_h
@import Foundation;

@interface UIViewController (PTVUserModals)

/* instance methods */
- (void)ptv_presentUserModalOverTopmostViewController:(id)controller;

@end

#endif /* UIViewController_PTVUserModals_h */
