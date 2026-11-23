//
#ifndef TFSTweetTextCounter_h
#define TFSTweetTextCounter_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSTweetTextCounterContext-Protocol.h"
#include "TwitterTextParseResults.h"

@class NSObject, NSString;

@interface TFSTweetTextCounter : NSObject <NSCopying, TFSTweetTextCounterContext>

@property (retain, nonatomic) NSString *parsedTextForCharacterCount;
@property (retain, nonatomic) NSString *parsedTweetTextForCharacterCount;
@property (retain, nonatomic) TwitterTextParseResults *parseResults;
@property (weak, nonatomic) id <TFSTweetTextCounterContext> context;
@property (readonly, copy, nonatomic) NSString *tweetTextForCharacterCount;
@property (readonly, nonatomic) unsigned long long characterCount;
@property (readonly, nonatomic) long long indexOfFirstOverflowCharacterInTweetTextForCharacterCount;
@property (copy, nonatomic) NSString *textForCharacterCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)maximumCharacterCount;
+ (id)tweetTextForText:(id)text;
+ (double)characterCountWeightScaleFactorForLocalIdentifier:(id)identifier;
+ (long long)defaultRemainingCharacterCountForWarningWithInputLocaleIdentifier:(id)identifier;
+ (long long)defaultRemainingCharacterCountForStrongWarningWithInputLocaleIdentifier:(id)identifier isNoteTweetsEnabled:(_Bool)enabled;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)_tfn_main_parseTextForCharacterCountIfNeeded;
- (long long)remainingCharacterCountWithInputLocaleIdentifier:(id)identifier;

@end

#endif /* TFSTweetTextCounter_h */
