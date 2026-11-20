//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileFriendsFollowingHighlightView_h
#define T1ProfileFriendsFollowingHighlightView_h
@import Foundation;

@class TFNAttributedTextView, TFNTappableHighlightView;

@interface T1ProfileFriendsFollowingHighlightView : TFNTappableHighlightView {
    /* instance variables */
    TFNAttributedTextView *_textView;
}

/* instance methods */
- (id)initWithTextView:(id)view;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* T1ProfileFriendsFollowingHighlightView_h */
