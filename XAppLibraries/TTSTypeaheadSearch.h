//
#ifndef TTSTypeaheadSearch_h
#define TTSTypeaheadSearch_h
@import Foundation;

@class NSObject, NSString, _TtC14TFSTwitterCore24TFSTwitterTypeaheadTopic;

@interface TTSTypeaheadSearch : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 content;
}

@property (nonatomic, readonly) NSString *recentSearch;
@property (nonatomic, readonly) TFSTwitterCore.TFSTwitterTypeaheadTopic *topic;
@property (nonatomic, readonly) NSString *trendingSearch;
@property (nonatomic, readonly) NSString *searchTerm;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithRecentSearch:(id)search;
- (id)initWithTopic:(id)topic;
- (id)initWithTrendingSearch:(id)search;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TTSTypeaheadSearch_h */
