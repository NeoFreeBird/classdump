//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
