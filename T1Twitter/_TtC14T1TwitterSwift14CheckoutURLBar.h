//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift14CheckoutURLBar_h
#define _TtC14T1TwitterSwift14CheckoutURLBar_h
@import Foundation;

@class UIView, _$s10Foundation3URLVMn ?, _$sSo11UIImageViewC, _$sSo9TFNButtonC, _$syycSg;

@interface T1TwitterSwift.CheckoutURLBar : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL ? currentURL;
    __C.UIImageView lockIcon;
    __C.TFNButton urlLabel;
    (() -> ())? onCopyLink;
    (() -> ())? onOpenInBrowser;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift14CheckoutURLBar_h */
