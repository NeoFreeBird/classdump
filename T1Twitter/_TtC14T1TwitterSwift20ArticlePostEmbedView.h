//
#ifndef _TtC14T1TwitterSwift20ArticlePostEmbedView_h
#define _TtC14T1TwitterSwift20ArticlePostEmbedView_h
@import Foundation;

@class NSString, T1TwitterSwift.ArticlePostEmbedView.StatusPresentation ?, UIView, _$sSo16TFNTwitterStatusCSg, _$sSo17TFNTwitterAccountC, _$sSo24TFNTappableHighlightViewC, _$sySo16TFNTwitterStatusCc, _$syycSg;

@interface T1TwitterSwift.ArticlePostEmbedView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onHeightInvalidated;
    __C.TFNTwitterAccount account;
    __C.TFNTappableHighlightView highlightView;
    (__C.TFNTwitterStatus) -> () onSelectPost;
    __C.TFNTwitterStatus? post;
    T1TwitterSwift.ArticlePostEmbedView.StatusPresentation ? statusPresentation;
}

@property (nonatomic) _Bool isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityLabel;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)calculatedLayoutMetrics;
- (_Bool)accessibilityActivate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift20ArticlePostEmbedView_h */
