//
#ifndef TFNTwitterStatusDisplayTextCacheEntry_h
#define TFNTwitterStatusDisplayTextCacheEntry_h
@import Foundation;

#include "TFNTwitterStatusDisplayAttributedTextModelFontOptions.h"

@class NSArray, NSObject, NSString, TFNAttributedTextModel;

@interface TFNTwitterStatusDisplayTextCacheEntry : NSObject {
    /* instance variables */
    NSArray *_conjunctionRanges;
    NSArray *_urlRanges;
    _Bool _hasLineBreakCount;
    _Bool _hasComposedCharacterCount;
}

@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned long long lineBreakCount;
@property (readonly, nonatomic) unsigned long long composedCharacterCount;
@property (copy, nonatomic) NSArray *ranges;
@property (copy, nonatomic) NSArray *hitHighlightRanges;
@property (copy, nonatomic) NSArray *richTextRanges;
@property (copy, nonatomic) NSArray *noteTweetInlineMediaRanges;
@property (copy, nonatomic) NSArray *hashflags;
@property (copy, nonatomic) NSArray *contentMatchedAnimatedHashflags;
@property (nonatomic) _Bool mayHaveUndetectedHashflags;
@property (nonatomic) long long hashflagVersion;
@property (retain, nonatomic) TFNAttributedTextModel *textModel;
@property (copy, nonatomic) NSString *textModelColorStateIdentifier;
@property (nonatomic) double fontSize;
@property (nonatomic) _Bool darkBackground;
@property (nonatomic) double textHeight;
@property (nonatomic) long long seed;
@property (retain, nonatomic) NSString *seedFontName;
@property (nonatomic) double seedLineHeight;
@property (nonatomic) double seedLineSpacing;
@property (nonatomic) double seedEmptyLineMaxHeight;
@property (nonatomic) double seedKerning;
@property (retain, nonatomic) TFNTwitterStatusDisplayAttributedTextModelFontOptions *seedFontOptions;
@property (nonatomic) _Bool textTruncated;

/* instance methods */
- (_Bool)isValid;
- (_Bool)isHashflagVersionValid;
- (_Bool)isTextModelColorStateIdentifierValid;
- (id)conjunctionRanges;
- (id)urlRanges;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (_Bool)isTextTruncated;

@end

#endif /* TFNTwitterStatusDisplayTextCacheEntry_h */
