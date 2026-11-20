//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSScribeCloseOperation_h
#define TFSScribeCloseOperation_h
@import Foundation;

#include "TFSScribeOperation.h"

@interface TFSScribeCloseOperation : TFSScribeOperation

@property (readonly, copy, nonatomic) id /* block */ willClose;
@property (readonly, copy, nonatomic) id /* block */ didClose;

/* instance methods */
- (id)initWithApplicationLink:(id)link databaseProvider:(id)provider willCloseBlock:(id /* block */)block didCloseBlock:(id /* block */)block;
- (void)main;

@end

#endif /* TFSScribeCloseOperation_h */
