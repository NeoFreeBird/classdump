//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSPlayerClient_Protocol_h
#define LHLSPlayerClient_Protocol_h
@import Foundation;

#include "LHLSPlayerClientDelegate-Protocol.h"
#include "LHLSRenderDelegate-Protocol.h"
#include "LHLSiOSCaptionDelegate-Protocol.h"
#include "NSObject-Protocol.h"

@class NSDate, NSNumber;

@protocol LHLSPlayerClient <NSObject>

@required

@property (weak, nonatomic) id <LHLSPlayerClientDelegate, LHLSRenderDelegate> delegate;
@property _Bool explicitPause;
@property (readonly) _Bool isCued;
@property (readonly) double duration;
@property (readonly) double currentMediaTime;
@property _Bool muteAudio;
@property float volume;

/* required instance methods */
- (void)connectToURL:(id)url preferredForwardBufferDuration:(double)duration;
- (void)shutdown;
- (void)setMaxBitrate:(int)bitrate maxWidth:(int)width maxHeight:(int)height;
- (id)getMetrics;

@optional

@property (readonly) double queueLength;
@property (weak) id <LHLSiOSCaptionDelegate> captionDelegate;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) NSNumber *minimumSafeRPO;
@property (readonly, nonatomic) NSNumber *currentRPO;

/* optional instance methods */
- (void)seekTo:(double)to;
- (void)adjustPlayheadWithDesiredRPO:(double)rpo;

@end

#endif /* LHLSPlayerClient_Protocol_h */
