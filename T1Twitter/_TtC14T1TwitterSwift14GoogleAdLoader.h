//
#ifndef _TtC14T1TwitterSwift14GoogleAdLoader_h
#define _TtC14T1TwitterSwift14GoogleAdLoader_h
@import Foundation;

#include "GADNativeAdLoaderDelegate-Protocol.h"

@class NSObject, T1TwitterSwift.GoogleAdLoaderDelegate ?, T1TwitterSwift.GoogleAdPage, _$sSS, _$sSo11GADAdLoaderC, _$sSo17TFNTwitterAccountC, _$sSo18T1TimelineFeaturesC;

@interface T1TwitterSwift.GoogleAdLoader : NSObject <GADNativeAdLoaderDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.GoogleAdLoaderDelegate ? delegate;
    T1TwitterSwift.GoogleAdPage adPage;
    Swift.String entryID;
    __C.GADAdLoader adLoader;
    __C.TFNTwitterAccount account;
    __C.T1TimelineFeatures timelineFeatures;
}

/* instance methods */
- (void)adLoader:(id)loader didReceiveNativeAd:(id)ad;
- (void)adLoader:(id)loader didFailToReceiveAdWithError:(id)error;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift14GoogleAdLoader_h */
