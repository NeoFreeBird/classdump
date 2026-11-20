//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCProfileDestinationDataImpl_h
#define TUCProfileDestinationDataImpl_h
@import Foundation;

#include "TUCProfileDestinationData-Protocol.h"

@class NSNumber, NSObject;

@interface TUCProfileDestinationDataImpl : NSObject <TUCProfileDestinationData> // (Swift)

@property (nonatomic, readonly) NSNumber *userID;

/* instance methods */
- (id)initWithUserID:(id)id;
- (id)init;

@end

#endif /* TUCProfileDestinationDataImpl_h */
