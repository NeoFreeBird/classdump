//
#ifndef T1ImmersivePlaylist_h
#define T1ImmersivePlaylist_h
@import Foundation;

@class NSArray, NSObject, TFNTwitterStatus;

@interface T1ImmersivePlaylist : NSObject

@property (readonly, copy, nonatomic) NSArray *chapters;
@property (readonly, nonatomic) long long startIndex;
@property (readonly, nonatomic) TFNTwitterStatus *startStatus;
@property (readonly, nonatomic) _Bool continuesIntoFeed;

/* instance methods */
- (id)initWithChapters:(id)chapters startIndex:(long long)index startStatus:(id)status continuesIntoFeed:(_Bool)feed;

@end

#endif /* T1ImmersivePlaylist_h */
