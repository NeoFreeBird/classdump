//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSNTPClock_h
#define LHLSNTPClock_h
@import Foundation;

#include "LHLSNTPClockDelegate-Protocol.h"
#include "LHLSSocket-Protocol.h"
#include "LHLSSocketListener-Protocol.h"

@class NSDate, NSObject, NSString;

@interface LHLSNTPClock : NSObject <LHLSSocketListener> {
    /* instance variables */
    double _clockOffset;
    NSDate *_lastFetched;
    double _sentTime;
    id <LHLSSocket> _socket;
    id <LHLSNTPClockDelegate> _delegate;
    int _retryCount;
    _Bool _queryFailed;
}

@property (readonly) NSDate *now;
@property (readonly) double systemClockOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)setClock:(id)clock;
+ (id)clock;
+ (id)date;

/* instance methods */
- (id)init;
- (id)initWithDelegate:(id)delegate;
- (void)updateTimeIfNeeded;
- (void)sendRequest;
- (void)socketConnected:(id)connected error:(long long)error;
- (void)socketBound:(id)bound error:(long long)error;
- (void)socketClosed:(id)closed;
- (void)socket:(id)socket gotData:(id)data from:(id)from;

@end

#endif /* LHLSNTPClock_h */
