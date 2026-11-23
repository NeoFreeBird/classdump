//
#ifndef GDTCORTransport_h
#define GDTCORTransport_h
@import Foundation;

#include "GDTCORTransformer.h"

@class NSArray, NSObject, NSString;

@interface GDTCORTransport : NSObject

@property (retain, nonatomic) NSString *mappingID;
@property (retain, nonatomic) NSArray *transformers;
@property (nonatomic) long long target;
@property (retain, nonatomic) GDTCORTransformer *transformerInstance;

/* class methods */
+ (void)noop;

/* instance methods */
- (id)initWithMappingID:(id)id transformers:(id)transformers target:(long long)target;
- (void)sendTelemetryEvent:(id)event onComplete:(id /* block */)complete;
- (void)sendDataEvent:(id)event onComplete:(id /* block */)complete;
- (void)sendTelemetryEvent:(id)event;
- (void)sendDataEvent:(id)event;
- (id)eventForTransport;
- (id)eventForTransportWithProductData:(id)data;
- (void)sendEvent:(id)event onComplete:(id /* block */)complete;

@end

#endif /* GDTCORTransport_h */
