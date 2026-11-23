//
#ifndef GIDAppCheck_h
#define GIDAppCheck_h
@import Foundation;

#include "GACAppCheck.h"

@class NSMutableArray, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface GIDAppCheck : NSObject

@property (retain, nonatomic) GACAppCheck *appCheck;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain) NSMutableArray *prepareCompletions;
@property _Bool preparing;

/* class methods */
+ (id)appCheckUsingDebugProviderWithAPIKey:(id)apikey;
+ (id)appCheckUsingAppAttestProvider;
+ (id)appAttestResourceName;
+ (id)appAttestProvider;
+ (id)debugAppCheckProviderWithAPIKey:(id)apikey;

/* instance methods */
- (id)initWithAppCheckProvider:(id)provider userDefaults:(id)defaults;
- (_Bool)isPrepared;
- (void)prepareForAppCheckWithCompletion:(id /* block */)completion;
- (void)getLimitedUseTokenWithCompletion:(id /* block */)completion;

@end

#endif /* GIDAppCheck_h */
