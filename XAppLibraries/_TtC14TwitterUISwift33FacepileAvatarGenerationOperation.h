//
#ifndef _TtC14TwitterUISwift33FacepileAvatarGenerationOperation_h
#define _TtC14TwitterUISwift33FacepileAvatarGenerationOperation_h
@import Foundation;

@class NSOperation, _$sSaySo22TIPImageFetchOperationCG, _$sSo11NSOperationC, _$sSo16TIPImagePipelineC;

@interface TwitterUISwift.FacepileAvatarGenerationOperation : NSOperation { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline avatarImagePipeline;
    __C.NSOperation renderOperation;
    [__C.TIPImageFetchOperation] fetchAvatarOperations;
}

/* instance methods */
- (void)main;
- (id)init;

@end

#endif /* _TtC14TwitterUISwift33FacepileAvatarGenerationOperation_h */
