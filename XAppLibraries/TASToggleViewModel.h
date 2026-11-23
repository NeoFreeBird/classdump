//
#ifndef TASToggleViewModel_h
#define TASToggleViewModel_h
@import Foundation;

@class NSObject;

@interface TASToggleViewModel : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 text;
    @40@0:8:16@24@32 infoAccessibilityLabel;
    @40@0:8:16@24@32 switchAccessibilityLabel;
    @40@0:8:16@24@32 font;
    @40@0:8:16@24@32 trailingPadding;
}

/* instance methods */
- (id)initWithText:(id)text infoAccessibilityLabel:(id)label switchAccessibilityLabel:(id)label font:(id)font trailingPadding:(double)padding;
- (id)init;

@end

#endif /* TASToggleViewModel_h */
