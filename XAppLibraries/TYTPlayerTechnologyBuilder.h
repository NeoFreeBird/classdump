//
#ifndef TYTPlayerTechnologyBuilder_h
#define TYTPlayerTechnologyBuilder_h
@import Foundation;

#include "TAVPlayerTechnologyBuilder-Protocol.h"

@class NSObject, NSString;

@interface TYTPlayerTechnologyBuilder : NSObject <TAVPlayerTechnologyBuilder>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *videoID;
@property (nonatomic) struct CGSize { double x0; double x1; } aspectRatio;

/* instance methods */
- (id)initWithYouTubeURL:(id)url aspectRatio:(struct CGSize { double x0; double x1; })ratio;
- (id)playerTechnologyForPlaylistItem:(id)item withControlState:(id)state initialPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time observer:(id)observer;

@end

#endif /* TYTPlayerTechnologyBuilder_h */
