//
#ifndef TFSTwitterMutedKeywordList_h
#define TFSTwitterMutedKeywordList_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterMutedKeywordList : NSObject

@property (readonly, copy, nonatomic) NSArray *mutedKeywords;

/* class methods */
+ (id)mutedKeywordListWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)init;
- (id)initWithMutedKeywords:(id)keywords;

@end

#endif /* TFSTwitterMutedKeywordList_h */
