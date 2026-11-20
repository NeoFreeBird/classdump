//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVVideoBuilder_h
#define TAVVideoBuilder_h
@import Foundation;

#include "TAVAnalyticsVideoAdServerMetadata.h"
#include "TAVDynamicAdProvider-Protocol.h"

@class NSArray, NSMutableArray, NSObject;

@interface TAVVideoBuilder : NSObject

@property (readonly, nonatomic) NSArray *playlistItemProviders;
@property (readonly, nonatomic) id <TAVDynamicAdProvider> adProvider;
@property (retain, nonatomic) TAVAnalyticsVideoAdServerMetadata *adServerMetadata;
@property (retain, nonatomic) NSMutableArray *operations;

/* instance methods */
- (id)description;
- (id)init;
- (id)initWithPlaylistItemProviders:(id)providers adProvider:(id)provider;
- (void)buildWithCompletion:(id /* block */)completion;
- (id)private_operationWithVideoProvider:(id)provider;
- (id)private_operationWithVideoAdProvider:(id)provider;
- (void)private_operationsFinishedWithCompletion:(id /* block */)completion;

@end

#endif /* TAVVideoBuilder_h */
