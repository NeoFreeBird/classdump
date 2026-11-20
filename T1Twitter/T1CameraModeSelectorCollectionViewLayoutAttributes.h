//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CameraModeSelectorCollectionViewLayoutAttributes_h
#define T1CameraModeSelectorCollectionViewLayoutAttributes_h
@import Foundation;

@class UICollectionViewLayoutAttributes;

@interface T1CameraModeSelectorCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) _Bool updated;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentViewFrame;

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredContentViewFrameForText:(id)text textFont:(id)font constraintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* T1CameraModeSelectorCollectionViewLayoutAttributes_h */
