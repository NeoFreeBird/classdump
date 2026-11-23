//
#ifndef _TtC10XElections16ElectionsMapView_h
#define _TtC10XElections16ElectionsMapView_h
@import Foundation;

@class UIView, _$sSDySSSo7UIColorC5color_ _$s12CoreGraphics7CGFloatVMn strengtht, _$sSaySS11geographyID_So12CAShapeLayerC5layertG, _$sSo12CAShapeLayerC, _$sSo7CALayerC, __C.CGSize;

@interface XElections.ElectionsMapView : UIView { // (Swift)
    /* instance variables */
    __C.CALayer mapLayer;
    __C.CAShapeLayer contextLayer;
    __C.CAShapeLayer outlineLayer;
    [(geographyID: Swift.String, layer: __C.CAShapeLayer)] unitLayers;
    __C.CGSize mapSize;
    Swift.Dictionary empty-list Swift.String__C.UIColorcolor first-element-marker  nominal type descriptor for CoreGraphics.CGFloat strengtht leaderFills;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC10XElections16ElectionsMapView_h */
