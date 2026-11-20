//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef CustomWKWebView_h
#define CustomWKWebView_h
@import Foundation;

@class UIView, WKWebView;

@interface CustomWKWebView : WKWebView

@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) _Bool hideInputAccessoryView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame configuration:(id)configuration;
- (id)inputAccessoryView;

@end

#endif /* CustomWKWebView_h */
