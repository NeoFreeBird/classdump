//
#ifndef TFNUIScribeSink_h
#define TFNUIScribeSink_h
@import Foundation;

#include "TFNScribeSink-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class NSObject, NSString;

@interface TFNUIScribeSink : NSObject <TFNScribeSink> {
    /* instance variables */
    id <TFSTwitterLegacyScribeLogMethods> _scribe;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScribe:(id)scribe;
- (void)receiveAction:(id)action withContext:(id)context;
- (void)receivedActionWithSender:(id)sender action:(id)action;

@end

#endif /* TFNUIScribeSink_h */
