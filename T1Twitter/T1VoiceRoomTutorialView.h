//
#ifndef T1VoiceRoomTutorialView_h
#define T1VoiceRoomTutorialView_h
@import Foundation;

#include "T1VoiceRoomTutorialViewDelegate-Protocol.h"

@class UIView;

@interface T1VoiceRoomTutorialView : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *subheaderLabel;
    NSNumber"16@0:8 *stackView;
    NSNumber"16@0:8 *context;
}

@property (nonatomic, weak) id <T1VoiceRoomTutorialViewDelegate> delegate;

/* instance methods */
- (id)initWithContext:(id)context mode:(long long)mode;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1VoiceRoomTutorialView_h */
