//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBitrateController_h
#define PTVBitrateController_h
@import Foundation;

#include "PTVPublishLadder.h"
#include "PTVRTSPStat.h"
#include "PTVStdDevStats.h"
#include "RollingAverage.h"

@class NSDate, NSObject;

@interface PTVBitrateController : NSObject {
    /* instance variables */
    RollingAverage *_videoAverage;
    RollingAverage *_audioAverage;
    PTVRTSPStat *_aveSentRate;
    PTVPublishLadder *_publishLadder;
    int _tweaksMaxVideoBitrate;
    int _tweaksMinVideoBitrate;
    int _tweaksInitialBandwidth;
    int _bandwidth;
    int _maxBandwidth;
    int _videoBitrate;
    double _currentFrameRate;
    _Bool _currentFrameRateIsReduced;
    double _currentTarget;
    NSDate *_lastRateChange;
    _Bool _loss;
    _Bool _confident;
    _Bool _rateLower;
    int _reportsSinceRateLower;
    int _fixedBitrate;
    int _fixedFrameRate;
    int _initialBandwidth;
    int _usingInitialBandwidth;
    PTVStdDevStats *_uploadRate;
    PTVStdDevStats *_videoOutputRate;
    PTVStdDevStats *_indexRatio;
    _Bool _videoOK;
    _Bool _queueFull;
    int _frameRateOverride;
    PTVStdDevStats *_bitsPerPixel;
    PTVStdDevStats *_framesPerSecond;
    PTVStdDevStats *_audioRateStats;
}

@property (readonly) _Bool transmitOK;
@property (readonly) _Bool badConnectionSeen;
@property _Bool isAudioPriority;

/* instance methods */
- (id)initWithPublishLadder:(id)ladder initialBandwidth:(int)bandwidth;
- (void)setPublishLadder:(id)ladder initialBandwidth:(int)bandwidth;
- (_Bool)encodedVideo:(id)video pts:(double)pts width:(int)width height:(int)height external:(_Bool)external;
- (void)encodedAudio:(id)audio pts:(double)pts;
- (void)calculateFrameRate;
- (int)videoBitrateForBandwidth:(int)bandwidth audioAverage:(int)average;
- (int)applyBitrateLimitsToVideoBitrate:(int)bitrate;
- (void)calculateBitrate;
- (void)dataTransfer:(long long)transfer notSent:(long long)sent trimmed:(long long)trimmed;
- (_Bool)shouldEncodeFrameAt:(double)at;
- (int)getEncoderBitrate;
- (int)getEncoderRate;
- (id)description;
- (void)reportEndOfBroadcast;
- (id)getStatistics;
- (int)getAudioRate;
- (int)getFrameRate;
- (int)getGopLengthInFrames;
- (struct CGSize { double x0; double x1; })getVideoDimensions;
- (void)overrideFramerate:(int)framerate;

@end

#endif /* PTVBitrateController_h */
