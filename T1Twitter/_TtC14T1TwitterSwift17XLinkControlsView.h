//
#ifndef _TtC14T1TwitterSwift17XLinkControlsView_h
#define _TtC14T1TwitterSwift17XLinkControlsView_h
@import Foundation;

#include "XDSButtonLayoutDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.XLinkControlsConfiguration, T1TwitterSwift.XLinkControlsView.Model, T1TwitterSwift.XLinkControlsViewDelegate ?, UIView, _$s13XDesignSystem6ButtonCMn, _$s13XDesignSystem9ButtonRowCMn, _$sSS, _$sSa -> _$s13XDesignSystem6ButtonCMn ?, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.XLinkControlsView : UIView <XDSButtonLayoutDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    Swift.String scribePage;
    Swift.Bool safariReaderModeButtonEnabled;
    Swift.Bool nativeReaderEnabled;
    Swift.Bool urlPillShareMenuEnabled;
    T1TwitterSwift.XLinkControlsConfiguration controlsConfiguration;
    nominal type descriptor for XDesignSystem.Button closeButton;
    nominal type descriptor for XDesignSystem.Button backButton;
    nominal type descriptor for XDesignSystem.Button urlPillButton;
    nominal type descriptor for XDesignSystem.Button refreshButton;
    nominal type descriptor for XDesignSystem.Button readerModeButton;
    nominal type descriptor for XDesignSystem.ButtonRow leadingButtonRow;
    nominal type descriptor for XDesignSystem.ButtonRow trailingButtonRow;
    Swift.Array -> nominal type descriptor for XDesignSystem.Button ? $__lazy_storage_$_allButtons;
    T1TwitterSwift.XLinkControlsViewDelegate ? delegate;
    T1TwitterSwift.XLinkControlsView.Model model;
}

/* instance methods */
- (void)buttonDidChangeIntrinsicSize:(id)size;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)closeTapped;
- (void)backTapped;
- (void)refreshTapped;
- (void)urlPillTapped;
- (void)readerModeTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift17XLinkControlsView_h */
