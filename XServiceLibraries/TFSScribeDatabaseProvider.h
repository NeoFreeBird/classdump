//
#ifndef TFSScribeDatabaseProvider_h
#define TFSScribeDatabaseProvider_h
@import Foundation;

#include "TFSDatabase.h"
#include "TFSDatabaseLog-Protocol.h"
#include "TFSDatabaseUIApplicationLink.h"
#include "TFSLogger-Protocol.h"

@class NSObject, NSString;

@interface TFSScribeDatabaseProvider : NSObject <TFSDatabaseLog>

@property (readonly, copy, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) TFSDatabaseUIApplicationLink *applicationLink;
@property (readonly, copy, nonatomic) id /* block */ errorLogger;
@property (readonly, nonatomic) id <TFSLogger> debugLogger;
@property (retain, nonatomic) TFSDatabase *database;
@property _Bool debugEnabled;

/* class methods */
+ (id)schemaCreationSQL;

/* instance methods */
- (id)initWithStoreURL:(id)url applicationLink:(id)link errorLogger:(id /* block */)logger debugLogger:(id)logger;
- (_Bool)_tfsscribe_addSchema;
- (_Bool)performTransaction:(id /* block */)transaction;
- (void)closeDatabase;
- (void)logError:(id)error;
- (void)logDebug:(id)debug;

@end

#endif /* TFSScribeDatabaseProvider_h */
