//
#ifndef _TtC7Profile21ProfileAboutViewModel_h
#define _TtC7Profile21ProfileAboutViewModel_h
@import Foundation;

@class NSObject, Profile.ProfileAboutDelegate ?, Swift.Bool, _$s10TFNUISwift20BadgesImageGeneratorCMn, _$s10TFNUISwift25BadgesImageGeneratorTokenCMn ?, _$s7Combine9PublishedVMn _$s14TFSTwitterCore23TwitterUserProfileAboutCMn, _$s7Combine9PublishedVMn _$sSo16TIPImagePipelineC, _$s7Combine9PublishedVMn _$sSo23TFSTwitterCanonicalUser_p, _$s7Combine9PublishedVMn _$sSo7UIImageCSg;

@interface Profile.ProfileAboutViewModel : NSObject { // (Swift)
    /* instance variables */
    Profile.ProfileAboutDelegate ? delegate;
    nominal type descriptor for Combine.Published __C.TFSTwitterCanonicalUser _user;
    nominal type descriptor for Combine.Published __C.TIPImagePipeline _imagePipeline;
    nominal type descriptor for Combine.Published __C.UIImage? _affiliateImage;
    nominal type descriptor for Combine.Published nominal type descriptor for TFSTwitterCore.TwitterUserProfileAbout _dataModel;
    nominal type descriptor for TFNUISwift.BadgesImageGenerator badgesImageGenerator;
    nominal type descriptor for TFNUISwift.BadgesImageGeneratorToken ? affiliateImageToken;
    Swift.Bool isCurrentUserInternal;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC7Profile21ProfileAboutViewModel_h */
