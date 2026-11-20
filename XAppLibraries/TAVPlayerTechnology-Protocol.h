//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlayerTechnology_Protocol_h
#define TAVPlayerTechnology_Protocol_h
@import Foundation;

#include "TAVPixelBufferSource-Protocol.h"
#include "TAVPlayerOutputView-Protocol.h"
#include "TAVPlayerTechnologyObserver-Protocol.h"

@class UIView;

@protocol TAVPlayerTechnology

@required

@property (readonly, weak, nonatomic) id <TAVPlayerTechnologyObserver> observer;
@property (readonly, nonatomic) id <TAVPixelBufferSource> pixelBufferSource;
@property (readonly, nonatomic) UIView<TAVPlayerOutputView> *outputView;

/* required instance methods */
- (void)applyControlState:(id)state;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time completionHandler:(id /* block */)handler;
- (void)playerTechnologyPrepareForDestruction;
- (_Bool)isNativePictureInPicturePossible;
- (void)startNativePictureInPicture;
- (_Bool)isNativePictureInPictureActive;
- (void)stopNativePictureInPicture;
- (_Bool)isExternalPlaybackActive;
- (void)updateQualityEndpointsIfNeeded;
- (void)generateDebugReportWithParentReport:(id)report completionBlock:(id /* block */)block;

@optional

@end

#endif /* TAVPlayerTechnology_Protocol_h */
