//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PlayerCardViewLayoutDelegate_h
#define T1PlayerCardViewLayoutDelegate_h
@import Foundation;

@class TUICardViewLayoutDelegate;

@interface T1PlayerCardViewLayoutDelegate : TUICardViewLayoutDelegate

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)viewModelWithCardContext:(id)context;
+ (_Bool)isWide:(double)wide;
+ (id)attributedStringForTitle:(id)title;
+ (id)attributedStringForDescription:(id)description;
+ (id)textModelForTitle;
+ (id)textModelForDescription;

/* instance methods */
- (id)layoutForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)layoutSubviewsForCardView:(id)view withState:(id)state;
- (double)_layoutAttribution:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attribution layoutState:(id)state displayFullName:(id)name;
- (double)_layoutTitleAndHighlight:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlight layoutState:(id)state title:(id)title;
- (double)_layoutDescriptionAndHighlight:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlight layoutState:(id)state description:(id)description;
- (double)_layoutImageAndHighlight:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlight imageSize:(struct CGSize { double x0; double x1; })size layoutState:(id)state;
- (double)_layoutCallToAction:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })action layoutState:(id)state callToActionText:(id)text stretchToWidth:(_Bool)width;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_createPaddedRectForHighlight:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlight;

@end

#endif /* T1PlayerCardViewLayoutDelegate_h */
