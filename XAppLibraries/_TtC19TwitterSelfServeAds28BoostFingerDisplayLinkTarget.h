//
#ifndef _TtC19TwitterSelfServeAds28BoostFingerDisplayLinkTarget_h
#define _TtC19TwitterSelfServeAds28BoostFingerDisplayLinkTarget_h
@import Foundation;

@class NSObject, _$sySo13CADisplayLinkCcSg, _$sySo22UIPanGestureRecognizerCcSg, _$sySo22UITapGestureRecognizerCcSg;

@interface TwitterSelfServeAds.BoostFingerDisplayLinkTarget : NSObject { // (Swift)
    /* instance variables */
    ((__C.CADisplayLink) -> ())? onTick;
    ((__C.UITapGestureRecognizer) -> ())? onTap;
    ((__C.UIPanGestureRecognizer) -> ())? onPan;
}

/* instance methods */
- (void)tick:(id)tick;
- (void)tapped:(id)tapped;
- (void)panned:(id)panned;
- (id)init;

@end

#endif /* _TtC19TwitterSelfServeAds28BoostFingerDisplayLinkTarget_h */
