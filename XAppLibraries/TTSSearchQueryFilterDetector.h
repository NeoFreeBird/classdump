//
#ifndef TTSSearchQueryFilterDetector_h
#define TTSSearchQueryFilterDetector_h
@import Foundation;

@class NSObject;

@interface TTSSearchQueryFilterDetector : NSObject // (Swift)

/* class methods */
+ (_Bool)queryContainsFilterOperators:(id)operators;

/* instance methods */
- (id)init;

@end

#endif /* TTSSearchQueryFilterDetector_h */
