//
#ifndef _TtC10ShareSheet22ShareTrayBottomBarView_h
#define _TtC10ShareSheet22ShareTrayBottomBarView_h
@import Foundation;

@class ShareSheet.ShareTrayActionStripView, ShareSheet.ShareTrayComposing, ShareSheet.ShareTrayConfirmShareView, Swift.Bool, UIView, _$sSaySSG, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC, _$sySScSg;

@interface ShareSheet.ShareTrayBottomBarView : UIView { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? didChangeComposerText;
    __C.UIView separatorView;
    ShareSheet.ShareTrayActionStripView stripView;
    ShareSheet.ShareTrayComposing composerView;
    ShareSheet.ShareTrayConfirmShareView confirmView;
    __C.NSLayoutConstraint? $__lazy_storage_$_heightConstraint;
    Swift.Bool showsStrip;
    Swift.Bool showsComposer;
    Swift.Bool showsConfirm;
    [Swift.String] recipientIDs;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC10ShareSheet22ShareTrayBottomBarView_h */
