//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterDisplayTextModel_h
#define TFNTwitterDisplayTextModel_h
@import Foundation;

#include "TFNTwitterDisplayTextModelConfiguration.h"
#include "TFNTwitterStatusDisplayTextCacheEntry.h"
#include "TFNTwitterStatusDisplayTextModel-Protocol.h"

@class NSObject, NSString, TFSObjectCache;

@interface TFNTwitterDisplayTextModel : NSObject <TFNTwitterStatusDisplayTextModel>

@property (retain, nonatomic) TFNTwitterStatusDisplayTextCacheEntry *defaultDisplayTextCacheEntry;
@property (retain, nonatomic) TFSObjectCache *displayTextCache;
@property (nonatomic) unsigned long long bidiAdjustedDisplayTextOffset;
@property (readonly, nonatomic) TFNTwitterDisplayTextModelConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)setKeepsFontOptionsInCacheEntries:(_Bool)entries;
+ (void)_tfn_addEmptyLineMaxHeight:(double)height toAttributedString:(id)string;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_tfn_wrappedRangeOfDirectionMarksWithText:(id)text range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)accessibilityTextForOptions:(unsigned long long)options;
- (id)displayTextForOptions:(unsigned long long)options;
- (id)displayTextRangesForOptions:(unsigned long long)options;
- (id)displayTextURLRangesForOptions:(unsigned long long)options;
- (id)displayTextHashflagsForOptions:(unsigned long long)options;
- (id)displayTextContentMatchedAnimatedHashflagsForOptions:(unsigned long long)options;
- (_Bool)displayTextMayHaveUndetectedHashflagsForOptions:(unsigned long long)options;
- (long long)customMaxLinesForOptions:(id)options;
- (unsigned long long)_tfn_effectiveMaxLinesForOptions:(id)options;
- (long long)attributedTextModelHeightForOptions:(id)options;
- (id)attributedTextModelForOptions:(id)options;
- (id)_text;
- (id)_fromUserName;
- (id)_inReplyToUserName;
- (id)_entities;
- (unsigned long long)_displayTextOffset;
- (id)_hitHighlights;
- (id)_richTextTags;
- (id)_textRangeSet;
- (id)_primaryMediaInfo;
- (id)_geotag;
- (id)_tfn_displayTextCacheEntryForOptions:(unsigned long long)options prepopulateDisplayTextCacheIfDoesNotExist:(_Bool)exist;
- (void)_tfn_prepopulateCacheWithDefaultDisplayTextCacheEntry;
- (void)_tfn_prepopulateCacheWithQuotedDisplayTextCacheEntryForOptions:(unsigned long long)options;
- (void)_tfn_prepopulateCacheWithQuotedStatusPermalinkDisplayTextCacheEntryForOptions:(unsigned long long)options;
- (void)_tfn_prepopulateCacheWithShortenedDisplayTextCacheEntryForOptions:(unsigned long long)options;
- (id)_tfn_displayTextCacheEntryByRemovingURLEntityRangesFromEntry:(id)entry passingTest:(id /* block */)test;
- (void)_tfn_prepopulateCacheWithNoLinksDisplayTextCacheEntryForOptions:(unsigned long long)options;
- (void)_tfn_prepopulateCacheWithStrippedLeadingMentionsDisplayTextCacheEntryForOptions:(unsigned long long)options;
- (void)_tfn_prepopulateCacheWithHashflagsDisplayTextCacheEntryForOptions:(unsigned long long)options;
- (void)_tfn_prepopulateCacheWithInlineMediaDisplayTextCacheEntryForOptions:(unsigned long long)options;
- (void)_tfn_prepopulateCacheDisplayTextCacheEntryWithLastOption:(unsigned long long)option options:(unsigned long long)options;
- (void)_tfn_prepopulateCacheWithDisplayTextCacheEntryWithPOITagsForOptions:(unsigned long long)options;
- (id)_tfn_attributedStringForOptions:(id)options;
- (id)_tfn_attributedSuffixString:(id)string fontOptions:(id)options isLink:(_Bool)link;
- (id)_tfn_cachedDisplayTextCacheEntryForOptions:(unsigned long long)options;
- (void)_tfn_cacheDisplayTextCacheEntry:(id)entry forOptions:(unsigned long long)options;
- (void)_tfn_updateDisplayTextCacheEntry:(id)entry displayText:(id)text displayTextRanges:(id)ranges quotedStatusPermalinkEntity:(id)entity;
- (void)_tfn_updateDisplayTextCacheEntry:(id)entry displayText:(id)text displayTextRanges:(id)ranges trailingURLEntity:(id)urlentity;
- (_Bool)_tfn_shouldBeRenderedFromRight;
- (id)text;
- (id)displayText;
- (_Bool)isReply;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })displayTextRange;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFNTwitterDisplayTextModel_h */
