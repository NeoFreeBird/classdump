//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppSplitOverlayView_h
#define T1AppSplitOverlayView_h
@import Foundation;

@class UIView;

@interface T1AppSplitOverlayView : UIView {
    /* instance variables */
    UIView *_hostedView;
}

/* instance methods */
- (id)initWithHostedView:(id)view;
- (void)setAlpha:(double)alpha;

@end

#endif /* T1AppSplitOverlayView_h */
