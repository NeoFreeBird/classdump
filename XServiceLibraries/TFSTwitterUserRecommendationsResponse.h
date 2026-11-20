//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterUserRecommendationsResponse_h
#define TFSTwitterUserRecommendationsResponse_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterUserRecommendationsResponse : NSObject // (Swift)

@property (nonatomic, readonly) NSArray *recommendations;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithRecommendations:(id)recommendations;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterUserRecommendationsResponse_h */
