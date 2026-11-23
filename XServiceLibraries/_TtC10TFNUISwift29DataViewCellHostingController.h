//
#ifndef _TtC10TFNUISwift29DataViewCellHostingController_h
#define _TtC10TFNUISwift29DataViewCellHostingController_h
@import Foundation;

#include "_TtC10TFNUISwift20TFNHostingController.h"

@class Swift.Bool, _$sSo15TFNDataViewCell_So6UIViewCXcSgXw, _$sSo16TFNLayoutMetricsCSo15TFNDataViewCell_So6UIViewCXc_ABtc;

@interface TFNUISwift.DataViewCellHostingController : TFNUISwift.TFNHostingController { // (Swift)
    /* instance variables */
    weak (__C.UIView & __C.TFNDataViewCell)? cell;
    (__C.UIView & __C.TFNDataViewCell, __C.TFNLayoutMetrics) -> __C.TFNLayoutMetrics accessoryAdjustedLayoutMetrics;
    Swift.Bool isRemovedFromDataView;
}

@property (nonatomic, readonly) _Bool tfn_isLayoutSuppressed;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)calculatedLayoutMetrics;

@end

#endif /* _TtC10TFNUISwift29DataViewCellHostingController_h */
