//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNItemsAnimatorGroup_h
#define TFNItemsAnimatorGroup_h
@import Foundation;

#include "TFNItemsAnimator.h"

@class NSMutableArray;

@interface TFNItemsAnimatorGroup : TFNItemsAnimator {
    /* instance variables */
    NSMutableArray *_animators;
}

/* instance methods */
- (id)initWithDelegate:(id)delegate toSections:(id)sections userInfo:(id)info;
- (void)addAnimator:(id)animator;
- (void)animateWithCompletion:(id /* block */)completion;
- (void)_animateFromAnimatorAtIndex:(unsigned long long)index;

@end

#endif /* TFNItemsAnimatorGroup_h */
