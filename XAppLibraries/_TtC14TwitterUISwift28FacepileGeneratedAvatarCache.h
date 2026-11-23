//
#ifndef _TtC14TwitterUISwift28FacepileGeneratedAvatarCache_h
#define _TtC14TwitterUISwift28FacepileGeneratedAvatarCache_h
@import Foundation;

#include "TIPImageAdditionalCache-Protocol.h"

@class NSObject, _$sSo16TIPImagePipelineC;

@interface TwitterUISwift.FacepileGeneratedAvatarCache : NSObject <TIPImageAdditionalCache> { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline imagePipeline;
}

/* instance methods */
- (void)tip_retrieveImageForURL:(id)url completion:(id /* block */)completion;
- (id)init;

@end

#endif /* _TtC14TwitterUISwift28FacepileGeneratedAvatarCache_h */
