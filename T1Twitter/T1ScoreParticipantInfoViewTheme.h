//
#ifndef T1ScoreParticipantInfoViewTheme_h
#define T1ScoreParticipantInfoViewTheme_h
@import Foundation;

@class NSObject, UIColor, UIFont;

@interface T1ScoreParticipantInfoViewTheme : NSObject

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } avatarSize;
@property (readonly, nonatomic) UIFont *nameFont;
@property (readonly, nonatomic) UIColor *nameColor;
@property (readonly, nonatomic) UIFont *scoreFont;
@property (readonly, nonatomic) UIFont *strongScoreFont;
@property (readonly, nonatomic) UIColor *scoreColor;
@property (readonly, nonatomic) UIColor *strongScoreColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *winnerAttributionColor;

/* class methods */
+ (id)darkTheme;

/* instance methods */

@end

#endif /* T1ScoreParticipantInfoViewTheme_h */
