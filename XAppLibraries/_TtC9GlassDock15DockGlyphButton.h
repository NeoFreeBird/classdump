//
#ifndef _TtC9GlassDock15DockGlyphButton_h
#define _TtC9GlassDock15DockGlyphButton_h
@import Foundation;

@class GlassDock.DockPressFeedback ?, GlassDock.DockProgressIndicatorView ?, Swift.Bool, UIColor, UIControl, _$s12CoreGraphics7CGFloatVMn, _$sSS, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface GlassDock.DockGlyphButton : UIControl { // (Swift)
    /* instance variables */
    Swift.String id;
    __C.UIImageView primaryGlyph;
    __C.UIImageView secondaryGlyph;
    __C.UILabel textLabel;
    Swift.Bool showsSecondary;
    GlassDock.DockPressFeedback ? feedback;
    nominal type descriptor for CoreGraphics.CGFloat glyphSize;
    GlassDock.DockProgressIndicatorView ? progressRing;
    nominal type descriptor for CoreGraphics.CGFloat progressRingDiameter;
    Swift.Bool overlaysMedia;
}

@property (nonatomic, retain) UIColor *tintColor;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9GlassDock15DockGlyphButton_h */
