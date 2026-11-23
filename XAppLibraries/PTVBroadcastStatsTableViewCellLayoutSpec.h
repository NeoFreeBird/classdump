//
#ifndef PTVBroadcastStatsTableViewCellLayoutSpec_h
#define PTVBroadcastStatsTableViewCellLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVBroadcastStatsTableViewCellLayoutSpec : NSObject

/* class methods */
+ (id)LabelFontWithDisplayStyle:(long long)style;
+ (double)VerticalPaddingWithDisplayStyle:(long long)style;
+ (double)RightHorizontalPadding;
+ (double)LeftHorizontalPaddingForDisplayStyle:(long long)style;
+ (double)PaddingBetweenLabels;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ValueLabelFrameWithText:(id)text DisplayStyle:(long long)style BottomOfLastRow:(double)row SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })NameLabelFrameWithText:(id)text ValueLabelWidth:(double)width DisplayStyle:(long long)style BottomOfLastRow:(double)row SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })SeparatorLineFrameWithLabelBottom:(double)bottom DisplayStyleOfNextStat:(long long)stat SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (double)HeightWithStatNames:(id)names StatValues:(id)values StatDisplayStyles:(id)styles SuperviewWidth:(double)width;
+ (id)CollapsedLabelFont;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })CollapsedLabelFrameWithText:(id)text SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (double)CollapsedHeight;
+ (double)WatchRateInfoButtonPadding;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })WatchRateInfoButtonFrameWithWatchLabelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame infoButtonSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;

@end

#endif /* PTVBroadcastStatsTableViewCellLayoutSpec_h */
