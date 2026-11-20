//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4DMUI18FixedSizeImageView_h
#define _TtC4DMUI18FixedSizeImageView_h
@import Foundation;

@class UIImageView, __C.CGSize;

@interface DMUI.FixedSizeImageView : UIImageView { // (Swift)
    /* instance variables */
    __C.CGSize size;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithImage:(id)image;
- (id)initWithImage:(id)image highlightedImage:(id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC4DMUI18FixedSizeImageView_h */
