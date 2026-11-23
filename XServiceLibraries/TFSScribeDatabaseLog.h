//
#ifndef TFSScribeDatabaseLog_h
#define TFSScribeDatabaseLog_h
@import Foundation;

#include "TFSDatabaseLog-Protocol.h"

@class NSMutableArray, NSObject;

@interface TFSScribeDatabaseLog : NSObject <TFSDatabaseLog>

@property (retain, nonatomic) NSMutableArray *errors;
@property (copy, nonatomic) id /* block */ errorBlock;
@property (copy, nonatomic) id /* block */ debugBlock;
@property (nonatomic) _Bool debugEnabled;

/* instance methods */
- (id)initWithDebugBlock:(id /* block */)block errorBlock:(id /* block */)block;
- (void)logError:(id)error;
- (void)logDebug:(id)debug;

@end

#endif /* TFSScribeDatabaseLog_h */
