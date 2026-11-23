//
#ifndef TFNItemsPartialAnimator_h
#define TFNItemsPartialAnimator_h
@import Foundation;

#include "TFNItemsAnimator.h"

@class NSArray, NSMutableSet;

@interface TFNItemsPartialAnimator : TFNItemsAnimator {
    /* instance variables */
    NSMutableSet *_animatedItems;
    NSMutableSet *_animatedSections;
}

@property (readonly, nonatomic) NSArray *animatedItemsAndSections;

/* instance methods */
- (id)initWithDelegate:(id)delegate toSections:(id)sections userInfo:(id)info animatedItemsAndSections:(id)sections;
- (id)instructions;
- (_Bool)_includeInstruction:(id)instruction;
- (id)_canonicalItemSectionWithSection:(id)section;

@end

#endif /* TFNItemsPartialAnimator_h */
