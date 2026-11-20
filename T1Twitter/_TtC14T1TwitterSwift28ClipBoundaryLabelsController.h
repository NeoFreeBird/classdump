//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift28ClipBoundaryLabelsController_h
#define _TtC14T1TwitterSwift28ClipBoundaryLabelsController_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.ClipBoundaryLabelsController.ScrubContext _$sSgyc, _$sSd5start_Sd3endtSg, _$sSo7UILabelC, _TtCs12_SwiftObject;

@interface T1TwitterSwift.ClipBoundaryLabelsController : Swift._SwiftObject { // (Swift)
    /* instance variables */
    (start: Swift.Double, end: Swift.Double)? boundarySeconds;
    __C.UILabel startLabel;
    __C.UILabel endLabel;
    __C.UILabel mergedLabel;
    T1TwitterSwift.ClipBoundaryLabelsController.ScrubContext _$sSgyc scrubContext;
    Swift.Bool isStartLabelShown;
    Swift.Bool isEndLabelShown;
    Swift.Bool isMergedLabelShown;
    Swift.Bool usesMergedLabel;
}

@end

#endif /* _TtC14T1TwitterSwift28ClipBoundaryLabelsController_h */
