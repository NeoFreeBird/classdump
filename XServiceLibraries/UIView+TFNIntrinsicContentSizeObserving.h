//
#ifndef UIView_TFNIntrinsicContentSizeObserving_h
#define UIView_TFNIntrinsicContentSizeObserving_h
@import Foundation;

@interface UIView (TFNIntrinsicContentSizeObserving)

/* class methods */
+ (void)tfn_registerForIntrinsicContentSizeObserving;
+ (void)tfn_unregisterForIntrinsicContentSizeObserving;
+ (void)_tfn_registerForIntrinsicContentSizeObserving:(_Bool)observing;

/* instance methods */
- (void)tfn_intrinsicContentSizeInvalidatedForChildView:(id)view;
- (void)tfn_invalidateIntrinsicContentSizeRecursively;
- (_Bool)tfn_terminatesInvalidateIntrinsicContentSizeRecursion;
- (void)_tfn_observableInvalidateIntrinsicContentSize;
- (_Bool)_tfn_invalidateIntrinsicContentSizeRecursively;
- (void)_tfn_recursionGuardedInvalidateIntrinsicContentSize;
- (_Bool)_tfn_isIntrinsicContentSizeInvalidationRecursionGuardActive;
- (void)_tfn_setIntrinsicContentSizeInvalidationRecursionGuardActive:(_Bool)active;

@end

#endif /* UIView_TFNIntrinsicContentSizeObserving_h */
