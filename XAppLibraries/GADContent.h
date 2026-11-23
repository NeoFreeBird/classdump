//
#ifndef GADContent_h
#define GADContent_h
@import Foundation;

#include "GADBinaryHeap.h"

@class NSObject, NSString;

@interface GADContent : NSObject {
    /* instance variables */
    long long _contentAgeWeight;
    long long _contentLengthWeight;
    long long _contentTotalLength;
    GADBinaryHeap *_heap;
    long long _maximumShingleCount;
    unsigned long long _minimumParagraphLength;
    unsigned long long _shingleLength;
}

@property (readonly, nonatomic) NSString *fingerprint;
@property (readonly, nonatomic) long long score;
@property (readonly, nonatomic) long long sequenceNumber;

/* instance methods */
- (id)initWithSequenceNumber:(long long)number;
- (void)deductServedPenalty;
- (void)updateContentWithText:(id)text;
- (void)selectShinglesFromTokens:(id)tokens;
- (void)applyRollingHashToTokens:(id)tokens baseHash:(unsigned int)hash;
- (void)updateHeapWithHash:(unsigned int)hash shingle:(id)shingle;
- (id)shingleHash;

@end

#endif /* GADContent_h */
