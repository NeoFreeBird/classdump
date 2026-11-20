//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC17CommunityAnalysis27CommunityAnalysisTeaserView_h
#define _TtC17CommunityAnalysis27CommunityAnalysisTeaserView_h
@import Foundation;

@class CommunityAnalysis.CommunityAnalysisLoadableViewModel CommunityAnalysis.CommunityAnalysisSummary, CommunityAnalysis.CommunityAnalysisTeaserStyle, UIControl, _$s10Foundation4UUIDVMn ?, _$sSS, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface CommunityAnalysis.CommunityAnalysisTeaserView : UIControl { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    CommunityAnalysis.CommunityAnalysisLoadableViewModel CommunityAnalysis.CommunityAnalysisSummary viewModel;
    CommunityAnalysis.CommunityAnalysisTeaserStyle style;
    nominal type descriptor for Foundation.UUID ? observer;
    __C.UIImageView iconView;
    __C.UILabel line;
    __C.UIImageView chevronView;
    __C.UIView topHairline;
    __C.UIView bottomHairline;
    Swift.String question;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)didTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC17CommunityAnalysis27CommunityAnalysisTeaserView_h */
