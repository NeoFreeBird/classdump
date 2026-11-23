//
#ifndef LHLSRenderDelegate_Protocol_h
#define LHLSRenderDelegate_Protocol_h
@import Foundation;

@protocol LHLSRenderDelegate

@required

/* required instance methods */
- (void)onVideo:(struct __CVBuffer *)video atTime:(double)time;
- (void)mediaIsPlaying:(_Bool)playing;
- (void)onEndPending;
- (void)onReadyToPlay;

@optional

/* optional instance methods */
- (void)setVideoRotation:(double)rotation;
- (void)onJSONMetadata:(id)jsonmetadata renderTime:(double)time;
- (void)onID3TXXXFrameWithDescription:(id)description value:(id)value renderTime:(double)time;
- (void)onAudioSetSampleRate:(unsigned int)rate channelCount:(unsigned int)count;
- (void)onAudioData:(id)data renderTime:(double)time;

@end

#endif /* LHLSRenderDelegate_Protocol_h */
