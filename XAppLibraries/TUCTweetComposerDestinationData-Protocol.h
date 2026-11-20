//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
