//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNMenuScrollableControlFixingGestureRecognizer_h
#define TFNMenuScrollableControlFixingGestureRecognizer_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIGestureRecognizer;

@interface TFNMenuScrollableControlFixingGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    /* instance variables */
    double _startTime;
    struct CGPoint { double x; double y; } _startPoint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)installOnControl:(id)control;

/* instance methods */
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (_Bool)canPreventGestureRecognizer:(id)recognizer;
- (void)reset;
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (_Bool)_tfn_isRecognizing;
- (void)_tfn_end:(long long)_tfn_end;
- (void)_tfn_timeout;
- (id)_tfn_scrollableView;

@end

#endif /* TFNMenuScrollableControlFixingGestureRecognizer_h */
