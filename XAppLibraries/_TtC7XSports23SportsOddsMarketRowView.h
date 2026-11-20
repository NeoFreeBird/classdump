//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports23SportsOddsMarketRowView_h
#define _TtC7XSports23SportsOddsMarketRowView_h
@import Foundation;

@class UIView, _$sSa -> XSports.SportsOddsColumnLayout.Slot, _$sSa -> XSports.SportsOddsMarketButtonView, _$sSo22UITapGestureRecognizerCSg, _$sSo6UIViewCSg, _$sSo7UILabelC, _$syycSg;

@interface XSports.SportsOddsMarketRowView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel nameLabel;
    Swift.Array -> XSports.SportsOddsMarketButtonView buttons;
    __C.UIView? leadingView;
    __C.UITapGestureRecognizer? $__lazy_storage_$_tapRecognizer;
    (() -> ())? onTap;
    Swift.Array -> XSports.SportsOddsColumnLayout.Slot columnSlots;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)handleTap;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports23SportsOddsMarketRowView_h */
