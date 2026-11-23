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
