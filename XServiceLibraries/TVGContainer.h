//
#ifndef TVGContainer_h
#define TVGContainer_h
@import Foundation;

#include "TFSCacheRegistrant-Protocol.h"

@class NSArray, NSMutableDictionary, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface TVGContainer : NSObject <TFSCacheRegistrant> {
    /* instance variables */
    NSMutableDictionary *_documentCache;
    NSObject<OS_dispatch_queue> *_documentCacheQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSArray *documentNames;
@property unsigned long long documentCacheAutoPurgeOptions;
@property (readonly) unsigned long long documentCacheCount;

/* class methods */
+ (id)containerRegisteredWithCacheRegistryWithURL:(id)url error:(id *)error;
+ (void)load;
+ (id)containerWithURL:(id)url error:(id *)error;
+ (unsigned long long)containerCacheCount;
+ (void)purgeContainerCache;

/* instance methods */
- (void)collectMetrics:(id /* block */)metrics;
- (void)purgeWithReason:(unsigned long long)reason completion:(id /* block */)completion;
- (id)initWithURL:(id)url error:(id *)error;
- (void)dealloc;
- (id)documentNamed:(id)named;
- (void)purgeDocumentCache;
- (void)_updateNotificationObserversWithCurrentAutoPurgeOptions:(unsigned long long)options oldAutoPurgeOptions:(unsigned long long)options;

@end

#endif /* TVGContainer_h */
