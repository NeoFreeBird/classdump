//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC32TwitterHomeFeatureImplementation25HomeLogoRefreshController_h
#define _TtC32TwitterHomeFeatureImplementation25HomeLogoRefreshController_h
@import Foundation;

#include "TFNPullToRefreshControlObserver-Protocol.h"

@class NSObject, Swift.Bool, TwitterHomeFeatureImplementation.HomeHeaderStretching, TwitterHomeFeatureImplementation.HomeLogoRefreshController.Binding ?, TwitterHomeFeatureImplementation.HomeLogoRefreshTuning, TwitterHomeFeatureImplementation.HomeTabTapPull ?, _$s22TwitterHomeRefreshLogo0bcD9AnimatingMp _$s_So6UIViewCXc, _$sSo25UIImpactFeedbackGeneratorC;

@interface TwitterHomeFeatureImplementation.HomeLogoRefreshController : NSObject <TFNPullToRefreshControlObserver> { // (Swift)
    /* instance variables */
    TwitterHomeFeatureImplementation.HomeHeaderStretching headerStretch;
    protocol descriptor for TwitterHomeRefreshLogo.HomeRefreshLogoAnimating _$s_So6UIViewCXc logo;
    TwitterHomeFeatureImplementation.HomeLogoRefreshTuning tuning;
    TwitterHomeFeatureImplementation.HomeLogoRefreshController.Binding ? binding;
    TwitterHomeFeatureImplementation.HomeTabTapPull ? tabTapPull;
    Swift.Bool followsPull;
    Swift.Bool isUndrawn;
    __C.UIImpactFeedbackGenerator undrawnHaptic;
}

/* instance methods */
- (void)pullToRefreshControl:(id)control didUpdatePullFraction:(double)fraction dragging:(_Bool)dragging;
- (void)pullToRefreshControl:(id)control didBeginRefreshingFromPull:(_Bool)pull;
- (void)pullToRefreshControlDidEndRefreshing:(id)refreshing;
- (id)init;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation25HomeLogoRefreshController_h */
