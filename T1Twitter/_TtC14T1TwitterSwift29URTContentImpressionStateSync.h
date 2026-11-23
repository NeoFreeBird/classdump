//
#ifndef _TtC14T1TwitterSwift29URTContentImpressionStateSync_h
#define _TtC14T1TwitterSwift29URTContentImpressionStateSync_h
@import Foundation;

@class DispatchQueue, T1TwitterSwift.URTContentImpressionStateSync.ScrollMonitorLink ?, T1TwitterSwift.URTContentImpressionStateSync.SyncState, T1TwitterSwift.URTImpressionsProcessingTimer ?, _$s10TwitterURT25URTTimelineUpdatePipelineMp, _$s10XUtilities6AtomicCMn _$sSo10NSMapTableCySo8NSObjectCSo14NSMutableArrayCG, _$sSa -> _$s10TwitterURT31URTImpressionStateUpdateContextCMn, _$sSo8NSObject_pSg, _TtCs12_SwiftObject;

@interface T1TwitterSwift.URTContentImpressionStateSync : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for XUtilities.Atomic __C.NSMapTable<__C.NSObject, __C.NSMutableArray> entryIDsByObject;
    T1TwitterSwift.URTContentImpressionStateSync.ScrollMonitorLink ? $__lazy_storage_$_scrollMonitorLink;
    protocol descriptor for TwitterURT.URTTimelineUpdatePipeline updatePipeline;
    DispatchQueue observerAccess;
    Swift.Array -> nominal type descriptor for TwitterURT.URTImpressionStateUpdateContext updateQueue;
    T1TwitterSwift.URTImpressionsProcessingTimer ? processImpressionsTimer;
    __C.NSObject? activeAccountChangeObserver;
    T1TwitterSwift.URTContentImpressionStateSync.SyncState state;
}

/* instance methods */
- (void)handleHasRecordedImpressionUpdate:(id)update;
- (void)handleHasRecordedDwellImpressionUpdate:(id)update;
- (void)handleIsDuplicateContentIDInstanceUpdate:(id)update;
- (void)handleIsCurrentlyFirstImpressionUpdate:(id)update;
- (void)handleDidRecordPromotedImpression:(id)impression;

@end

#endif /* _TtC14T1TwitterSwift29URTContentImpressionStateSync_h */
