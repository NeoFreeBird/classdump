//
#ifndef TFSScribeOpenOperation_h
#define TFSScribeOpenOperation_h
@import Foundation;

#include "TFSScribeOperation.h"

@interface TFSScribeOpenOperation : TFSScribeOperation

@property (readonly, copy, nonatomic) id /* block */ willOpen;
@property (readonly, copy, nonatomic) id /* block */ didOpen;

/* instance methods */
- (id)initWithApplicationLink:(id)link databaseProvider:(id)provider willOpenBlock:(id /* block */)block didOpenBlock:(id /* block */)block;
- (void)main;

@end

#endif /* TFSScribeOpenOperation_h */
