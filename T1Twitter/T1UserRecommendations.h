//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
