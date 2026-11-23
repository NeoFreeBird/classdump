//
#ifndef T1DefaultProtocolHandlerConfiguration_h
#define T1DefaultProtocolHandlerConfiguration_h
@import Foundation;

#include "T1URLProtocolDefaultHandlerConfiguration-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface T1DefaultProtocolHandlerConfiguration : NSObject <T1URLProtocolDefaultHandlerConfiguration>

@property (readonly, nonatomic) NSDictionary *tabMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)tabForT1PanelID:(long long)id;
- (long long)panelIDForTab:(id)tab;
- (long long)panelIDForTab:(id)tab context:(id)context;

@end

#endif /* T1DefaultProtocolHandlerConfiguration_h */
