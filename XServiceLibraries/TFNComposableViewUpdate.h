//
#ifndef TFNComposableViewUpdate_h
#define TFNComposableViewUpdate_h
@import Foundation;

#include "TFNComposableViewAdapter.h"
#include "TFNComposableViewAnimatableState.h"
#include "TFNComposableViewSet.h"

@class NSDictionary, NSObject, UIView;

@interface TFNComposableViewUpdate : NSObject {
    /* instance variables */
    TFNComposableViewAdapter *_viewAdapter;
    TFNComposableViewSet *_viewSet;
    NSDictionary *_updateInfo;
    _Bool _updated;
    _Bool _preAnimationUpdated;
    _Bool _animationUpdated;
    _Bool _animationCompletionUpdated;
}

@property (readonly, nonatomic) long long viewIdentifier;
@property (readonly, nonatomic) long long updateType;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) TFNComposableViewAnimatableState *preAnimationViewState;
@property (readonly, nonatomic) TFNComposableViewAnimatableState *animationViewState;
@property (readonly, nonatomic) TFNComposableViewAnimatableState *animationCompletionViewState;

/* instance methods */
- (id)initWithViewAdapter:(id)adapter viewSet:(id)set updateInfo:(id)info type:(long long)type;
- (void)prepare;
- (void)performUpdate;
- (void)performPreAnimationUpdate;
- (void)performAnimationUpdate;
- (void)performAnimationCompletionUpdate;

@end

#endif /* TFNComposableViewUpdate_h */
