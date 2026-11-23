//
#ifndef T1ReportingAuthTokenStorage_h
#define T1ReportingAuthTokenStorage_h
@import Foundation;

#include "TFSTwitterAuthTimelineTokenStorageDelegate-Protocol.h"

@class NSObject, NSString;

@interface T1ReportingAuthTokenStorage : NSObject <TFSTwitterAuthTimelineTokenStorageDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)setAuthTimelineToken:(id)token;
- (id)authTimelineToken;

@end

#endif /* T1ReportingAuthTokenStorage_h */
