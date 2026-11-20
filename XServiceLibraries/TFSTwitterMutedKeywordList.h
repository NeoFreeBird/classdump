//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
