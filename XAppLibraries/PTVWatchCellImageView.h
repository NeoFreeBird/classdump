//
#ifndef PTVWatchCellImageView_h
#define PTVWatchCellImageView_h
@import Foundation;

#include "PTVLoadingImageView.h"

@class UIView;

@interface PTVWatchCellImageView : PTVLoadingImageView {
    /* instance variables */
    UIView *_shade;
    PTVWatchCellImageView *_weakSelf;
}

@property (nonatomic) _Bool useShade;
@property (nonatomic) _Bool shouldUpdateThumbnails;
@property (nonatomic) _Bool useClearBackgroundColorWhenLoaded;

/* class methods */
+ (Class)ImageLoaderClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setImage:(id)image animated:(_Bool)animated;
- (void)didChangeStateFrom:(int)from;
- (id)watchCellImageLoader;
- (void)alphaState;
- (void)backgroundAlphaState;

@end

#endif /* PTVWatchCellImageView_h */
