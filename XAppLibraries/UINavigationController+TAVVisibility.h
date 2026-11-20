//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UINavigationController_TAVVisibility_h
#define UINavigationController_TAVVisibility_h
@import Foundation;

@interface UINavigationController (TAVVisibility)

/* instance methods */
- (_Bool)tav_isChildViewControllerInFront:(id)front;

@end

#endif /* UINavigationController_TAVVisibility_h */
