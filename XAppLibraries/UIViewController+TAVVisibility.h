//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIViewController_TAVVisibility_h
#define UIViewController_TAVVisibility_h
@import Foundation;

@interface UIViewController (TAVVisibility)

/* instance methods */
- (_Bool)tav_presentedViewControllerObscuresChildren;
- (_Bool)tav_isChildViewControllerInFront:(id)front;
- (_Bool)tav_isInFront;

@end

#endif /* UIViewController_TAVVisibility_h */
