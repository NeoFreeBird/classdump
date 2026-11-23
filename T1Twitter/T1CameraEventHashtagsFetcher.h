//
#ifndef T1CameraEventHashtagsFetcher_h
#define T1CameraEventHashtagsFetcher_h
@import Foundation;

#include "T1CameraEventHashtagsFetcherDelegate-Protocol.h"

@class NSObject, TFNTwitterAccount;

@interface T1CameraEventHashtagsFetcher : NSObject

@property (weak, nonatomic) id <T1CameraEventHashtagsFetcherDelegate> delegate;
@property (readonly, nonatomic) TFNTwitterAccount *account;

/* instance methods */
- (id)init;
- (id)initWithAccount:(id)account;
- (void)fetchCurrentEventHashtagsAtAccountCurrentLocation;
- (void)_t1_main_didFailToUpdateCurrentLocation:(id)location error:(id)error;
- (void)_t1_main_didLookupTypeaheadResults:(id)results;

@end

#endif /* T1CameraEventHashtagsFetcher_h */
