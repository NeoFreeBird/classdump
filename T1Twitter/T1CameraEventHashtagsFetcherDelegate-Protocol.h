//
#ifndef T1CameraEventHashtagsFetcherDelegate_Protocol_h
#define T1CameraEventHashtagsFetcherDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CameraEventHashtagsFetcherDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)cameraEventHashtagsFetcher:(id)fetcher didFetchCurrentEventHashtags:(id)hashtags error:(id)error;

@end

#endif /* T1CameraEventHashtagsFetcherDelegate_Protocol_h */
