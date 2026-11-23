//
#ifndef _TtC10JetfuelSDK16ScrollerViewCell_h
#define _TtC10JetfuelSDK16ScrollerViewCell_h
@import Foundation;

@class JetfuelSDK.VDOMRenderer ?, UICollectionViewCell, _$ss5Int64VMn ?, _$syycSg;

@interface JetfuelSDK.ScrollerViewCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    JetfuelSDK.VDOMRenderer ? renderer;
    nominal type descriptor for Swift.Int64 ? itemId;
    (() -> ())? onMeasuredSizeChange;
}

/* instance methods */
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC10JetfuelSDK16ScrollerViewCell_h */
