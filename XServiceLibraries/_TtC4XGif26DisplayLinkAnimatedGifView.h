//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4XGif26DisplayLinkAnimatedGifView_h
#define _TtC4XGif26DisplayLinkAnimatedGifView_h
@import Foundation;

@class UIView, _$sSaySo7UIImageCG, _$sSd, _$sSi, _$sSo13CADisplayLinkCSg;

@interface XGif.DisplayLinkAnimatedGifView : UIView { // (Swift)
    /* instance variables */
    [__C.UIImage] frames;
    Swift.Double duration;
    Swift.Int frameIndex;
    Swift.Double elapsed;
    __C.CADisplayLink? displayLink;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)didMoveToWindow;

@end

#endif /* _TtC4XGif26DisplayLinkAnimatedGifView_h */
