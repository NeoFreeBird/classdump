//
#ifndef TAVLHLSTechnologyBuilder_h
#define TAVLHLSTechnologyBuilder_h
@import Foundation;

#include "LHLSNetworkSession-Protocol.h"
#include "LHLSPlayerClientConfig.h"
#include "TAVPlayerOutputViewFactory-Protocol.h"
#include "TAVPlayerTechnologyBuilder-Protocol.h"

@class NSObject, NSURL;

@interface TAVLHLSTechnologyBuilder : NSObject <TAVPlayerTechnologyBuilder>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) _Bool isLive;
@property (readonly, nonatomic) id <LHLSNetworkSession> networkSession;
@property (readonly, nonatomic) id <TAVPlayerOutputViewFactory> outputViewFactory;
@property (readonly, nonatomic) long long playerClientVersion;
@property (readonly, nonatomic) LHLSPlayerClientConfig *playerClientConfig;

/* instance methods */
- (id)initWithURL:(id)url isLive:(_Bool)live networkSession:(id)session outputViewFactory:(id)factory playerClientVersion:(long long)version playerClientConfig:(id)config;
- (id)init;
- (id)playerTechnologyForPlaylistItem:(id)item withControlState:(id)state initialPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time observer:(id)observer;

@end

#endif /* TAVLHLSTechnologyBuilder_h */
