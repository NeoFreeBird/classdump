//
#ifndef _TtC4Grok21GrokConnectorIconView_h
#define _TtC4Grok21GrokConnectorIconView_h
@import Foundation;

#include "TIPImageViewFetchHelperDataSource-Protocol.h"
#include "TIPImageViewFetchHelperDelegate-Protocol.h"

@class Grok.GrokConnectorMonogramView, UIView, _$s10Foundation3URLVMn ?, _$sSS, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg;

@interface Grok.GrokConnectorIconView : UIView <TIPImageViewFetchHelperDelegate, TIPImageViewFetchHelperDataSource> { // (Swift)
    /* instance variables */
    Swift.String name;
    nominal type descriptor for Foundation.URL ? iconURL;
    __C.TIPImagePipeline? imagePipeline;
    Grok.GrokConnectorMonogramView monogramView;
    __C.UIImageView imageView;
}

/* instance methods */
- (void)tip_fetchHelper:(id)helper didUpdateDisplayedImageContainer:(id)container fromSourceDimensions:(struct CGSize { double x0; double x1; })dimensions isFinal:(_Bool)final;
- (void)tip_fetchHelper:(id)helper didFailToLoadFinalImage:(id)image;
- (void)tip_fetchHelperDidReset:(id)reset;
- (id)tip_imageURLForFetchHelper:(id)helper;
- (id)tip_imagePipelineForFetchHelper:(id)helper;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC4Grok21GrokConnectorIconView_h */
