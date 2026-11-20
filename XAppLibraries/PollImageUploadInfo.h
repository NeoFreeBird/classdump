//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
