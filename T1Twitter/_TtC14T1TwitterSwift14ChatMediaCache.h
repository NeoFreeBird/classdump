//
#ifndef _TtC14T1TwitterSwift14ChatMediaCache_h
#define _TtC14T1TwitterSwift14ChatMediaCache_h
@import Foundation;

#include "TIPImageAdditionalCache-Protocol.h"

@class NSObject, _$sSo16TIPImagePipelineC;

@interface T1TwitterSwift.ChatMediaCache : NSObject <TIPImageAdditionalCache> { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline imagePipeline;
}

/* instance methods */
- (void)tip_retrieveImageForURL:(id)url completion:(id /* block */)completion;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift14ChatMediaCache_h */
