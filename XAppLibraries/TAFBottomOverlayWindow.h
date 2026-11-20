//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFBottomOverlayWindow_h
#define TAFBottomOverlayWindow_h
@import Foundation;

@class UIWindow;

@interface TAFBottomOverlayWindow : UIWindow // (Swift)

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame overlay:(id)overlay;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithWindowScene:(id)scene;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TAFBottomOverlayWindow_h */
