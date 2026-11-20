//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift45T1UnifiedCardPlayableDestinationHandlerHelper_h
#define _TtC14T1TwitterSwift45T1UnifiedCardPlayableDestinationHandlerHelper_h
@import Foundation;

#include "TUCPlayableDestinationHandlerHelper-Protocol.h"

@class NSObject, TFSTwitterEntityMedia, TIPImagePipeline, _$sSo17TFNTwitterAccountC, _$sSo19TUCTweetPerspective_pSg;

@interface T1TwitterSwift.T1UnifiedCardPlayableDestinationHandlerHelper : NSObject <TUCPlayableDestinationHandlerHelper> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TUCTweetPerspective? status;
}

@property (nonatomic, readonly) TIPImagePipeline *imagePipeline;
@property (nonatomic, readonly) TFSTwitterEntityMedia *profileImage;

/* instance methods */
- (id)initWithAccount:(id)account status:(id)status;
- (id)webViewControllerFactoryFor:(id)_for destination:(id)destination playableEventHandler:(id)handler;
- (id)playableEventHandlerFor:(id)_for;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift45T1UnifiedCardPlayableDestinationHandlerHelper_h */
