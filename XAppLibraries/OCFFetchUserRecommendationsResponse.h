//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFFetchUserRecommendationsResponse_h
#define OCFFetchUserRecommendationsResponse_h
@import Foundation;

@class NSArray, NSObject;

@interface OCFFetchUserRecommendationsResponse : NSObject

@property (readonly, nonatomic) NSArray *userRecommendationGroups;
@property (readonly, nonatomic) _Bool deduplication;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFFetchUserRecommendationsResponse_h */
