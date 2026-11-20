//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomGuestsSegmentButton_h
#define T1VoiceRoomGuestsSegmentButton_h
@import Foundation;

@class TFNButton, UIView;

@interface T1VoiceRoomGuestsSegmentButton : TFNButton

@property (nonatomic) unsigned long long filters;
@property (retain, nonatomic) UIView *indicatorView;

/* class methods */
+ (id)buttonWithTitle:(id)title filters:(unsigned long long)filters;
+ (struct CGSize { double x0; double x1; })sizeForButtonWithTitle:(id)title;

/* instance methods */
- (id)initWithStyle:(long long)style sizeClass:(long long)_class;
- (void)setHidden:(_Bool)hidden;

@end

#endif /* T1VoiceRoomGuestsSegmentButton_h */
