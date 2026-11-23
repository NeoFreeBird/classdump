//
#ifndef TFNTwitterStatusTags_h
#define TFNTwitterStatusTags_h
@import Foundation;

#include "TFNTwitterStatusTagsPlaceholder.h"

@class NSArray, NSObject, NSString;

@interface TFNTwitterStatusTags : NSObject

@property (retain, nonatomic) TFNTwitterStatusTagsPlaceholder *placeholder;
@property (readonly, nonatomic) NSString *displayText;
@property (readonly, nonatomic) NSArray *displayTextRanges;

/* instance methods */
- (id)initWithPlaceholder:(id)placeholder;
- (void)_assimilate;
- (void)_assimilateSubstitutions:(id)substitutions withPattern:(id)pattern;
- (id)_assimilateTextAfterLasterPlaceholderForPattern:(id)pattern conjunctionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;

@end

#endif /* TFNTwitterStatusTags_h */
