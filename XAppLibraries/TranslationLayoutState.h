//
#ifndef TranslationLayoutState_h
#define TranslationLayoutState_h
@import Foundation;

@class TFNComposableViewLayoutState;

@interface TranslationLayoutState : TFNComposableViewLayoutState // (Swift)

@property (nonatomic) long long translationState;

/* instance methods */
- (id)init;
- (id)initWithTranslationState:(long long)state;

@end

#endif /* TranslationLayoutState_h */
