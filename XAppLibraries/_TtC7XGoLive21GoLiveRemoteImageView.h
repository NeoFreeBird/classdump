//
#ifndef _TtC7XGoLive21GoLiveRemoteImageView_h
#define _TtC7XGoLive21GoLiveRemoteImageView_h
@import Foundation;

#include "TIPImageViewFetchHelperDataSource-Protocol.h"

@class UIImageView, _$s10Foundation3URLVMn ?, _$sSo16TIPImagePipelineC;

@interface XGoLive.GoLiveRemoteImageView : UIImageView <TIPImageViewFetchHelperDataSource> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL ? url;
    __C.TIPImagePipeline imagePipeline;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)tip_imageURLForFetchHelper:(id)helper;
- (id)tip_imagePipelineForFetchHelper:(id)helper;
- (id)initWithImage:(id)image;
- (id)initWithImage:(id)image highlightedImage:(id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XGoLive21GoLiveRemoteImageView_h */
