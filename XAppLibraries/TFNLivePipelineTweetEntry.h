//
#ifndef TFNLivePipelineTweetEntry_h
#define TFNLivePipelineTweetEntry_h
@import Foundation;

#include "TLPSubscription.h"
#include "TLPSubscriptionDelegate-Protocol.h"
#include "TNLLRUEntry-Protocol.h"
#include "TTACoreStatusLiveEngagementManager.h"
#include "TTACoreStatusViewModel-Protocol.h"

@class NSObject, NSString;

@interface TFNLivePipelineTweetEntry : NSObject <TNLLRUEntry, TLPSubscriptionDelegate>

@property (weak, nonatomic) TTACoreStatusLiveEngagementManager *tweetManager;
@property (retain, nonatomic) id <TTACoreStatusViewModel> status;
@property (retain, nonatomic) TLPSubscription *subscription;
@property (retain, nonatomic) id <TNLLRUEntry> nextLRUEntry;
@property (weak, nonatomic) id <TNLLRUEntry> previousLRUEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)identifierForStatus:(id)status;

/* instance methods */
- (id)initWithStatus:(id)status tweetManager:(id)manager;
- (id)LRUEntryIdentifier;
- (_Bool)shouldAccessMoveLRUEntryToHead;
- (void)subscription:(id)subscription didReceiveEvent:(id)event;

@end

#endif /* TFNLivePipelineTweetEntry_h */
