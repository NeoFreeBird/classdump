//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIViewController_APMScreenClassName_h
#define UIViewController_APMScreenClassName_h
@import Foundation;

@interface UIViewController (APMScreenClassName)

/* class methods */
+ (void)load;

/* instance methods */
- (id)apmScreen;
- (void)setApmScreen:(id)screen;

@end

#endif /* UIViewController_APMScreenClassName_h */
