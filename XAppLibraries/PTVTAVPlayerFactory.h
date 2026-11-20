//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVTAVPlayerFactory_h
#define PTVTAVPlayerFactory_h
@import Foundation;

@class NSObject;

@interface PTVTAVPlayerFactory : NSObject

/* class methods */
+ (id)playerForBroadcast:(id)broadcast contentURL:(id)url isLive:(_Bool)live isLHLS:(_Bool)lhls initialScribeContext:(id)context initialPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time loggedInUser:(id)user scribe:(id)scribe networkSession:(id)session;
+ (id)sessionForBroadcast:(id)broadcast contentURL:(id)url techBuilder:(id)builder initialPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time initialScribeContext:(id)context scribe:(id)scribe qualityViewThreshold:(double)threshold minimumDurationForQualityViewEvent:(double)event;

@end

#endif /* PTVTAVPlayerFactory_h */
