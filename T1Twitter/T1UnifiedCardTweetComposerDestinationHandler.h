//
#ifndef T1UnifiedCardTweetComposerDestinationHandler_h
#define T1UnifiedCardTweetComposerDestinationHandler_h
@import Foundation;

#include "TUCDestinationHandler-Protocol.h"
#include "_TtC14T1TwitterSwift32T1UnifiedCardEventHandlerContext.h"

@class NSObject;
@protocol TUCTweetComposerDestinationData;

@interface T1UnifiedCardTweetComposerDestinationHandler : NSObject <TUCDestinationHandler>

@property (retain, nonatomic) id <TUCTweetComposerDestinationData> composerData;
@property (retain, nonatomic) T1TwitterSwift.T1UnifiedCardEventHandlerContext *context;

/* class methods */
+ (id)handlerWithContext:(id)context;

/* instance methods */
- (id)initWithComposerData:(id)data context:(id)context;
- (void)handleClickWithCompletion:(id /* block */)completion;
- (id)handleForceTouchWithCompletion:(id /* block */)completion;

@end

#endif /* T1UnifiedCardTweetComposerDestinationHandler_h */
