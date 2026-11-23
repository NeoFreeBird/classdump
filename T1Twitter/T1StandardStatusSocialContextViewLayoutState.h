//
#ifndef T1StandardStatusSocialContextViewLayoutState_h
#define T1StandardStatusSocialContextViewLayoutState_h
@import Foundation;

@class NSAttributedString, TFNComposableViewLayoutState;

@interface T1StandardStatusSocialContextViewLayoutState : TFNComposableViewLayoutState

@property (retain, nonatomic) NSAttributedString *bannerText;
@property (retain, nonatomic) NSAttributedString *linkText;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } midDotFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } seeLessFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } caretButtonFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } socialBadgeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } socialTextFrame;
@property (nonatomic) _Bool socialTextMultipleLines;
@property (nonatomic) _Bool socialTextMaxLinesExceeded;
@property (nonatomic) _Bool socialTextSingleLine;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } linkButtonFrame;

/* instance methods */
- (_Bool)isSocialTextMultipleLines;
- (_Bool)isSocialTextMaxLinesExceeded;
- (_Bool)isSocialTextSingleLine;

@end

#endif /* T1StandardStatusSocialContextViewLayoutState_h */
