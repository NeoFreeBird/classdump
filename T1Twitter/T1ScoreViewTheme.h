//
#ifndef T1ScoreViewTheme_h
#define T1ScoreViewTheme_h
@import Foundation;

#include "T1ScoreParticipantInfoViewTheme.h"

@class NSObject, UIColor, UIFont;

@interface T1ScoreViewTheme : NSObject

@property (readonly, nonatomic) T1ScoreParticipantInfoViewTheme *participantViewTheme;
@property (readonly, nonatomic) UIColor *separatorColor;
@property (readonly, nonatomic) UIFont *notesFont;
@property (readonly, nonatomic) UIColor *notesColor;
@property (readonly, nonatomic) UIColor *backgroundColor;

/* class methods */
+ (id)darkTheme;

/* instance methods */

@end

#endif /* T1ScoreViewTheme_h */
