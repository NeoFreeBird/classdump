//
#ifndef GADNetworkLogger_h
#define GADNetworkLogger_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface GADNetworkLogger : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    NSObject<OS_dispatch_queue> *_logQueue;
    long long _maxLineLength;
    NSString *_initialMessage;
    NSString *_logPrefix;
    NSString *_finalMessage;
    _Atomic _Bool _verboseLoggingEnabled;
    NSSet *_excludedHeaders;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (_Bool)verboseLoggingEnabled;
- (void)updateLoggingEnabled;
- (void)observeEvent:(id)event withBlock:(id /* block */)block;
- (void)logMessage:(id)message;
- (void)logEvent:(id)event context:(id)context userInfo:(id)info;

@end

#endif /* GADNetworkLogger_h */
