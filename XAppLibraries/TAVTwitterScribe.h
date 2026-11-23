//
#ifndef TAVTwitterScribe_h
#define TAVTwitterScribe_h
@import Foundation;

#include "TAVScribe-Protocol.h"
#include "TFNTwitterPromotedEventLogger.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TFSTwitterPromotedLoggable-Protocol.h"

@class NSObject;

@interface TAVTwitterScribe : NSObject <TAVScribe>

@property (readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (readonly, nonatomic) TFNTwitterPromotedEventLogger *promotedEventLogger;
@property (readonly, nonatomic) id <TFSTwitterPromotedLoggable> logInput;

/* class methods */
+ (id)promotedEventFromName:(id)name;

/* instance methods */
- (id)initWithScribe:(id)scribe promotedEventLogger:(id)logger logInput:(id)input;
- (id)init;
- (void)logClientEventWithName:(id)name parameters:(id)parameters;
- (void)logPromotedEventWithName:(id)name parameters:(id)parameters;

@end

#endif /* TAVTwitterScribe_h */
