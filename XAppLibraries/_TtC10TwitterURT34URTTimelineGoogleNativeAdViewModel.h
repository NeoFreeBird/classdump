//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TwitterURT34URTTimelineGoogleNativeAdViewModel_h
#define _TtC10TwitterURT34URTTimelineGoogleNativeAdViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSObject, NSString, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV10RTBImageAdVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sSS, _$sSo11GADNativeAdCSgXw, _$sSo16TFNTwitterStatusCSg;

@interface TwitterURT.URTTimelineGoogleNativeAdViewModel : NSObject <TFSTwitterCore.TFSTwitterScribableItem, NSObject> { // (Swift)
    /* instance variables */
    Swift.String entryID;
    nominal type descriptor for CoreGraphics.CGFloat ? cachedCellHeight;
    nominal type descriptor for CoreGraphics.CGFloat ? cachedCellWidth;
    Swift.String scribePage;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.RTBImageAd rtbImageAd;
    weak __C.GADNativeAd? nativeAd;
    __C.TFNTwitterStatus? cachedStatus;
}

@property (nonatomic, readonly) NSString *scribeItemImpressionID;
@property (nonatomic, readonly) NSDictionary *scribeItem;
@property (nonatomic, readonly) NSString *scribeComponent;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtC10TwitterURT34URTTimelineGoogleNativeAdViewModel_h */
