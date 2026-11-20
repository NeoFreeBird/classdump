//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift23VoiceTabSocialProofView_h
#define _TtC14T1TwitterSwift23VoiceTabSocialProofView_h
@import Foundation;

@class T1TwitterSwift.VoiceTabSocialProofViewModel ?, UIStackView, _$sSo11UIImageViewCSg, _$sSo16TIPImagePipelineCSg, _$sSo7UILabelC, __C.CGSize;

@interface T1TwitterSwift.VoiceTabSocialProofView : UIStackView { // (Swift)
    /* instance variables */
    __C.CGSize imageViewSize;
    __C.TIPImagePipeline? imagePipeline;
    T1TwitterSwift.VoiceTabSocialProofViewModel ? viewModel;
    __C.UILabel textLabel;
    __C.UIImageView? $__lazy_storage_$_imageView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift23VoiceTabSocialProofView_h */
