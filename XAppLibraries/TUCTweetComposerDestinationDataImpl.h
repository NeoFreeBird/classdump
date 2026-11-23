//
#ifndef TUCTweetComposerDestinationDataImpl_h
#define TUCTweetComposerDestinationDataImpl_h
@import Foundation;

#include "TUCTweetComposerDestinationData-Protocol.h"

@class NSObject, NSString, TFSTwitterEntityMedia;

@interface TUCTweetComposerDestinationDataImpl : NSObject <TUCTweetComposerDestinationData> // (Swift)

@property (nonatomic, readonly) NSString *tweetComposerText;
@property (nonatomic, readonly) TFSTwitterEntityMedia *mediaEntity;

/* instance methods */
- (id)initWithTweetComposerText:(id)text mediaEntity:(id)entity;
- (id)init;

@end

#endif /* TUCTweetComposerDestinationDataImpl_h */
