//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TwitterURT17URTCoverImageView_h
#define _TtC10TwitterURT17URTCoverImageView_h
@import Foundation;

#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewC;

@interface TwitterURT.URTCoverImageView : UIView <TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat aspectRatio;
    __C.UIImageView imageView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)tui_fetchHelper:(id)helper didUpdateImageFromSource:(long long)source isFinal:(_Bool)final;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10TwitterURT17URTCoverImageView_h */
