//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC21TweetMediaAttachments29MultiMediaCarouselScrollNudge_h
#define _TtC21TweetMediaAttachments29MultiMediaCarouselScrollNudge_h
@import Foundation;

@class Swift.Bool, _$s10Foundation21NSKeyValueObservationCMn ?, _$s8Dispatch0A8WorkItemCMn ?, _$sSo12UIScrollViewCSgXw, _$sSo6UIViewCSgXw, _TtCs12_SwiftObject;

@interface TweetMediaAttachments.MultiMediaCarouselScrollNudge : Swift._SwiftObject { // (Swift)
    /* instance variables */
    weak __C.UIScrollView? carouselScrollView;
    weak __C.UIView? ownerView;
    weak __C.UIScrollView? ancestorScrollView;
    nominal type descriptor for Foundation.NSKeyValueObservation ? ancestorObservation;
    nominal type descriptor for Dispatch.DispatchWorkItem ? workItem;
    Swift.Bool userHasScrolled;
    Swift.Bool hasPlayed;
}

@end

#endif /* _TtC21TweetMediaAttachments29MultiMediaCarouselScrollNudge_h */
