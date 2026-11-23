//
#ifndef TVPBufferingConfiguration_h
#define TVPBufferingConfiguration_h
@import Foundation;

@class NSObject;

@interface TVPBufferingConfiguration : NSObject

/* class methods */
+ (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })bufferingConfigurationWithInitialPeakBitrate:(double)bitrate;
+ (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })bufferingConfigurationWithInitialPeakBitrate:(double)bitrate playbackStartForwardBufferDuration:(double)duration pausedForwardBufferDuration:(double)duration playingForwardBufferDuration:(double)duration minEngagementDuration:(double)duration engagedForwardBufferingPercent:(double)percent engagedMaxForwardBuffering:(double)buffering;
+ (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })_tfn_bufferingConfigurationWithConfiguration:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })configuration initialPeakBitrate:(double)bitrate;

@end

#endif /* TVPBufferingConfiguration_h */
