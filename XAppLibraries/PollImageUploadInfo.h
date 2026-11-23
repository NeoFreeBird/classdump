//
#ifndef PollImageUploadInfo_h
#define PollImageUploadInfo_h
@import Foundation;

#include "PollingCardProtocol-Protocol.h"

@class NSArray, NSObject;

@interface PollImageUploadInfo : NSObject // (Swift)

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) id <PollingCardProtocol> pollingCard;

/* instance methods */
- (id)initWithAssets:(id)assets pollingCard:(id)card;
- (id)init;

@end

#endif /* PollImageUploadInfo_h */
