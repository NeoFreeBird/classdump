//
#ifndef TFSTwitterStatusLivePipelineUpdate_h
#define TFSTwitterStatusLivePipelineUpdate_h
@import Foundation;

@class NSObject;

@interface TFSTwitterStatusLivePipelineUpdate : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 identifier;
    B24@0:8@"NSString"16 favoriteCount;
    B24@0:8@"NSString"16 retweetCount;
    B24@0:8@"NSString"16 replyCount;
    B24@0:8@"NSString"16 quoteCount;
}

/* class methods */
+ (void)assimilateLivePipelineEventWithPayload:(id)payload statusID:(long long)id modelContext:(id)context;
+ (void)assimilateUpdatedFavoriteCount:(id)count retweetCount:(id)count replyCount:(id)count quoteCount:(id)count forStatusID:(long long)id modelContext:(id)context;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterStatusLivePipelineUpdate_h */
