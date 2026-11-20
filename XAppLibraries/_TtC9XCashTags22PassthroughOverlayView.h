//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9XCashTags22PassthroughOverlayView_h
#define _TtC9XCashTags22PassthroughOverlayView_h
@import Foundation;

#include "TFNPreviewSuppressing-Protocol.h"

@class Swift.Bool __C.CGPoint _$scSg, UIView;

@interface XCashTags.PassthroughOverlayView : UIView <TFNPreviewSuppressing> { // (Swift)
    /* instance variables */
    Swift.Bool __C.CGPoint _$scSg shouldPassThrough;
}

/* instance methods */
- (_Bool)suppressesPreviewingAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC9XCashTags22PassthroughOverlayView_h */
