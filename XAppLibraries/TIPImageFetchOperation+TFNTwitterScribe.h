//
#ifndef TIPImageFetchOperation_TFNTwitterScribe_h
#define TIPImageFetchOperation_TFNTwitterScribe_h
@import Foundation;

#include "TFNTwitterScribeConfiguration.h"
#include "TFNTwitterScribeImpressionLogger.h"
#include "TFNTwitterScribeOptions.h"
#include "TFNTwitterScribePromotedEngagementDelegate-Protocol.h"
#include "TFNTwitterScribeWriter-Protocol.h"
#include "TFSCacheRegistrant-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class NSObject, NSString, TFSScribe;
@protocol TFNTwitterScribeGlobalParameterProvider;

@interface TIPImageFetchOperation (TFNTwitterScribe)

/* instance methods */
- (id)tfn_scribe;
- (void)setTfn_scribe:(id)tfn_scribe;

@end

#endif /* TIPImageFetchOperation_TFNTwitterScribe_h */
