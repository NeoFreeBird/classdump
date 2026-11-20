//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TweetComposeTextEditorViewAttachmentPasteObserverDelegate_Protocol_h
#define T1TweetComposeTextEditorViewAttachmentPasteObserverDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TweetComposeTextEditorViewAttachmentPasteObserverDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)tweetComposeTextEditorViewAttachmentPasteObserverCanAddAttachment:(id)attachment;

@optional

/* optional instance methods */
- (void)tweetComposeTextEditorViewAttachmentPasteObserver:(id)observer addAttachment:(id)attachment;

@end

#endif /* T1TweetComposeTextEditorViewAttachmentPasteObserverDelegate_Protocol_h */
