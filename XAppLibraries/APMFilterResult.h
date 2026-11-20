//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMFilterResult_h
#define APMFilterResult_h
@import Foundation;

@class NSData, NSObject;

@interface APMFilterResult : NSObject

@property (readonly, nonatomic) int audienceID;
@property (readonly, nonatomic) NSData *currentResults;
@property (readonly, nonatomic) NSData *previousResults;

/* instance methods */
- (id)initWithAudienceID:(int)id currentResults:(id)results previousResults:(id)results;

@end

#endif /* APMFilterResult_h */
