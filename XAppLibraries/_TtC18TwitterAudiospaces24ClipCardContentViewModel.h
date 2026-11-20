//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC18TwitterAudiospaces24ClipCardContentViewModel_h
#define _TtC18TwitterAudiospaces24ClipCardContentViewModel_h
@import Foundation;

@class NSObject, Swift.Bool, TwitterAudiospaces.CardContentUserViewModel ?, TwitterAudiospaces.CardContentViewModelDisplayMode, TwitterAudiospaces.ClipModelButtonState, _$sSSSg, _$sSdSg, _$sSo16TIPImagePipelineCSg, _$sSo8NSNumberCSg;

@interface TwitterAudiospaces.ClipCardContentViewModel : NSObject { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    TwitterAudiospaces.CardContentViewModelDisplayMode displayMode;
    Swift.String? title;
    TwitterAudiospaces.CardContentUserViewModel ? meaningfulUser;
    TwitterAudiospaces.CardContentUserViewModel ? creatorUser;
    Swift.Bool playAudio;
    Swift.Double? playbackTimeRemaining;
    __C.NSNumber? audioLevel;
    Swift.String? caption;
    Swift.Bool shouldShowActionButton;
    Swift.Bool shouldEnableActionButton;
    TwitterAudiospaces.ClipModelButtonState buttonState;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC18TwitterAudiospaces24ClipCardContentViewModel_h */
