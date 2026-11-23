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
