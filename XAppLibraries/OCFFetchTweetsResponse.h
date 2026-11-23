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
