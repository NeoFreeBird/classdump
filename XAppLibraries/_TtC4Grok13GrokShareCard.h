//
#ifndef _TtC4Grok13GrokShareCard_h
#define _TtC4Grok13GrokShareCard_h
@import Foundation;

@class Grok.CardPreviewView ?, Grok.GrokShareCard.ImageRequest ?, UIView, _$sSaySo11UIImageViewCG, _$sSo11UIImageViewCSg, _$sSo16TIPImagePipelineCSg, _$sSo22TIPImageFetchOperationCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg;

@interface Grok.GrokShareCard : UIView { // (Swift)
    /* instance variables */
    [__C.UIImageView] deepSearchFaviconImageViews;
    __C.TIPImageFetchOperation? promptImageOperation;
    __C.TIPImageFetchOperation? grokImageOperation;
    __C.TIPImagePipeline? imagePipeline;
    Grok.GrokShareCard.ImageRequest ? currentPromptImageRequest;
    Grok.GrokShareCard.ImageRequest ? currentGrokImageRequest;
    __C.UIView? $__lazy_storage_$_topRowContainer;
    Grok.CardPreviewView ? $__lazy_storage_$_cardPreviewView;
    __C.UIView? $__lazy_storage_$_alternateTopRowContainer;
    __C.UIView? $__lazy_storage_$_mainContentContainer;
    __C.UIView? $__lazy_storage_$_bottomRowContainer;
    __C.UIImageView? $__lazy_storage_$_grokAttribution;
    __C.UIImageView? $__lazy_storage_$_promptImageView;
    __C.UILabel? $__lazy_storage_$_promptLabel;
    __C.UILabel? $__lazy_storage_$_metadataLabel;
    __C.UILabel? $__lazy_storage_$_grokResponseLabel;
    __C.UIImageView? $__lazy_storage_$_grokImageView;
    __C.UIView? $__lazy_storage_$_bottomRowBorderView;
    __C.UIImageView? $__lazy_storage_$_grokIconBottomRowImageView;
    __C.UILabel? $__lazy_storage_$_askGrokYourselfLabel;
    __C.UIImageView? $__lazy_storage_$_arrowImageView;
    __C.UILabel? $__lazy_storage_$_analysisLabel;
    __C.UILabel? $__lazy_storage_$_deepSearchItemCountLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC4Grok13GrokShareCard_h */
