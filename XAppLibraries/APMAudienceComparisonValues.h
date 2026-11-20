//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMAudienceComparisonValues_h
#define APMAudienceComparisonValues_h
@import Foundation;

@class NSDecimalNumber, NSObject;

@interface APMAudienceComparisonValues : NSObject

@property (retain, nonatomic) NSDecimalNumber *comparisonValue;
@property (retain, nonatomic) NSDecimalNumber *maxComparisonValue;
@property (retain, nonatomic) NSDecimalNumber *minComparisonValue;
@property (nonatomic) _Bool valid;

/* instance methods */
- (_Bool)isValid;

@end

#endif /* APMAudienceComparisonValues_h */
