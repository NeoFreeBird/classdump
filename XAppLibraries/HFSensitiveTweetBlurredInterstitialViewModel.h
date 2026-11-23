//
#ifndef HFSensitiveTweetBlurredInterstitialViewModel_h
#define HFSensitiveTweetBlurredInterstitialViewModel_h
@import Foundation;

@class NSObject;

@interface HFSensitiveTweetBlurredInterstitialViewModel : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 titleText;
    @40@0:8:16@24@32 explanationText;
    @40@0:8:16@24@32 visibleMediaTitle;
    @40@0:8:16@24@32 hiddenMediaTitle;
    @40@0:8:16@24@32 visibleMediaColor;
    @40@0:8:16@24@32 hiddenMediaColor;
}

/* instance methods */
- (id)init;
- (id)initWithImageInterstitial:(id)interstitial;
- (id)initWithWarnings:(id)warnings;

@end

#endif /* HFSensitiveTweetBlurredInterstitialViewModel_h */
