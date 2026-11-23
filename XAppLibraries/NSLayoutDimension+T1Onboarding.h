//
#ifndef NSLayoutDimension_T1Onboarding_h
#define NSLayoutDimension_T1Onboarding_h
@import Foundation;

@interface NSLayoutDimension (T1Onboarding)

/* instance methods */
- (id)ocf_constraintEqualToAnchor:(id)anchor multiplier:(double)multiplier constant:(double)constant priority:(float)priority;
- (id)ocf_constraintGreaterThanOrEqualToAnchor:(id)anchor multiplier:(double)multiplier constant:(double)constant priority:(float)priority;
- (id)ocf_constraintLessThanOrEqualToAnchor:(id)anchor multiplier:(double)multiplier constant:(double)constant priority:(float)priority;
- (id)ocf_constraintEqualToConstant:(double)constant priority:(float)priority;

@end

#endif /* NSLayoutDimension_T1Onboarding_h */
