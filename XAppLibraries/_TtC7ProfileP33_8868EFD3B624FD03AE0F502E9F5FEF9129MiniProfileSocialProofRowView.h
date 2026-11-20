//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7ProfileP33_8868EFD3B624FD03AE0F502E9F5FEF9129MiniProfileSocialProofRowView_h
#define _TtC7ProfileP33_8868EFD3B624FD03AE0F502E9F5FEF9129MiniProfileSocialProofRowView_h
@import Foundation;

@class UIView;

@interface Profile.(MiniProfileSocialProofRowView in _8868EFD3B624FD03AE0F502E9F5FEF91) : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 socialProof;
    @40@0:8:16@24@32 imagePipeline;
    @40@0:8:16@24@32 avatarViews;
    @40@0:8:16@24@32 textLabel;
    @40@0:8:16@24@32 appliedFingerprint;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7ProfileP33_8868EFD3B624FD03AE0F502E9F5FEF9129MiniProfileSocialProofRowView_h */
