//
#ifndef TFSDatabaseConnection_h
#define TFSDatabaseConnection_h
@import Foundation;

#include "TFSDatabaseLog-Protocol.h"

@class NSMutableDictionary, NSObject;

@interface TFSDatabaseConnection : NSObject

@property (readonly, nonatomic) struct sqlite3 * sqliteConnection;
@property (readonly, nonatomic) NSMutableDictionary *sqlToPreparedStatements;
@property (retain, nonatomic) id <TFSDatabaseLog> log;
@property (nonatomic) _Bool supportsIncrementalVacuum;
@property (nonatomic) _Bool usesPreparedStatementCache;
@property (readonly, nonatomic) long long mostRecentChangedRowCount;
@property (readonly, nonatomic) long long totalChangedRowCount;
@property (readonly, nonatomic) long long pageCount;
@property (readonly, nonatomic) long long freePageCount;

/* class methods */
+ (id)newConnection;

/* instance methods */
- (void)withLog:(id)log perform:(id /* block */)perform;
- (_Bool)openPath:(id)path withDiskSyncMode:(long long)mode;
- (_Bool)openPath:(id)path withDiskSyncMode:(long long)mode journalSizeLimit:(id)limit;
- (_Bool)openInMemory;
- (_Bool)executeSQL:(id)sql;
- (_Bool)executeSQL:(id)sql withParameters:(id)parameters;
- (_Bool)executeSQL:(id)sql withParameters:(id)parameters enumerateRowsWithBlock:(id /* block */)block;
- (id)stringFromExecutingSQL:(id)sql;
- (id)stringFromExecutingSQL:(id)sql withParameters:(id)parameters;
- (id)numberFromExecutingSQL:(id)sql;
- (id)numberFromExecutingSQL:(id)sql withParameters:(id)parameters;
- (_Bool)isOK:(int)ok;
- (_Bool)isDone:(int)done;
- (_Bool)isAutocommitEnabled;
- (void)close;
- (void)dealloc;

@end

#endif /* TFSDatabaseConnection_h */
