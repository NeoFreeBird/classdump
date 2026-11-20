//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterDisplaySessionManager_h
#define TFNTwitterDisplaySessionManager_h
@import Foundation;

#include "TFNTwitterPromotedEventLogger.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class NSMutableDictionary, NSObject;

@interface TFNTwitterDisplaySessionManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *displaySessionMap;
@property (readonly, nonatomic) TFNTwitterPromotedEventLogger *promotedEventLogger;
@property (readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> clientEventsScribe;

/* instance methods */
- (id)initWithPromotedEventLogger:(id)logger;
- (id)initWithPromotedEventLogger:(id)logger clientEventsScribe:(id)scribe;
- (id)displaySessionForImpressionID:(id)id;
- (void)startDisplaySession:(id)session forImpressionID:(id)id;
- (void)endDisplaySessionForLogInput:(id)input impressionID:(id)id scribeContext:(id)context;
- (id)_tfn_displaySessionForKey:(id)key;
- (void)_tfn_logClientEventForDisplaySession:(id)session scribeContext:(id)context;

@end

#endif /* TFNTwitterDisplaySessionManager_h */
