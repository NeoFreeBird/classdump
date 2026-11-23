//
#ifndef PTVReplayChunkPlaylist_h
#define PTVReplayChunkPlaylist_h
@import Foundation;

#include "PTVReplayChunk.h"

@class NSArray, NSObject;

@interface PTVReplayChunkPlaylist : NSObject {
    /* instance variables */
    PTVReplayChunk *_placeholderChunkForSearch;
}

@property (readonly, nonatomic) NSArray *chunks;

/* class methods */
+ (id /* block */)ComparatorForReplayChunks;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (void)fixChunksWithNoTime:(id)time;
- (void)getPreLoadedAndBestThumbnailForVideoPosition:(double)position completion:(id /* block */)completion;
- (unsigned long long)indexOfChunkClosestToVideoPosition:(double)position;
- (id)closestLoadedChunkWithClosestIndex:(unsigned long long)index;
- (void)preloadThumbnails;

@end

#endif /* PTVReplayChunkPlaylist_h */
