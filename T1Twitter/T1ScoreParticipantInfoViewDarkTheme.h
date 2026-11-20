//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ScoreParticipantInfoViewDarkTheme_h
#define T1ScoreParticipantInfoViewDarkTheme_h
@import Foundation;

#include "T1ScoreParticipantInfoViewTheme.h"

@interface T1ScoreParticipantInfoViewDarkTheme : T1ScoreParticipantInfoViewTheme

/* instance methods */
- (id)backgroundColor;
- (id)nameColor;
- (id)scoreColor;
- (id)strongScoreColor;
- (id)winnerAttributionColor;

@end

#endif /* T1ScoreParticipantInfoViewDarkTheme_h */
