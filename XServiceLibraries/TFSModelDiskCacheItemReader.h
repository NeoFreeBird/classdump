//
#ifndef TFSModelDiskCacheItemReader_h
#define TFSModelDiskCacheItemReader_h
@import Foundation;

#include "TFSDatabaseConnection.h"

@class NSObject;

@interface TFSModelDiskCacheItemReader : NSObject

@property (nonatomic) _Bool hasError;
@property (readonly, nonatomic) TFSDatabaseConnection *connection;

/* instance methods */
- (id)initWithConnection:(id)connection;
- (id)resultSetForKey:(id)key hasError:(_Bool *)error;
- (id)ownedKeysForItemId:(long long)id;

@end

#endif /* TFSModelDiskCacheItemReader_h */
