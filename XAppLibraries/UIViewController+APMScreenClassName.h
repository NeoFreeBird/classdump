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
