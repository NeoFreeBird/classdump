//
#ifndef NSMutableString_TFNTwitterDisplayTextModel_h
#define NSMutableString_TFNTwitterDisplayTextModel_h
@import Foundation;

#include "TFNTwitterDisplayTextModelConfiguration.h"
#include "TFNTwitterStatusDisplayTextCacheEntry.h"
#include "TFNTwitterStatusDisplayTextModel-Protocol.h"

@class NSObject, NSString, TFSObjectCache;

@interface NSMutableString (TFNTwitterDisplayTextModel)

/* instance methods */
- (id)tfn_stripUnicodeDirectionControlCharactersAdjustingTextRanges:(id)ranges;
- (id)tfn_limitCombiningMarksPerCharacterTo:(unsigned long long)to adjustingTextRanges:(id)ranges;
- (id)tfn_trimAndCompressWhitespaceAdjustingTextRanges:(id)ranges;
- (id)tfn_unescapeHTMLEntitiesAdjustingTextRanges:(id)ranges;

@end

#endif /* NSMutableString_TFNTwitterDisplayTextModel_h */
