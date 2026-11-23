//
#ifndef _TtC14T1TwitterSwift32URTAddRemoveUserInjectionHandler_h
#define _TtC14T1TwitterSwift32URTAddRemoveUserInjectionHandler_h
@import Foundation;

@class _$s10TwitterURT25URTTimelineUpdatePipelineMp, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface T1TwitterSwift.URTAddRemoveUserInjectionHandler : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TwitterURT.URTTimelineUpdatePipeline updatePipeline;
    nominal type descriptor for Swift.Int64 userID;
    nominal type descriptor for Swift.Int64 statusID;
}

/* instance methods */
- (void)handleAddUserFor:(id)_for;
- (void)handleRemoveUserFor:(id)_for;

@end

#endif /* _TtC14T1TwitterSwift32URTAddRemoveUserInjectionHandler_h */
