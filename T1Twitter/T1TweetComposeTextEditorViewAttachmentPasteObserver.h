//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TweetComposeTextEditorViewAttachmentPasteObserver_h
#define T1TweetComposeTextEditorViewAttachmentPasteObserver_h
@import Foundation;

#include "T1TweetComposeTextEditorViewAttachmentPasteObserverDelegate-Protocol.h"
#include "T1TweetComposeTextEditorViewPasteObserver.h"

@interface T1TweetComposeTextEditorViewAttachmentPasteObserver : T1TweetComposeTextEditorViewPasteObserver { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *types;
}

@property (nonatomic, weak) id <T1TweetComposeTextEditorViewAttachmentPasteObserverDelegate> delegate;

/* instance methods */
- (id)initWithAccount:(id)account types:(unsigned long long)types;
- (id)init;

@end

#endif /* T1TweetComposeTextEditorViewAttachmentPasteObserver_h */
