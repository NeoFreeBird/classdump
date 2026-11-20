//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardStatusTranslateLayoutState_h
#define T1StandardStatusTranslateLayoutState_h
@import Foundation;

@class TFNComposableViewLayoutState;

@interface T1StandardStatusTranslateLayoutState : TFNComposableViewLayoutState

@property (nonatomic) long long translationState;
@property (nonatomic) _Bool translatable;

/* instance methods */
- (_Bool)isTranslatable;

@end

#endif /* T1StandardStatusTranslateLayoutState_h */
