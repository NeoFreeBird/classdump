//
#ifndef PTVOverflowMenuLayoutSpec_h
#define PTVOverflowMenuLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVOverflowMenuLayoutSpec : NSObject

/* class methods */
+ (double)HeaderSpacing;
+ (double)IconContainerWidth;
+ (double)IconContainerOffset;
+ (double)MaxImageWidth;
+ (double)SideMargin;
+ (id)AttributesForNormalActionItemTitle;
+ (id)AttributesForDismissActionItemTitle;

@end

#endif /* PTVOverflowMenuLayoutSpec_h */
