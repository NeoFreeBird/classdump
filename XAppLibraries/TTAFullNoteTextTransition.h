//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTAFullNoteTextTransition_h
#define TTAFullNoteTextTransition_h
@import Foundation;

@class CALayer, NSArray, NSObject, UIView;

@interface TTAFullNoteTextTransition : NSObject {
    /* instance variables */
    NSArray *_overlayViews;
    UIView *_maskedView;
    CALayer *_mask;
}

/* instance methods */
- (id)initWithOverlayViews:(id)views maskedView:(id)view mask:(id)mask;
- (void)invalidate;

@end

#endif /* TTAFullNoteTextTransition_h */
