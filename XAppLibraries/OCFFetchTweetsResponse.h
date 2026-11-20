//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFFetchTweetsResponse_h
#define OCFFetchTweetsResponse_h
@import Foundation;

@class NSArray, NSObject;

@interface OCFFetchTweetsResponse : NSObject

@property (readonly, nonatomic) NSArray *tweetGroups;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFFetchTweetsResponse_h */
