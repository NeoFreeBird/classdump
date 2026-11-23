//
#ifndef NSLayoutConstraint_TFNAdditions_h
#define NSLayoutConstraint_TFNAdditions_h
@import Foundation;

@interface NSLayoutConstraint (TFNAdditions)

/* class methods */
+ (void)activateConstraints:(id)constraints priority:(float)priority;

@end

#endif /* NSLayoutConstraint_TFNAdditions_h */
