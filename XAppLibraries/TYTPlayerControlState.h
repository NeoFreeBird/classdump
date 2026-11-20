//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TYTPlayerControlState_h
#define TYTPlayerControlState_h
@import Foundation;

@class NSObject;

@interface TYTPlayerControlState : NSObject

@property (readonly, nonatomic) _Bool muteDesired;
@property (readonly, nonatomic) _Bool playbackDesired;
@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) float rate;

/* instance methods */
- (id)initWithPlaybackDesired:(_Bool)desired muteDesired:(_Bool)desired volume:(float)volume rate:(float)rate;
- (_Bool)isMuteDesired;
- (_Bool)isPlaybackDesired;

@end

#endif /* TYTPlayerControlState_h */
