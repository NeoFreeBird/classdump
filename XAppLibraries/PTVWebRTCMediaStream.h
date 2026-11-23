//
#ifndef PTVWebRTCMediaStream_h
#define PTVWebRTCMediaStream_h
@import Foundation;

@class NSArray, NSObject, NSString, RTCAudioTrack, RTCVideoTrack;

@interface PTVWebRTCMediaStream : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 _isScreenShareDisabled;
}

@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic, readonly) RTCAudioTrack *latestAudioTrack;
@property (nonatomic, readonly) RTCVideoTrack *latestVideoTrack;
@property (nonatomic, readonly) RTCVideoTrack *latestScreenShareTrack;
@property (nonatomic, readonly) NSArray *audioTrackIDs;
@property (nonatomic, readonly) NSArray *videoTrackIDs;
@property (nonatomic, readonly) NSArray *screenShareTrackIDs;
@property (nonatomic, readonly) NSArray *audioTracks;
@property (nonatomic, readonly) NSArray *videoTracks;
@property (nonatomic, readonly) NSArray *screenShareTracks;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (void)removeTrack:(id)track;
- (void)addAudioTrack:(id)track;
- (void)addAudioTrack:(id)track mid:(id)mid;
- (void)addVideoTrack:(id)track;
- (void)addVideoTrack:(id)track mid:(id)mid;
- (void)addScreenShareTrack:(id)track;
- (void)addScreenShareTrack:(id)track mid:(id)mid;
- (void)disableScreenShare;
- (void)markVideoTrackAsScreenShareWithMID:(id)mid;
- (id)init;

@end

#endif /* PTVWebRTCMediaStream_h */
