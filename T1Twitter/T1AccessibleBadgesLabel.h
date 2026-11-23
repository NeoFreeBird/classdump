//
#ifndef T1AccessibleBadgesLabel_h
#define T1AccessibleBadgesLabel_h
@import Foundation;

@class NSMutableArray, UILabel;

@interface T1AccessibleBadgesLabel : UILabel {
    /* instance variables */
    NSMutableArray *_accessibleElements;
}

/* instance methods */
- (void)resetAccessibleElements;
- (void)addAccessibleElementForLabel:(id)label;
- (void)addAccessibleElementForLabel:(id)label accessibilityHint:(id)hint accessibilityTraits:(unsigned long long)traits;
- (void)_t1_updateAccessibilityFrames;
- (id)accessibleElements;
- (_Bool)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)index;
- (long long)indexOfAccessibilityElement:(id)element;

@end

#endif /* T1AccessibleBadgesLabel_h */
