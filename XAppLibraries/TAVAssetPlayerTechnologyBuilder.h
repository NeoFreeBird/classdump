//
#ifndef TAVAssetPlayerTechnologyBuilder_h
#define TAVAssetPlayerTechnologyBuilder_h
@import Foundation;

#include "TAVPlayerOutputViewFactory-Protocol.h"
#include "TAVPlayerTechnologyBuilder-Protocol.h"

@class AVAsset, AVAudioMix, AVVideoComposition, NSHashTable, NSObject;

@interface TAVAssetPlayerTechnologyBuilder : NSObject <TAVPlayerTechnologyBuilder> {
    /* instance variables */
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    id <TAVPlayerOutputViewFactory> _outputViewFactory;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_items;
}

/* instance methods */
- (id)initWithAsset:(id)asset videoComposition:(id)composition audioMix:(id)mix outputViewFactory:(id)factory;
- (id)initWithAsset:(id)asset videoComposition:(id)composition outputViewFactory:(id)factory;
- (void)setAudioMix:(id)mix;
- (id)private_constructItem;
- (id)playerTechnologyForPlaylistItem:(id)item withControlState:(id)state initialPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time observer:(id)observer;

@end

#endif /* TAVAssetPlayerTechnologyBuilder_h */
