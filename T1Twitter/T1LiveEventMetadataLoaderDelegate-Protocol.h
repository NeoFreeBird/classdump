//
#ifndef T1LiveEventMetadataLoaderDelegate_Protocol_h
#define T1LiveEventMetadataLoaderDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveEventMetadataLoaderDelegate <NSObject>

@required

/* required instance methods */
- (void)liveEventMetadataLoader:(id)loader didLoadMetadata:(id)metadata;
- (void)liveEventMetadataLoader:(id)loader loadFailedWithError:(id)error;

@optional

@end

#endif /* T1LiveEventMetadataLoaderDelegate_Protocol_h */
