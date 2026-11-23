//
#ifndef TFSTwitterBirdwatchNote_h
#define TFSTwitterBirdwatchNote_h
@import Foundation;

#include "TFSTwitterGrokTranslation.h"

@class NSObject, NSString;

@interface TFSTwitterBirdwatchNote : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 ratingStatus;
}

@property (nonatomic, readonly) NSString *noteID;
@property (nonatomic, readonly) _Bool isInAccountLanguage;
@property (nonatomic, readonly) TFSTwitterGrokTranslation *grokTranslatedCommunityNote;
@property (nonatomic, readonly) _Bool isTranslatable;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) _Bool isCurrentlyRatedHelpful;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWith:(id)with;
- (id)init;

@end

#endif /* TFSTwitterBirdwatchNote_h */
