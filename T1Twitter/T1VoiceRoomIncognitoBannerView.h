//
#ifndef T1VoiceRoomIncognitoBannerView_h
#define T1VoiceRoomIncognitoBannerView_h
@import Foundation;

#include "T1VoiceRoomIncognitoBannerViewDelegate-Protocol.h"

@class UIStackView;

@interface T1VoiceRoomIncognitoBannerView : UIStackView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *label;
}

@property (nonatomic, weak) id <T1VoiceRoomIncognitoBannerViewDelegate> delegate;
@property (nonatomic) _Bool hidden;

/* instance methods */
- (_Bool)isHidden;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)handleTap;

@end

#endif /* T1VoiceRoomIncognitoBannerView_h */
