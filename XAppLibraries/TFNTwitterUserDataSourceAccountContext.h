//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterUserDataSourceAccountContext_h
#define TFNTwitterUserDataSourceAccountContext_h
@import Foundation;

#include "TFNTwitterUserDataSource.h"

@class NSMapTable, NSObject;

@interface TFNTwitterUserDataSourceAccountContext : NSObject

@property (retain, nonatomic) TFNTwitterUserDataSource *accountUserDataSource;
@property (readonly, nonatomic) NSMapTable *dataSourcesByUserID;
@property (readonly, nonatomic) NSMapTable *dataSourcesByUsername;

/* instance methods */
- (id)init;
- (void)addDataSource:(id)source;
- (id)dataSourceForUserReference:(id)reference;
- (void)refreshUserDataSource:(id)source force:(_Bool)force userProfileFeatures:(id)features withCommandLoader:(id)loader commandContext:(id)context account:(id)account verifyCredentialsCommandQueue:(id)queue completion:(id /* block */)completion;

@end

#endif /* TFNTwitterUserDataSourceAccountContext_h */
