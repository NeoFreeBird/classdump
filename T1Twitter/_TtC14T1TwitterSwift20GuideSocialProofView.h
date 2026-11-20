//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift20GuideSocialProofView_h
#define _TtC14T1TwitterSwift20GuideSocialProofView_h
@import Foundation;

#include "TFNPreferredMaxLayoutWidthSizable-Protocol.h"

@class NSString, T1TwitterSwift.GuideSocialProofViewModel ?, T1TwitterSwift.GuideSocialProofViewStyle, T1TwitterSwift.URTRichTextView, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo16TIPImagePipelineCSg, _$sSo18NSLayoutConstraintCSg, _$sSo18TUIAvatarImageViewC, _$sSo31T1URTRichTextInteractionHandler_pSg;

@interface T1TwitterSwift.GuideSocialProofView : UIView <TFNPreferredMaxLayoutWidthSizable> { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    __C.T1URTRichTextInteractionHandler? interactionHandler;
    T1TwitterSwift.GuideSocialProofViewStyle style;
    __C.TUIAvatarImageView userImageView;
    T1TwitterSwift.URTRichTextView textView;
    __C.NSLayoutConstraint? $__lazy_storage_$_textViewLeading;
    T1TwitterSwift.GuideSocialProofViewModel ? viewModel;
}

@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic, copy) NSString *accessibilityLabel;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift20GuideSocialProofView_h */
