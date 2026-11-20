//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNComposableViewLayoutState_h
#define TFNComposableViewLayoutState_h
@import Foundation;

@class NSObject;

@interface TFNComposableViewLayoutState : NSObject

@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) double topContentInset;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } baselineEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } additionalEdgeInsets;

@end

#endif /* TFNComposableViewLayoutState_h */
