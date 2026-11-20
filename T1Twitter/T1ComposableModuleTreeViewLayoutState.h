//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ComposableModuleTreeViewLayoutState_h
#define T1ComposableModuleTreeViewLayoutState_h
@import Foundation;

@class TFNComposableViewLayoutStateSet, TFNVerticalLayout;

@interface T1ComposableModuleTreeViewLayoutState : TFNComposableViewLayoutStateSet

@property (retain, nonatomic) TFNVerticalLayout *verticalLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } avatarFrame;
@property (nonatomic) struct CGSize { double x0; double x1; } size;

/* instance methods */
- (_Bool)isEqual:(id)equal;

@end

#endif /* T1ComposableModuleTreeViewLayoutState_h */
