//
#ifndef _TtC19TwitterSelfServeAds24BoostFingerTouchObserver_h
#define _TtC19TwitterSelfServeAds24BoostFingerTouchObserver_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class UIGestureRecognizer, _$sySo7UITouchCcSg;

@interface TwitterSelfServeAds.BoostFingerTouchObserver : UIGestureRecognizer <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    ((__C.UITouch) -> ())? onTouchBegan;
}

/* instance methods */
- (id)init;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)initWithTarget:(id)target action:(SEL)action;

@end

#endif /* _TtC19TwitterSelfServeAds24BoostFingerTouchObserver_h */
