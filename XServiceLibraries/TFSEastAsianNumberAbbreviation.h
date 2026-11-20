//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSEastAsianNumberAbbreviation_h
#define TFSEastAsianNumberAbbreviation_h
@import Foundation;

#include "TFSNumberAbbreviation-Protocol.h"

@class NSNumberFormatter, NSObject, NSString;

@interface TFSEastAsianNumberAbbreviation : NSObject <TFSNumberAbbreviation>

@property (readonly, nonatomic) unsigned long long maximumLength;
@property (readonly, nonatomic) NSNumberFormatter *formatter;
@property (readonly, nonatomic) NSString *tenThousandsUnitCharacter;
@property (readonly, nonatomic) NSString *hundredsOfMillionsUnitCharacter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eastAsianLanguagesLowercase;

/* instance methods */
- (id)initWithMaximumLength:(unsigned long long)length locale:(id)locale;
- (id)abbreviatedStringForNumber:(id)number;
- (id)_unitForOrder:(unsigned long long)order;
- (id)_t1_shortUnitForTensOfThousands;
- (id)_t1_shortUnitForHundredsOfMillions;

@end

#endif /* TFSEastAsianNumberAbbreviation_h */
