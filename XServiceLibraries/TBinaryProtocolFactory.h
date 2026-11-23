//
#ifndef TBinaryProtocolFactory_h
#define TBinaryProtocolFactory_h
@import Foundation;

#include "TProtocolFactory-Protocol.h"

@class NSObject, NSString;

@interface TBinaryProtocolFactory : NSObject <TProtocolFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedFactory;

/* instance methods */
- (id)newProtocolOnTransport:(id)transport;

@end

#endif /* TBinaryProtocolFactory_h */
