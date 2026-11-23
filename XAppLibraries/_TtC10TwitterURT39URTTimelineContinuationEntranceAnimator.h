//
#ifndef _TtC10TwitterURT39URTTimelineContinuationEntranceAnimator_h
#define _TtC10TwitterURT39URTTimelineContinuationEntranceAnimator_h
@import Foundation;

@class _$sSDySSSdG, _$sSS, _$sSaySo6UIViewC4cell_SS7entryIDtG, _$sShySSG, _$sSo12UIScrollViewCSgyc, _$syyc, _TtCs12_SwiftObject;

@interface TwitterURT.URTTimelineContinuationEntranceAnimator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String dividerEntryID;
    () -> __C.UIScrollView? visibleScrollView;
    () -> () isAwaitingDividerDidChange;
    Swift.Set<Swift.String> entryIDs;
    [(cell: __C.UIView, entryID: Swift.String)] heldCells;
    [Swift.String : Swift.Double] cascadeBeginTimes;
}

@end

#endif /* _TtC10TwitterURT39URTTimelineContinuationEntranceAnimator_h */
