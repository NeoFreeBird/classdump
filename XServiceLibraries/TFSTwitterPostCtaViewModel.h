//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterPostCtaViewModel_h
#define TFSTwitterPostCtaViewModel_h
@import Foundation;

#include "_TtCC14TFSTwitterCore23TwitterPostCtaViewModel12ProductAdCta.h"
#include "_TtCC14TFSTwitterCore23TwitterPostCtaViewModel15GrokDownloadCta.h"
#include "_TtCC14TFSTwitterCore23TwitterPostCtaViewModel8BoostCta.h"

@class NSObject, NSString;

@interface TFSTwitterPostCtaViewModel : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 cta;
    B24@0:8@"NSString"16 displayLocations;
}

@property (nonatomic, readonly) NSString *scribeId;
@property (nonatomic, readonly) TFSTwitterCore.TwitterPostCtaViewModel.GrokDownloadCta *grokDownload;
@property (nonatomic, readonly) TFSTwitterCore.TwitterPostCtaViewModel.ProductAdCta *productAd;
@property (nonatomic, readonly) TFSTwitterCore.TwitterPostCtaViewModel.BoostCta *boost;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterPostCtaViewModel_h */
