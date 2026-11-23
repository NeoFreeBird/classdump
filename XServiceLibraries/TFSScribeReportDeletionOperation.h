//
#ifndef TFSScribeReportDeletionOperation_h
#define TFSScribeReportDeletionOperation_h
@import Foundation;

#include "TFSScribeOperation.h"

@class NSArray;

@interface TFSScribeReportDeletionOperation : TFSScribeOperation

@property (readonly, copy, nonatomic) NSArray *groups;
@property (copy, nonatomic) id /* block */ completion;

/* instance methods */
- (id)initWithApplicationLink:(id)link databaseProvider:(id)provider groups:(id)groups completion:(id /* block */)completion;
- (void)main;

@end

#endif /* TFSScribeReportDeletionOperation_h */
