//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift26GuideEventSpotlightSSPCell_h
#define _TtC14T1TwitterSwift26GuideEventSpotlightSSPCell_h
@import Foundation;

#include "GADNativeAdDelegate-Protocol.h"
#include "GADVideoControllerDelegate-Protocol.h"
#include "_TtC14T1TwitterSwift17GuideHeroBaseCell.h"

@class _$s10TFNUISwift11ShimmerViewCMn ?, _$sSo15GADNativeAdViewCSgXw, _$sSo15TFNGradientViewC, _$sSo17TFNTwitterAccountCSg, _$sSo7UILabelC, _$sySo6UIViewCcSg;

@interface T1TwitterSwift.GuideEventSpotlightSSPCell : T1TwitterSwift.GuideHeroBaseCell <GADVideoControllerDelegate, GADNativeAdDelegate> { // (Swift)
    /* instance variables */
    __C.UILabel promotedDescriptionLabel;
    ((__C.UIView) -> ())? feedbackHandler;
    __C.TFNGradientView gradientView;
    __C.TFNTwitterAccount? account;
    nominal type descriptor for TFNUISwift.ShimmerView ? shimmerView;
    weak __C.GADNativeAdView? nativeAdView;
}

/* instance methods */
- (void)videoControllerDidPlayVideo:(id)video;
- (void)videoControllerDidPauseVideo:(id)video;
- (void)videoControllerDidEndVideoPlayback:(id)playback;
- (void)nativeAdDidRecordClick:(id)click;
- (void)nativeAdDidRecordImpression:(id)impression;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift26GuideEventSpotlightSSPCell_h */
