//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMSqliteStore_h
#define APMSqliteStore_h
@import Foundation;

@class NSMutableDictionary, NSObject, NSString;

@interface APMSqliteStore : NSObject {
    /* instance variables */
    NSMutableDictionary *_statementCache;
    const char * _queueLabel;
}

@property (readonly, nonatomic) struct sqlite3 * sqliteHandle;
@property (readonly, nonatomic) NSString *databasePath;

/* instance methods */
- (id)initWithDatabasePath:(id)path error:(id *)error;
- (void)dealloc;
- (_Bool)closeAndDeleteDatabase;
- (_Bool)ensureTableWithName:(id)name elementaryColumnInfo:(id)info addOnColumnInfo:(id)info error:(id *)error;
- (_Bool)ensureSchemaOfTableWithName:(id)name elementaryColumnInfo:(id)info addOnColumnInfo:(id)info error:(id *)error;
- (_Bool)ensureTableWithName:(id)name elementaryColumnInfo:(id)info addOnColumnInfo:(id)info modifyColumnInfo:(id)info error:(id *)error;
- (_Bool)ensureTableWithName:(id)name createSQL:(id)sql requiredColumnNames:(id)names addOnColumns:(id)columns error:(id *)error;
- (_Bool)dropTableWithName:(id)name error:(id *)error;
- (_Bool)renameTable:(id)table toName:(id)name error:(id *)error;
- (_Bool)copyContentsFromTable:(id)table toTable:(id)table error:(id *)error;
- (_Bool)createEmptyTable:(id)table fromTable:(id)table error:(id *)error;
- (id)validateTableWithName:(id)name requiredColumnNames:(id)names addOnColumns:(id)columns error:(id *)error;
- (id)tableExists:(id)exists error:(id *)error;
- (id)rowCountForTableWithName:(id)name error:(id *)error;
- (id)rowCountForTableWithName:(id)name columnName:(id)name columnValue:(id)value error:(id *)error;
- (id)columnsForTableWithName:(id)name error:(id *)error;
- (id)columnInfoForTableWithName:(id)name error:(id *)error;
- (_Bool)upsertRecord:(id)record inTableWithName:(id)name error:(id *)error;
- (_Bool)updateRecord:(id)record inTableWithName:(id)name columnName:(id)name columnValue:(id)value error:(id *)error;
- (_Bool)updateAllRecordsInTableWithName:(id)name columnName:(id)name columnValue:(id)value error:(id *)error;
- (_Bool)increaseColumn:(id)column byValue:(long long)value inTable:(id)table condition:(id)condition parameterValues:(id)values error:(id *)error;
- (_Bool)deleteRecordFromTableWithName:(id)name columnName:(id)name columnValue:(id)value error:(id *)error;
- (id)deleteRecordsFromTableWithName:(id)name condition:(id)condition parameterValues:(id)values error:(id *)error;
- (_Bool)deleteAllRecordsFromTableWithName:(id)name error:(id *)error;
- (id)recordsForQuery:(id)query parameterValues:(id)values error:(id *)error;
- (id)recordsForQuery:(id)query parameterValues:(id)values error:(id *)error withFilter:(id /* block */)filter;
- (id)numberForQuery:(id)query parameterValues:(id)values error:(id *)error;
- (_Bool)performTransactionWithError:(id *)error block:(id /* block */)block;
- (_Bool)beginTransaction;
- (_Bool)endTransaction;
- (_Bool)rollbackTransaction;
- (struct sqlite3_stmt *)statementForQuery:(id)query error:(id *)error;
- (struct sqlite3_stmt *)statementForQuery:(id)query parameterValues:(id)values error:(id *)error;
- (void)cleanUpStatement:(struct sqlite3_stmt *)statement forQuery:(id)query;
- (struct sqlite3_stmt *)prepareSQL:(id)sql error:(id *)error;
- (_Bool)executeSQL:(id)sql error:(id *)error;
- (_Bool)executeSQLStatement:(struct sqlite3_stmt *)sqlstatement error:(id *)error;
- (_Bool)openAndValidateDatabase:(id *)database;
- (_Bool)validateDatabaseWithError:(id *)error;
- (void)closeDatabase;
- (void)finalizeAndClearStatements;
- (id)valueAtColumn:(int)column forStatement:(struct sqlite3_stmt *)statement;
- (struct sqlite3_stmt *)upsertStatementForRecord:(id)record inTableWithName:(id)name error:(id *)error;
- (struct sqlite3_stmt *)updateStatementForRecord:(id)record inTableWithName:(id)name columnName:(id)name columnValue:(id)value error:(id *)error;
- (_Bool)bindValues:(id)values toStatement:(struct sqlite3_stmt *)statement error:(id *)error;
- (id)lastErrorMessage;
- (id)errorDescriptionForDatabaseOperation:(id)operation;
- (id)monitorContextForDatabaseOperation:(id)operation;
- (void)setDatabaseError:(id *)error operation:(id)operation;

@end

#endif /* APMSqliteStore_h */
