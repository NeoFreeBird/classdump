//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef SCNSceneRendererDelegate_Protocol_h
#define SCNSceneRendererDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol SCNSceneRendererDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)renderer:(id)renderer updateAtTime:(double)time;
- (void)renderer:(id)renderer didApplyAnimationsAtTime:(double)time;
- (void)renderer:(id)renderer didSimulatePhysicsAtTime:(double)time;
- (void)renderer:(id)renderer didApplyConstraintsAtTime:(double)time;
- (void)renderer:(id)renderer willRenderScene:(id)scene atTime:(double)time;
- (void)renderer:(id)renderer didRenderScene:(id)scene atTime:(double)time;

@end

#endif /* SCNSceneRendererDelegate_Protocol_h */
