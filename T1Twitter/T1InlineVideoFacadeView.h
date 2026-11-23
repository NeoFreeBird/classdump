//
#ifndef T1InlineVideoFacadeView_h
#define T1InlineVideoFacadeView_h
@import Foundation;

@class UIView;

@interface T1InlineVideoFacadeView : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *styleProvider;
    NSNumber"16@0:8 *previewImageComponent;
    NSNumber"16@0:8 *playButtonComponent;
    NSNumber"16@0:8 *videoDetailsComponent;
}

@property (nonatomic, readonly) UIView *previewView;

/* instance methods */
- (id)initWithImageFetchHelper:(id)helper mediaEntity:(id)entity displayContext:(long long)context isMixedMediaGrid:(_Bool)grid featureSwitches:(id)switches;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)init;

@end

#endif /* T1InlineVideoFacadeView_h */
