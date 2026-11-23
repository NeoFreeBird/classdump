//
#ifndef PTVEmptyTableViewLayoutSpec_h
#define PTVEmptyTableViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVEmptyTableViewLayoutSpec : NSObject

/* class methods */
+ (struct CGSize { double x0; double x1; })SizeThatFits:(struct CGSize { double x0; double x1; })fits imageSize:(struct CGSize { double x0; double x1; })size labelText:(id)text;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })EmptyImageFrame:(struct CGSize { double x0; double x1; })frame EmptyLabelHeight:(double)height SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)EmptyImage;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })EmptyLabelFrame:(_Bool)frame LabelHeight:(double)height EmptyImageSize:(struct CGSize { double x0; double x1; })size ContainerSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)EmptyLabelFont;
+ (double)HeightThatFits:(id)fits ContainerSize:(struct CGSize { double x0; double x1; })size;
+ (id)SubtitleLabelFont;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })SubtitleLabelFrameWithHiddenImage:(_Bool)image LabelHeight:(double)height EmptyImageSize:(struct CGSize { double x0; double x1; })size ContainerSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })EmptySuggestionButtonFrame:(struct CGSize { double x0; double x1; })frame EmptyImageSize:(struct CGSize { double x0; double x1; })size EmptyLabelHeight:(double)height ContainerSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;

@end

#endif /* PTVEmptyTableViewLayoutSpec_h */
