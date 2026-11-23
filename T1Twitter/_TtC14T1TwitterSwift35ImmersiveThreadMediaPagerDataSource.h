//
#ifndef _TtC14T1TwitterSwift35ImmersiveThreadMediaPagerDataSource_h
#define _TtC14T1TwitterSwift35ImmersiveThreadMediaPagerDataSource_h
@import Foundation;

@class T1TwitterSwift.ImmersiveCardViewModelProtocol, _$sSa -> T1TwitterSwift.ImmersiveCardViewModelProtocol, _$sySi_Sitc, _$syycSg, _TtCs12_SwiftObject;

@interface T1TwitterSwift.ImmersiveThreadMediaPagerDataSource : Swift._SwiftObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveCardViewModelProtocol entry;
    (Swift.Int, Swift.Int) -> () onSegmentDidBecomeActive;
    Swift.Array -> T1TwitterSwift.ImmersiveCardViewModelProtocol segmentViewModels;
    (() -> ())? onSegmentsDidChange;
}

@end

#endif /* _TtC14T1TwitterSwift35ImmersiveThreadMediaPagerDataSource_h */
