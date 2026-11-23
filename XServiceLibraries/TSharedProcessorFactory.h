//
#ifndef TSharedProcessorFactory_h
#define TSharedProcessorFactory_h
@import Foundation;

#include "TProcessorFactory-Protocol.h"

@class NSObject, NSString;
@protocol TProcessor;

@interface TSharedProcessorFactory : NSObject <TProcessorFactory> {
    /* instance variables */
    id <TProcessor> mSharedProcessor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSharedProcessor:(id)processor;
- (void)dealloc;
- (id)processorForTransport:(id)transport;

@end

#endif /* TSharedProcessorFactory_h */
