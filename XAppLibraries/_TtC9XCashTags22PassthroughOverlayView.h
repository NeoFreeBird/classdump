//
#ifndef _TtC9XCashTags22PassthroughOverlayView_h
#define _TtC9XCashTags22PassthroughOverlayView_h
@import Foundation;

#include "TFNPreviewSuppressing-Protocol.h"

@class UIView, _$sSbycSg;

@interface XCashTags.PassthroughOverlayView : UIView <TFNPreviewSuppressing> { // (Swift)
    /* instance variables */
    (() -> Swift.Bool)? shouldPassThrough;
}

/* instance methods */
- (_Bool)suppressesPreviewingAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC9XCashTags22PassthroughOverlayView_h */
