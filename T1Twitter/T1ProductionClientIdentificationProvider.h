//
#ifndef T1ProductionClientIdentificationProvider_h
#define T1ProductionClientIdentificationProvider_h
@import Foundation;

#include "TFSTwitterClientIdentificationProvider-Protocol.h"

@class NSObject, NSString;

@interface T1ProductionClientIdentificationProvider : NSObject <TFSTwitterClientIdentificationProvider> // (Swift)

@property (nonatomic, readonly) NSString *clientApplicationID;
@property (nonatomic, readonly) NSString *consumerKey;
@property (nonatomic, readonly) NSString *consumerSecret;

/* instance methods */
- (id)init;

@end

#endif /* T1ProductionClientIdentificationProvider_h */
