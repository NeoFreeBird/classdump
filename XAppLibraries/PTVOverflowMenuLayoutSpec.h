//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
