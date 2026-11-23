//
#ifndef TwitterTextParser_h
#define TwitterTextParser_h
@import Foundation;

#include "TwitterTextConfiguration.h"

@class NSObject;

@interface TwitterTextParser : NSObject

@property (readonly, nonatomic) TwitterTextConfiguration *configuration;

/* class methods */
+ (id)_queue;
+ (id)defaultParser;
+ (void)setDefaultParserWithConfiguration:(id)configuration;
+ (void)setDefaultParserWithConfigurationProvider:(id /* block */)provider;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (long long)maxWeightedTweetLength;
- (id)parseTweet:(id)tweet;
- (long long)_tt_lengthOfText:(id)text range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range countingBlock:(id /* block */)block;
- (long long)_tt_lengthOfWeightedChar:(id)_char;

@end

#endif /* TwitterTextParser_h */
