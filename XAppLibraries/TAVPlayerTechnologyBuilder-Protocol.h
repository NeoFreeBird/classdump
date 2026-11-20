//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlayerTechnologyBuilder_Protocol_h
#define TAVPlayerTechnologyBuilder_Protocol_h
@import Foundation;

@protocol TAVPlayerTechnologyBuilder

@required

/* required instance methods */
- (id)playerTechnologyForPlaylistItem:(id)item withControlState:(id)state initialPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time observer:(id)observer;

@optional

@end

#endif /* TAVPlayerTechnologyBuilder_Protocol_h */
