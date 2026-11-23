//
#ifndef PTVTotalViewersTableViewCellLayoutSpec_h
#define PTVTotalViewersTableViewCellLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVTotalViewersTableViewCellLayoutSpec : NSObject

/* class methods */
+ (id)TotalCountNumberFont;
+ (id)TotalCountSubtitleFont;
+ (double)HorizontalPaddingBetweenTotalCountLabels;
+ (double)TotalCountVerticalPadding;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })TotalViewersLabelFrameWithAttributedLabel:(id)label SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LiveViewersLabelFrameWithAttributedLabel:(id)label SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ReplayViewersLabelFrameWithAttributedLabel:(id)label SuperViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)TotalViewsAttributedForViewerCount:(long long)count TextColor:(id)color SubtitleTextColor:(id)color;
+ (id)LiveViewersAttributedForViewerCount:(long long)count DisplayType:(long long)type TextColor:(id)color SelectedTextColor:(id)color SubtitleTextColor:(id)color SelectedSubtitleTextColor:(id)color;
+ (id)ReplayViewersAttributedForViewerCount:(long long)count DisplayType:(long long)type TextColor:(id)color SelectedTextColor:(id)color SubtitleTextColor:(id)color SelectedSubtitleTextColor:(id)color;
+ (id)AttributedStringWithViewerCount:(long long)count TextColor:(id)color Subtitle:(id)subtitle SubtitleColor:(id)color;
+ (id)ParagraphStyle;
+ (double)TotalViewsCellHeightForTotalViews:(long long)views TableViewWidth:(double)width;
+ (double)TotalViewersCellHeightForLiveViewers:(long long)viewers ReplayViewers:(long long)viewers TableViewWidth:(double)width;

@end

#endif /* PTVTotalViewersTableViewCellLayoutSpec_h */
