//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlaybackObserver_Protocol_h
#define TAVPlaybackObserver_Protocol_h
@import Foundation;

@protocol TAVPlaybackObserver

@required

/* required instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)player:(id)player didUpdatePlaybackState:(id)state;

@optional

/* optional instance methods */
- (void)player:(id)player didOutputTXXXFrameWithDescription:(id)description value:(id)value;
- (void)player:(id)player didSetAudioSampleRate:(unsigned int)rate channelCount:(unsigned int)count;
- (void)player:(id)player didOutputAudioData:(id)data timestamp:(double)timestamp;
- (void)observerDidDetachFromPlayer:(id)player;
- (void)observerDidDetachFromPlayer:(id)player;
- (void)observerDidAttachToPlayer:(id)player;
- (void)observerDidAttachToPlayer:(id)player;
- (void)playerDidStopNativePictureInPicture:(id)picture;
- (void)playerDidStopNativePictureInPicture:(id)picture;
- (void)player:(id)player restoreInterfaceForNativePictureInPictureWithCompletion:(id /* block */)completion;
- (void)playerDidUpdateConfiguration:(id)configuration;

@end

#endif /* TAVPlaybackObserver_Protocol_h */
