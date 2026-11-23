//
#ifndef GADSafeBrowsingReport_h
#define GADSafeBrowsingReport_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSObject, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface GADSafeBrowsingReport : NSObject {
    /* instance variables */
    NSMutableArray *_resources;
    NSNumber *_lastPreClickResourceIndex;
    NSMutableDictionary *_resourceIndexForCanonicalURL;
    NSMutableDictionary *_requestIndicesForRedirectToURL;
    NSMutableDictionary *_parentTransactionForTransaction;
    NSMutableDictionary *_childTransactionsForTransaction;
    NSMutableDictionary *_requestIPAddresses;
    NSMutableSet *_autoClickResources;
    NSString *_clickString;
    NSSet *_excludedHeaders;
    NSURL *_landingPageURL;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

@property (readonly) _Bool malicious;
@property (copy) NSURL *mainDocumentURL;

/* instance methods */
- (id)initWithRootTransaction:(id)transaction configuration:(id)configuration;
- (void)addTransaction:(id)transaction;
- (void)addAutoClickAttempt:(id)attempt;
- (void)addClickThrough:(id)through;
- (void)addTransaction:(id)transaction parentIndex:(id)index;
- (void)addPlaceholderTransactionForRequest:(id)request;
- (id)redirectSourceForRequest:(id)request;
- (id)referringResourceForRequest:(id)request;
- (id)parentIndexForRequest:(id)request;
- (id)dictionaryForResourceAtIndex:(unsigned long long)index;
- (void)createDictionaryWithCompletionHandler:(id /* block */)handler;

@end

#endif /* GADSafeBrowsingReport_h */
