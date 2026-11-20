//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSLayoutConstraint_TFNAdditions_h
#define NSLayoutConstraint_TFNAdditions_h
@import Foundation;

@interface NSLayoutConstraint (TFNAdditions)

/* class methods */
+ (void)activateConstraints:(id)constraints priority:(float)priority;

@end

#endif /* NSLayoutConstraint_TFNAdditions_h */
