//
#ifndef T1StatusPostInstallPromptViewLayoutState_h
#define T1StatusPostInstallPromptViewLayoutState_h
@import Foundation;

@class TFNComposableViewLayoutState;

@interface T1StatusPostInstallPromptViewLayoutState : TFNComposableViewLayoutState

@property (readonly, nonatomic) _Bool isPromptVisible;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } feedbackViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alreadyInstalledButtonFrame;

/* instance methods */
- (id)initIsPromptVisible:(_Bool)visible feedbackViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame alreadyInstalledButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1StatusPostInstallPromptViewLayoutState_h */
