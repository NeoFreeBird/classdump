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
