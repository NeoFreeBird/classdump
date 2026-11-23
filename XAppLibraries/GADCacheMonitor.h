//
#ifndef GADCacheMonitor_h
#define GADCacheMonitor_h
@import Foundation;

#include "GADJSContext.h"
#include "GADObserverCollection.h"

@class NSMutableDictionary, NSObject;

@interface GADCacheMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADJSContext *_reporter;
    NSMutableDictionary *_cacheIDResourceBuffers;
    NSMutableDictionary *_cacheIDResourceBufferObservers;
}

/* instance methods */
- (id)initWithMessageSource:(id)source reporter:(id)reporter;
- (void)handleCachedResourceStatusCheckAction:(id)action;
- (void)handleCacheResourceAction:(id)action;
- (void)handleCleanupCacheDirectoryAction;
- (void)handleRemoveResourceAction:(id)action;
- (void)observeResourceBuffer:(id)buffer cacheID:(id)id requestID:(id)id;
- (void)handleResourceBuffer:(id)buffer notification:(id)notification cacheID:(id)id requestID:(id)id;
- (void)notifyCacheID:(id)id responseHeaders:(id)headers fileURL:(id)url status:(id)status requestID:(id)id error:(id)error;

@end

#endif /* GADCacheMonitor_h */
