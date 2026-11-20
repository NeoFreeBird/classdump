//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8TAVCache22TAVCacheResourceLoader_h
#define _TtC8TAVCache22TAVCacheResourceLoader_h
@import Foundation;

#include "AVAssetResourceLoaderDelegate-Protocol.h"

@class NSObject, _$s10Foundation3URLVMn;

@interface TAVCache.TAVCacheResourceLoader : NSObject <AVAssetResourceLoaderDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL originalURL;
}

/* instance methods */
- (_Bool)resourceLoader:(id)loader shouldWaitForLoadingOfRequestedResource:(id)resource;
- (id)init;

@end

#endif /* _TtC8TAVCache22TAVCacheResourceLoader_h */
