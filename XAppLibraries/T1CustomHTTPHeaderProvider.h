//
#ifndef T1CustomHTTPHeaderProvider_h
#define T1CustomHTTPHeaderProvider_h
@import Foundation;

#include "TNLHTTPHeaderProvider-Protocol.h"
#include "XApiGlobalHeaderFieldsProvider-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, T1CustomUserAgentProvider;

@interface T1CustomHTTPHeaderProvider : NSObject <XApiGlobalHeaderFieldsProvider, TNLHTTPHeaderProvider> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _started;
    NSMutableDictionary *_oneTimeHostHeaders;
    NSMutableDictionary *_hostHeaders;
    NSMutableDictionary *_excludes;
}

@property (retain) id <T1CustomUserAgentProvider> userAgentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)start;
- (void)stop;
- (void)setValue:(id)value forHTTPHeaderField:(id)field host:(id)host excludingPaths:(id)paths;
- (void)setSingleUseValue:(id)value forHTTPHeaderField:(id)field host:(id)host;
- (void)removeHTTPHeaderField:(id)field host:(id)host;
- (id)valueForHTTPHeaderField:(id)field host:(id)host;
- (void)setAllHTTPHeaderFieldValues:(id)values host:(id)host exlusionPaths:(id)paths;
- (void)clearAllSingleUseHTTPHeaderFieldValuesForHost:(id)host;
- (void)removeAllHTTPHeaderFieldValuesForHost:(id)host;
- (id)allHTTPHeaderFieldValuesForHost:(id)host;
- (id)allHTTPHeaderFieldValues;
- (id)allCoalescedHTTPHeaderViewValuesForPath:(id)path host:(id)host;
- (void)_t1_mutateDictionary:(id)dictionary forInnerKey:(id)key outerKey:(id)key value:(id)value removeOnNil:(_Bool)nil;
- (id)tnl_allDefaultHTTPHeaderFieldsForRequest:(id)request URLRequest:(id)urlrequest;
- (id)headerFieldsForURL:(id)url;

@end

#endif /* T1CustomHTTPHeaderProvider_h */
