//
#ifndef TUCEventLogger_h
#define TUCEventLogger_h
@import Foundation;

#include "TAFEventLogger-Protocol.h"

@class NSObject;

@interface TUCEventLogger : NSObject <TAFEventLogger> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 eventLogger;
    @40@0:8:16@24@32 deviceInfoProvider;
}

/* instance methods */
- (void)logClientEventForAction:(id)action page:(id)page section:(id)section component:(id)component element:(id)element parameters:(id)parameters;
- (void)logPromotedEventWithParameters:(id)parameters promotedContent:(id)content scribeContext:(id)context;
- (void)logRawPromotedEventWithEvent:(long long)event withParameters:(id)parameters promotedContent:(id)content scribeContext:(id)context;
- (id)initWithEventLogger:(id)logger deviceInfoProvider:(Class)provider;
- (void)logPromotedEvent:(id)event promotedContent:(id)content destinationResult:(id)result scribeContext:(id)context;
- (void)logClientEvent:(id)event scribeContext:(id)context;
- (void)logClientEventForDestinationPresenterResult:(id)result destination:(id)destination scribeContext:(id)context appStoreScribeParametersBuilder:(id)builder unifiedCardsFeatures:(id)features;
- (id)init;

@end

#endif /* TUCEventLogger_h */
