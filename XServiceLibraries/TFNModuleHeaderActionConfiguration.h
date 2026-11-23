//
#ifndef TFNModuleHeaderActionConfiguration_h
#define TFNModuleHeaderActionConfiguration_h
@import Foundation;

@class NSObject, UIView;

@interface TFNModuleHeaderActionConfiguration : NSObject

@property (copy, nonatomic) id /* block */ viewProvider;
@property (retain, nonatomic) UIView *view;

/* instance methods */
- (struct CGSize { double x0; double x1; })_tfn_intrinsicContentSize;
- (id)initWithViewProvider:(id /* block */)provider;
- (void)tfn_fontSizeChanged;

@end

#endif /* TFNModuleHeaderActionConfiguration_h */
