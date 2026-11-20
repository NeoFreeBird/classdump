//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4DMUI19SelfSizingStackView_h
#define _TtC4DMUI19SelfSizingStackView_h
@import Foundation;

@class UIStackView;

@interface DMUI.SelfSizingStackView : UIStackView // (Swift)

@property (nonatomic) _Bool layoutMarginsRelativeArrangement;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } layoutMargins;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (_Bool)isLayoutMarginsRelativeArrangement;
- (void)addArrangedSubview:(id)subview;
- (void)removeArrangedSubview:(id)subview;
- (void)insertArrangedSubview:(id)subview atIndex:(long long)index;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC4DMUI19SelfSizingStackView_h */
