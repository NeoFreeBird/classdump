//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSLayoutAnchor_OCFUI_h
#define NSLayoutAnchor_OCFUI_h
@import Foundation;

@interface NSLayoutAnchor (OCFUI)

/* instance methods */
- (id)ocf_constraintEqualToAnchor:(id)anchor priority:(float)priority;
- (id)ocf_constraintGreaterThanOrEqualToAnchor:(id)anchor priority:(float)priority;
- (id)ocf_constraintLessThanOrEqualToAnchor:(id)anchor priority:(float)priority;
- (id)ocf_constraintEqualToAnchor:(id)anchor constant:(double)constant priority:(float)priority;
- (id)ocf_constraintGreaterThanOrEqualToAnchor:(id)anchor constant:(double)constant priority:(float)priority;
- (id)ocf_constraintLessThanOrEqualToAnchor:(id)anchor constant:(double)constant priority:(float)priority;

@end

#endif /* NSLayoutAnchor_OCFUI_h */
