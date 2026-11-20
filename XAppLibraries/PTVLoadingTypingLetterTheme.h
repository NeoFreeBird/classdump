//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVLoadingTypingLetterTheme_h
#define PTVLoadingTypingLetterTheme_h
@import Foundation;

#include "PTVLoadingHeartTheme.h"

@class NSString;

@interface PTVLoadingTypingLetterTheme : PTVLoadingHeartTheme

@property (retain, nonatomic) NSString *letter;

/* instance methods */
- (id)init;
- (void)load:(long long)load;

@end

#endif /* PTVLoadingTypingLetterTheme_h */
