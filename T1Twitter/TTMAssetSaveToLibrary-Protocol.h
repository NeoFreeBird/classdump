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
