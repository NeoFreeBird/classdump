//
#ifndef _TtC4DMUI28AdditionalImagePipelineCache_h
#define _TtC4DMUI28AdditionalImagePipelineCache_h
@import Foundation;

#include "TIPImageAdditionalCache-Protocol.h"

@class NSObject, _$sSo16NSOperationQueueC;

@interface DMUI.AdditionalImagePipelineCache : NSObject <TIPImageAdditionalCache> { // (Swift)
    /* instance variables */
    __C.NSOperationQueue operationQueue;
}

/* instance methods */
- (id)init;
- (void)tip_retrieveImageForURL:(id)url completion:(id /* block */)completion;

@end

#endif /* _TtC4DMUI28AdditionalImagePipelineCache_h */
