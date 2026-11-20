//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMRAIDResizeProperties_h
#define GADMRAIDResizeProperties_h
@import Foundation;

@class NSObject;

@interface GADMRAIDResizeProperties : NSObject

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } offset;
@property (readonly, nonatomic) long long customClosePosition;
@property (readonly, nonatomic) _Bool allowOffscreen;
@property (readonly, nonatomic) _Bool isCollapsible;

/* class methods */
+ (_Bool)isContentFrameValid:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })valid forBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds allowOffscreen:(_Bool)offscreen closeButtonPosition:(long long)position;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;

@end

#endif /* GADMRAIDResizeProperties_h */
