//
#ifndef PTVWorkClientLoader_h
#define PTVWorkClientLoader_h
@import Foundation;

#include "PTVLoader.h"
#include "PTVWorkClient.h"
#include "PTVWorkClientDelegate-Protocol.h"

@class NSString;

@interface PTVWorkClientLoader : PTVLoader <PTVWorkClientDelegate> {
    /* instance variables */
    PTVWorkClient *_workClient;
    long long _cachePolicy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)context;
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;
- (void)performLoad;
- (void)didReceiveCachedData:(id)data;
- (void)didReceiveNetworkData:(id)data;
- (id)initWithCachePolicy:(long long)policy;
- (void)performLoadWithWorkClient:(id)client cachePolicy:(long long)policy;

@end

#endif /* PTVWorkClientLoader_h */
