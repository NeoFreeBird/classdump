//
#ifndef _TtC10TwitterURT29URTCompositionStatusViewModel_h
#define _TtC10TwitterURT29URTCompositionStatusViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject, _$sSS, _$sSo14TFNTwitterUserC, _$sSo16TFNTwitterStatusCSg, _$sSo21TFNTwitterCompositionC, _$sSo22TFNTwitterStatusBanner_pSg, _$sSo23TTMLocalMediaAssetCacheC;

@interface TwitterURT.URTCompositionStatusViewModel : NSObject <NSObject> { // (Swift)
    /* instance variables */
    __C.TFNTwitterComposition composition;
    __C.TTMLocalMediaAssetCache mediaAssetCache;
    __C.TFNTwitterUser fromUser;
    __C.TFNTwitterStatus? quotedStatus;
    Swift.String entryID;
    __C.TFNTwitterStatusBanner? banner;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC10TwitterURT29URTCompositionStatusViewModel_h */
