//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XLiveChatUI26LiveChatAuthorTagImageView_h
#define _TtC11XLiveChatUI26LiveChatAuthorTagImageView_h
@import Foundation;

#include "TIPImageViewFetchHelperDataSource-Protocol.h"

@class Swift.Bool, UIView, _$s10Foundation3URLVMn ?, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineC;

@interface XLiveChatUI.LiveChatAuthorTagImageView : UIView <TIPImageViewFetchHelperDataSource> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL ? url;
    Swift.Bool isCircled;
    __C.UIImageView imageView;
    __C.TIPImagePipeline imagePipeline;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)tip_imageURLForFetchHelper:(id)helper;
- (id)tip_imagePipelineForFetchHelper:(id)helper;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XLiveChatUI26LiveChatAuthorTagImageView_h */
