//
#ifndef _TtC18TwitterAudiospaces20CardContentViewModel_h
#define _TtC18TwitterAudiospaces20CardContentViewModel_h
@import Foundation;

@class NSObject, Swift.Bool, TwitterAudiospaces.AudienceType, TwitterAudiospaces.CardContentUserViewModel ?, TwitterAudiospaces.CardContentViewButtonState, TwitterAudiospaces.CardContentViewModelDisplayMode, TwitterAudiospaces.CardContentViewModelState, _$s10Foundation4DateVMn ?, _$s14TFSTwitterCore16TwitterCommunityOMn ?, _$sSSSg, _$sSa -> TwitterAudiospaces.CardContentUserViewModel, _$sSo16TIPImagePipelineCSg, _$sSuSg;

@interface TwitterAudiospaces.CardContentViewModel : NSObject { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    TwitterAudiospaces.CardContentViewModelDisplayMode displayMode;
    TwitterAudiospaces.CardContentViewModelState state;
    TwitterAudiospaces.AudienceType audienceType;
    nominal type descriptor for Foundation.Date ? scheduledStart;
    nominal type descriptor for Foundation.Date ? startDate;
    nominal type descriptor for Foundation.Date ? endDate;
    Swift.Array -> TwitterAudiospaces.CardContentUserViewModel socialProofUsers;
    Swift.UInt? totalParticipating;
    Swift.UInt? totalParticipated;
    Swift.UInt? subscriberCount;
    Swift.String? title;
    TwitterAudiospaces.CardContentUserViewModel ? meaningfulUser;
    TwitterAudiospaces.CardContentViewButtonState buttonState;
    Swift.Bool buttonSelected;
    nominal type descriptor for TFSTwitterCore.TwitterCommunity ? community;
    Swift.Bool hasVideo;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC18TwitterAudiospaces20CardContentViewModel_h */
