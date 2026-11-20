//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFTweetGroup_h
#define OCFTweetGroup_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface OCFTweetGroup : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *tweetChoices;

/* instance methods */
- (id)initWithTitle:(id)title tweetChoices:(id)choices;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFTweetGroup_h */
