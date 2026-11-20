//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC32TwitterHomeFeatureImplementation29TimelineScrollAnchorCorrector_h
#define _TtC32TwitterHomeFeatureImplementation29TimelineScrollAnchorCorrector_h
@import Foundation;

@class _$s10Foundation4DateVMn, _$sSD -> _$ss11AnyHashableVMn _$sypGSg, _$sSa -> _$s10Foundation21NSKeyValueObservationCMn, _$sSo11UITableViewCSgyc, _TtCs12_SwiftObject;

@interface TwitterHomeFeatureImplementation.TimelineScrollAnchorCorrector : Swift._SwiftObject { // (Swift)
    /* instance variables */
    () -> __C.UITableView? tableView;
    Swift.Dictionary -> nominal type descriptor for Swift.AnyHashable _$sypGSg savedScrollPositionState;
    Swift.Array -> nominal type descriptor for Foundation.NSKeyValueObservation observations;
    nominal type descriptor for Foundation.Date correctionDeadline;
}

@end

#endif /* _TtC32TwitterHomeFeatureImplementation29TimelineScrollAnchorCorrector_h */
