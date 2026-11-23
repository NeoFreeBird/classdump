//
#ifndef _TtC21TwitterUnifiedCardsUI24CTABarVisibilityListener_h
#define _TtC21TwitterUnifiedCardsUI24CTABarVisibilityListener_h
@import Foundation;

@class NSObject, TwitterUnifiedCardsUI.ShopNowBarView ?, _$sSd, _$sSo12CAShapeLayerCSg, _$sSo6UIViewCSgXw, _$sSo8TFSTimerCSg;

@interface TwitterUnifiedCardsUI.CTABarVisibilityListener : NSObject { // (Swift)
    /* instance variables */
    Swift.Double animationDelay;
    TwitterUnifiedCardsUI.ShopNowBarView ? ctaBarView;
    weak __C.UIView? containerView;
    __C.CAShapeLayer? containerMaskLayer;
    __C.TFSTimer? timer;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUI24CTABarVisibilityListener_h */
