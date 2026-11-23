//
#ifndef CustomWKWebView_h
#define CustomWKWebView_h
@import Foundation;

@class WKWebView;

@interface CustomWKWebView : WKWebView

@property (nonatomic) _Bool hideInputAccessoryView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame configuration:(id)configuration;
- (id)inputAccessoryView;

@end

#endif /* CustomWKWebView_h */
