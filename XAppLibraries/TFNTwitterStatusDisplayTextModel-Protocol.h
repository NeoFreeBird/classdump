//
#ifndef TFNTwitterStatusDisplayTextModel_Protocol_h
#define TFNTwitterStatusDisplayTextModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterStatusDisplayTextModel <NSObject>

@required

/* required instance methods */
- (id)accessibilityTextForOptions:(unsigned long long)options;
- (id)accessibilityTextForOptions:(unsigned long long)options;
- (id)displayTextForOptions:(unsigned long long)options;
- (id)displayTextForOptions:(unsigned long long)options;
- (id)displayTextRangesForOptions:(unsigned long long)options;
- (id)displayTextRangesForOptions:(unsigned long long)options;
- (id)displayTextURLRangesForOptions:(unsigned long long)options;
- (id)displayTextURLRangesForOptions:(unsigned long long)options;
- (id)displayTextHashflagsForOptions:(unsigned long long)options;
- (id)displayTextHashflagsForOptions:(unsigned long long)options;
- (id)displayTextContentMatchedAnimatedHashflagsForOptions:(unsigned long long)options;
- (id)displayTextContentMatchedAnimatedHashflagsForOptions:(unsigned long long)options;
- (_Bool)displayTextMayHaveUndetectedHashflagsForOptions:(unsigned long long)options;
- (_Bool)displayTextMayHaveUndetectedHashflagsForOptions:(unsigned long long)options;
- (long long)attributedTextModelHeightForOptions:(id)options;
- (long long)attributedTextModelHeightForOptions:(id)options;
- (id)attributedTextModelForOptions:(id)options;
- (id)attributedTextModelForOptions:(id)options;

@optional

@end

#endif /* TFNTwitterStatusDisplayTextModel_Protocol_h */
