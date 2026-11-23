//
#ifndef TASVoiceRoomSpacesAmbientMusicTracksPlayer_h
#define TASVoiceRoomSpacesAmbientMusicTracksPlayer_h
@import Foundation;

@class NSObject;

@interface TASVoiceRoomSpacesAmbientMusicTracksPlayer : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 assetStore;
    @40@0:8:16@24@32 spaceModel;
    @40@0:8:16@24@32 previewSpeakersPlayer;
    @40@0:8:16@24@32 streamingPlayerQueue;
    @40@0:8:16@24@32 currentTrack;
    @40@0:8:16@24@32 isPlayingTrack;
    @40@0:8:16@24@32 startCount;
    @40@0:8:16@24@32 startingRequest;
    @40@0:8:16@24@32 defaultVolume;
    @40@0:8:16@24@32 userStateMuted;
    @40@0:8:16@24@32 micDigitalMuteEnabled;
}

/* class methods */
+ (id)sharedAmbientMusicPlayer;
+ (_Bool)micDigitalMuteEnabled;
+ (_Bool)isPlaying;
+ (_Bool)isActive;
+ (id)trackList;

/* instance methods */
- (void)streamBuiltInSoundWithSpaceModel:(id)model bundle:(id)bundle completion:(id /* block */)completion;
- (_Bool)isPlaying;
- (_Bool)isActive;
- (id)currentTrackTitle;
- (long long)currentTrackNumber;
- (void)selectTrackWithTrack:(long long)track;
- (void)stopWithRestoreInitialMicMuteState:(_Bool)state;
- (void)setMute:(_Bool)mute;
- (void)setVolume:(float)volume;
- (id)init;

@end

#endif /* TASVoiceRoomSpacesAmbientMusicTracksPlayer_h */
