//
#ifndef T1DockedBarContainer_Protocol_h
#define T1DockedBarContainer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UILayoutGuide, UIView;

@protocol T1DockedBarContainer <NSObject>

@required

@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UILayoutGuide *viewDockedBarsSafeAreaLayoutGuide;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } viewDockedBarsSafeAreaInsets;
@property (nonatomic, readonly) _Bool hasVisibleDockedBars;

/* required instance methods */
- (void)setDockedBarOpacity:(double)opacity;
- (void)addDockedBarViewController:(id)controller position:(unsigned long long)position animated:(_Bool)animated;
- (void)removeDockedBarViewController:(id)controller animated:(_Bool)animated;
- (void)setDockedBarViewController:(id)controller hidden:(_Bool)hidden animated:(_Bool)animated;
- (void)dockedBarFittingSizeDidChangeForDockedBarViewController:(id)controller;
- (void)dockedBarFittingSizeDidChangeForDockedBarViewController:(id)controller;

@optional

@end

#endif /* T1DockedBarContainer_Protocol_h */
