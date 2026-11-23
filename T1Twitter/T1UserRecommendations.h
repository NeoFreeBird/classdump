//
#ifndef T1UserRecommendations_h
#define T1UserRecommendations_h
@import Foundation;

@class NSArray, NSObject;

@interface T1UserRecommendations : NSObject

@property (readonly, nonatomic) NSArray *userRecommendationsArray;

/* instance methods */
- (id)initWithUserRecommendations:(id)recommendations;
- (id)init;

@end

#endif /* T1UserRecommendations_h */
