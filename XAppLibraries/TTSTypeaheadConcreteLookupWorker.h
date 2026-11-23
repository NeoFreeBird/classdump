//
#ifndef TTSTypeaheadConcreteLookupWorker_h
#define TTSTypeaheadConcreteLookupWorker_h
@import Foundation;

#include "TFSTwitterTypeaheadServiceLookupWorker-Protocol.h"

@class NSObject;

@interface TTSTypeaheadConcreteLookupWorker : NSObject <TFSTwitterTypeaheadServiceLookupWorker> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 accountID;
    @40@0:8:16@24@32 modelContext;
    @40@0:8:16@24@32 commandContext;
    @40@0:8:16@24@32 commandLoader;
    @40@0:8:16@24@32 actionService;
}

/* instance methods */
- (id)initWithAccountID:(id)id modelContext:(id)context commandContext:(id)context commandLoader:(id)loader actionService:(id)service;
- (void)startWithRequest:(id)request source:(unsigned long long)source completion:(id /* block */)completion;
- (id)init;

@end

#endif /* TTSTypeaheadConcreteLookupWorker_h */
