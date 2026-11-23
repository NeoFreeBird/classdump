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
