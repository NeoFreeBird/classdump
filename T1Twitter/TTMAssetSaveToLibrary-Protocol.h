//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetSaveToLibrary_Protocol_h
#define TTMAssetSaveToLibrary_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetSaveToLibrary <NSObject>

@required

@property (nonatomic) _Bool assetSavedToLibrary;

/* required instance methods */
- (void)saveAssetToLibraryWithOptions:(id)options completion:(id /* block */)completion;

@optional

@end

#endif /* TTMAssetSaveToLibrary_Protocol_h */
