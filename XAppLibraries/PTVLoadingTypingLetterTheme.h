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
