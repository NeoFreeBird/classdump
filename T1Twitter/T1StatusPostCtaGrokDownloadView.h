//
#ifndef T1StatusPostCtaGrokDownloadView_h
#define T1StatusPostCtaGrokDownloadView_h
@import Foundation;

@class UIControl;

@interface T1StatusPostCtaGrokDownloadView : UIControl { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *iconImageView;
    NSNumber"16@0:8 *titleLabel;
    NSNumber"16@0:8 *actionLabel;
    NSNumber"16@0:8 *chevronImageView;
    NSNumber"16@0:8 *model;
    NSNumber"16@0:8 *tapAction;
    NSNumber"16@0:8 *imagePipeline;
    NSNumber"16@0:8 *iconFetchOperation;
    NSNumber"16@0:8 *resolvedModeCancellable;
    NSNumber"16@0:8 *currentIconImageUrl;
    NSNumber"16@0:8 *highlightOverlayView;
}

@property (nonatomic) _Bool highlighted;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeThatFitsWithWidth:(double)width model:(id)model;

/* instance methods */
- (void)handleTap;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1StatusPostCtaGrokDownloadView_h */
