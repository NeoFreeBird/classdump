//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift33FleetsFeatureHighlightsAvatarView_h
#define _TtC14T1TwitterSwift33FleetsFeatureHighlightsAvatarView_h
@import Foundation;

#include "_TtC14T1TwitterSwift22FleetsAnimatableUIView.h"

@class Swift.Bool, T1TwitterSwift.FleetsFeatureHighlightsGradientBackgroundView ?, _$sSo11UIImageViewC, _$sSo7UIColorC;

@interface T1TwitterSwift.FleetsFeatureHighlightsAvatarView : T1TwitterSwift.FleetsAnimatableUIView { // (Swift)
    /* instance variables */
    Swift.Bool includeBackgroundView;
    __C.UIImageView avatarImageView;
    T1TwitterSwift.FleetsFeatureHighlightsGradientBackgroundView ? gradientBackgroundView;
    __C.UIColor borderColor;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;

@end

#endif /* _TtC14T1TwitterSwift33FleetsFeatureHighlightsAvatarView_h */
