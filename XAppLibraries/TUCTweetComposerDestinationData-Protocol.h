//
#ifndef TUCTweetComposerDestinationData_Protocol_h
#define TUCTweetComposerDestinationData_Protocol_h
@import Foundation;

#include "TUCMediaDestinationData-Protocol.h"

@class NSString;

@protocol TUCTweetComposerDestinationData <TUCMediaDestinationData>

@required

@property (nonatomic, readonly) NSString *tweetComposerText;

@optional

@end

#endif /* TUCTweetComposerDestinationData_Protocol_h */
