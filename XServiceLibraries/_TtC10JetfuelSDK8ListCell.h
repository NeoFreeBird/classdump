//
#ifndef _TtC10JetfuelSDK8ListCell_h
#define _TtC10JetfuelSDK8ListCell_h
@import Foundation;

@class JetfuelSDK.VDOMRenderer ?, UITableViewCell, _$s10Foundation9IndexPathVMn ?, _$s12CoreGraphics7CGFloatVMn, __C.CGSize ?;

@interface JetfuelSDK.ListCell : UITableViewCell { // (Swift)
    /* instance variables */
    JetfuelSDK.VDOMRenderer ? renderer;
    nominal type descriptor for Foundation.IndexPath ? itemId;
    __C.CGSize ? size;
    nominal type descriptor for CoreGraphics.CGFloat bottomSpacing;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size withHorizontalFittingPriority:(float)priority verticalFittingPriority:(float)priority;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

#endif /* _TtC10JetfuelSDK8ListCell_h */
