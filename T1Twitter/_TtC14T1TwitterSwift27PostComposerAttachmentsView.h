//
#ifndef _TtC14T1TwitterSwift27PostComposerAttachmentsView_h
#define _TtC14T1TwitterSwift27PostComposerAttachmentsView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.PostComposerAttachmentAddButton, T1TwitterSwift.PostComposerAttachmentsScrollView, T1TwitterSwift.PostComposerAttachmentsView.EdgeFade ?, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> T1TwitterSwift.PostComposerAttachmentTile, _$sSaySo8TTMAssetCG, _$sSbSo8TTMAssetCcSg, _$sSo15CAGradientLayerC, _$sSo16TIPImagePipelineCSg, _$sSo17TFNTwitterAccountCSg, _$sSo25UIImpactFeedbackGeneratorC, _$sySo8TTMAssetCcSg, _$syycSg;

@interface T1TwitterSwift.PostComposerAttachmentsView : UIView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat tileSide;
    nominal type descriptor for CoreGraphics.CGFloat leadingInset;
    __C.UIImpactFeedbackGenerator tapHaptics;
    [__C.TTMAsset] attachments;
    __C.TFNTwitterAccount? account;
    __C.TIPImagePipeline? imagePipeline;
    ((__C.TTMAsset) -> ())? onRemove;
    ((__C.TTMAsset) -> ())? onTap;
    ((__C.TTMAsset) -> Swift.Bool)? canEditAttachment;
    (() -> ())? onAdd;
    (() -> ())? onScroll;
    Swift.Bool showsAddButton;
    Swift.Bool hidesContent;
    T1TwitterSwift.PostComposerAttachmentsScrollView scrollView;
    __C.CAGradientLayer fadeMaskLayer;
    T1TwitterSwift.PostComposerAttachmentsView.EdgeFade ? appliedEdgeFade;
    Swift.Array -> T1TwitterSwift.PostComposerAttachmentTile tiles;
    T1TwitterSwift.PostComposerAttachmentAddButton addButton;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift27PostComposerAttachmentsView_h */
