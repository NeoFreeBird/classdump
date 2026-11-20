//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastThumbnailManager_h
#define PTVBroadcastThumbnailManager_h
@import Foundation;

#include "PTVBroadcastController.h"
#include "PTVReplayChunkPlaylist.h"
#include "PTVWeakSet.h"
#include "PTVWorkClient.h"
#include "PTVWorkClientDelegate-Protocol.h"

@class NSArray, NSObject, NSString;

@interface PTVBroadcastThumbnailManager : NSObject <PTVWorkClientDelegate> {
    /* instance variables */
    PTVWorkClient *_workClient;
    PTVWeakSet *_observers;
}

@property (retain, nonatomic) PTVReplayChunkPlaylist *replayChunkPlaylist;
@property (readonly, weak, nonatomic) PTVBroadcastController *broadcastController;
@property (readonly, nonatomic) NSArray *thumbnails;
@property (nonatomic) _Bool hasLoadedThumbnails;
@property (readonly, nonatomic) double lastThumbnailVideoPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;
- (id)context;
- (id)initWithBroadcastController:(id)controller;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)notifyWithBlock:(id /* block */)block;
- (void)fetchThumbnails;
- (void)getPreLoadedAndBestThumbnailURLForVideoPosition:(double)position completion:(id /* block */)completion;
- (void)didLoadReplayChunkPlaylist:(id)playlist;
- (void)didFailToLoadReplayChunkPlaylistWithError:(id)error;
- (unsigned long long)indexOfChunkClosestToVideoPosition:(double)position;

@end

#endif /* PTVBroadcastThumbnailManager_h */
